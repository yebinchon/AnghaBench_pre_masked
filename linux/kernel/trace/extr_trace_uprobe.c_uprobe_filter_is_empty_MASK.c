
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_uprobe_filter {int perf_events; int nr_systemwide; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct trace_uprobe_filter *VAR_0)
{
 return !VAR_0->nr_systemwide && FUNC_0(&VAR_0->perf_events);
}
