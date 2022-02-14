
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pmu {int selectable; int is_uncore; } ;
struct perf_event_attr {int sample_period; } ;


 int FUNC_0 (struct perf_pmu*,char*,char*,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 struct perf_event_attr* FUNC_3 (int) ;

struct perf_event_attr
*FUNC_4(struct perf_pmu *VAR_0)
{
 struct perf_event_attr *VAR_1;

 VAR_1 = FUNC_3(sizeof(struct perf_event_attr));
 if (!VAR_1) {
  FUNC_2("arm_spe default config cannot allocate a perf_event_attr\n");
  return ((void*)0);
 }





 if (FUNC_0(VAR_0, "caps/min_interval", "%llu",
      &VAR_1->sample_period) != 1) {
  FUNC_1("arm_spe driver doesn't advertise a min. interval. Using 4096\n");
  VAR_1->sample_period = 4096;
 }

 VAR_0->selectable = 1;
 VAR_0->is_uncore = 0;

 return VAR_1;
}
