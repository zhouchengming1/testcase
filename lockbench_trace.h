#undef TRACE_SYSTEM
#define TRACE_SYSTEM lockbench

#if !defined(_LOCKBENCH_TRACE_H_) || defined(TRACE_HEADER_MULTI_READ)
#define _LOCKBENCH_TRACE_H_

#include <linux/tracepoint.h>

TRACE_EVENT(lock,
	TP_PROTO(void *unused),
	TP_ARGS(unused),
	TP_STRUCT__entry(),
	TP_fast_assign(),
	TP_printk()
);

TRACE_EVENT(unlock,
	TP_PROTO(void *unused),
	TP_ARGS(unused),
	TP_STRUCT__entry(),
	TP_fast_assign(),
	TP_printk()
);

#endif

#undef TRACE_INCLUDE_PATH
#define TRACE_INCLUDE_PATH .
#define TRACE_INCLUDE_FILE lockbench_trace

#include <trace/define_trace.h>
