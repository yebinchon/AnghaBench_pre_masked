
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pmu_alias {int terms; int metric_name; int metric_expr; int str; int topic; int long_desc; int desc; int name; } ;


 int FUNC_0 (struct perf_pmu_alias*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct perf_pmu_alias *VAR_0)
{
 FUNC_2(&VAR_0->name);
 FUNC_2(&VAR_0->desc);
 FUNC_2(&VAR_0->long_desc);
 FUNC_2(&VAR_0->topic);
 FUNC_2(&VAR_0->str);
 FUNC_2(&VAR_0->metric_expr);
 FUNC_2(&VAR_0->metric_name);
 FUNC_1(&VAR_0->terms);
 FUNC_0(VAR_0);
}
