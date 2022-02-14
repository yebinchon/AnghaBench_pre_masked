
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_events_map {int cpuid; int table; } ;
struct perf_pmu {int dummy; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (struct perf_pmu*) ;
 struct pmu_events_map* VAR_0 ;
 int FUNC_2 (int ,char*) ;

struct pmu_events_map *FUNC_3(struct perf_pmu *VAR_1)
{
 struct pmu_events_map *VAR_2;
 char *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;




 if (!VAR_3)
  return ((void*)0);

 VAR_4 = 0;
 for (;;) {
  VAR_2 = &VAR_0[VAR_4++];
  if (!VAR_2->table) {
   VAR_2 = ((void*)0);
   break;
  }

  if (!FUNC_2(VAR_2->cpuid, VAR_3))
   break;
 }
 FUNC_0(VAR_3);
 return VAR_2;
}
