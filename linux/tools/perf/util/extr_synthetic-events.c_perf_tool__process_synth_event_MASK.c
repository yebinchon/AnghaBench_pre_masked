
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int misc; } ;
union perf_event {TYPE_1__ header; } ;
struct perf_tool {int dummy; } ;
struct perf_sample {int pid; int tid; int time; int stream_id; int cpu; int period; int cpumode; } ;
struct machine {int dummy; } ;
typedef int (* perf_event__handler_t ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;


 int VAR_0 ;

int FUNC_0(struct perf_tool *VAR_1,
       union perf_event *VAR_2,
       struct machine *VAR_3,
       perf_event__handler_t VAR_4)
{
 struct perf_sample VAR_5 = {
  .pid = -1,
  .tid = -1,
  .time = -1,
  .stream_id = -1,
  .cpu = -1,
  .period = 1,
  .cpumode = VAR_2->header.misc & VAR_0,
 };

 return VAR_4(VAR_1, VAR_2, &VAR_5, VAR_3);
}
