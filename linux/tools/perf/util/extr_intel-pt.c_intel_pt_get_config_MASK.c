
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_event_attr {scalar_t__ type; int config; } ;
struct intel_pt {scalar_t__ pmu_type; } ;



__attribute__((used)) static bool FUNC_0(struct intel_pt *VAR_0,
    struct perf_event_attr *VAR_1, u64 *VAR_2)
{
 if (VAR_1->type == VAR_0->pmu_type) {
  if (VAR_2)
   *VAR_2 = VAR_1->config;
  return 1;
 }

 return 0;
}
