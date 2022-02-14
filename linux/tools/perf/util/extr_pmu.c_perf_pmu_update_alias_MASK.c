
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pmu_alias {int unit; int snapshot; int per_pkg; int scale; int str; int name; int metric_name; int metric_expr; int topic; int long_desc; int desc; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*,int *,int *) ;

__attribute__((used)) static void FUNC_2(struct perf_pmu_alias *VAR_0,
      struct perf_pmu_alias *VAR_1)
{
 FUNC_1(VAR_0->name, "desc", &VAR_0->desc, &VAR_1->desc);
 FUNC_1(VAR_0->name, "long_desc", &VAR_0->long_desc,
       &VAR_1->long_desc);
 FUNC_1(VAR_0->name, "topic", &VAR_0->topic, &VAR_1->topic);
 FUNC_1(VAR_0->name, "metric_expr", &VAR_0->metric_expr,
       &VAR_1->metric_expr);
 FUNC_1(VAR_0->name, "metric_name", &VAR_0->metric_name,
       &VAR_1->metric_name);
 FUNC_1(VAR_0->name, "value", &VAR_0->str, &VAR_1->str);
 VAR_0->scale = VAR_1->scale;
 VAR_0->per_pkg = VAR_1->per_pkg;
 VAR_0->snapshot = VAR_1->snapshot;
 FUNC_0(VAR_0->unit, VAR_1->unit, sizeof(VAR_0->unit));
}
