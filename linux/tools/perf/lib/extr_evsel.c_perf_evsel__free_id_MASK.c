
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evsel {scalar_t__ ids; int id; int * sample_id; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct perf_evsel *VAR_0)
{
 FUNC_0(VAR_0->sample_id);
 VAR_0->sample_id = ((void*)0);
 FUNC_1(&VAR_0->id);
 VAR_0->ids = 0;
}
