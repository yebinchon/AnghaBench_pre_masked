
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pmu {int selectable; } ;
struct perf_event_attr {int config; } ;


 int FUNC_0 (struct perf_pmu*) ;
 struct perf_event_attr* FUNC_1 (int) ;

struct perf_event_attr *
FUNC_2(struct perf_pmu *VAR_0)
{
 struct perf_event_attr *VAR_1;

 VAR_1 = FUNC_1(sizeof(struct perf_event_attr));
 if (!VAR_1)
  return ((void*)0);

 VAR_1->config = FUNC_0(VAR_0);

 VAR_0->selectable = 1;

 return VAR_1;
}
