
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* tid; void* pid; } ;
union perf_event {TYPE_1__ itrace_start; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (union perf_event*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(union perf_event *VAR_0,
       bool VAR_1)
{
 VAR_0->itrace_start.pid = FUNC_0(VAR_0->itrace_start.pid);
 VAR_0->itrace_start.tid = FUNC_0(VAR_0->itrace_start.tid);

 if (VAR_1)
  FUNC_1(VAR_0, &VAR_0->itrace_start + 1);
}
