
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int dummy; } ;
struct perf_evsel {struct perf_event_attr attr; int node; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct perf_evsel *VAR_0, struct perf_event_attr *VAR_1)
{
 FUNC_0(&VAR_0->node);
 VAR_0->attr = *VAR_1;
}
