
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_call {int dummy; } ;
struct perf_event {int dummy; } ;


 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct trace_event_call*,struct perf_event*) ;
 int FUNC_2 (struct trace_event_call*,struct perf_event*) ;
 int FUNC_3 (struct perf_event*) ;

__attribute__((used)) static int FUNC_4(struct trace_event_call *VAR_0,
     struct perf_event *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2) {
  FUNC_3(VAR_1);
  return VAR_2;
 }

 return 0;
}
