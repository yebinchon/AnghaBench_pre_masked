
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
struct perf_tool {int dummy; } ;
struct machine {int dummy; } ;
typedef int pid_t ;
typedef int perf_event__handler_t ;


 scalar_t__ FUNC_0 (union perf_event*,int,struct machine*,int*,int*) ;
 scalar_t__ FUNC_1 (struct perf_tool*,union perf_event*,struct machine*,int ) ;

pid_t FUNC_2(struct perf_tool *VAR_0,
      union perf_event *VAR_1, pid_t VAR_2,
      perf_event__handler_t VAR_3,
      struct machine *VAR_4)
{
 pid_t VAR_5, VAR_6;

 if (FUNC_0(VAR_1, VAR_2, VAR_4, &VAR_5, &VAR_6) != 0)
  return -1;

 if (FUNC_1(VAR_0, VAR_1, VAR_4, VAR_3) != 0)
  return -1;

 return VAR_5;
}
