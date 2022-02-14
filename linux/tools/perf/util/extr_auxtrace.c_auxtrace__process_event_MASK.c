
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union perf_event {int dummy; } perf_event ;
struct perf_tool {int dummy; } ;
struct perf_session {TYPE_1__* auxtrace; } ;
struct perf_sample {int dummy; } ;
struct TYPE_2__ {int (* process_event ) (struct perf_session*,union perf_event*,struct perf_sample*,struct perf_tool*) ;} ;


 int FUNC_0 (struct perf_session*,union perf_event*,struct perf_sample*,struct perf_tool*) ;

int FUNC_1(struct perf_session *VAR_0, union perf_event *VAR_1,
       struct perf_sample *VAR_2, struct perf_tool *VAR_3)
{
 if (!VAR_0->auxtrace)
  return 0;

 return VAR_0->auxtrace->process_event(VAR_0, VAR_1, VAR_2, VAR_3);
}
