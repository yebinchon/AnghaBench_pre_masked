
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(void)
{
 int VAR_2;

 if (FUNC_0("kernel/perf_event_max_stack", &VAR_2) == 0)
  VAR_1 = VAR_2;

 if (FUNC_0("kernel/perf_event_max_contexts_per_stack", &VAR_2) == 0)
  VAR_0 = VAR_2;

 return VAR_1;
}
