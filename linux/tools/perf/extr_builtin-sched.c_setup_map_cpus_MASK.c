
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct perf_cpu_map* cpus; int cpus_str; int comp_cpus; scalar_t__ comp; } ;
struct perf_sched {int max_cpu; TYPE_1__ map; } ;
struct perf_cpu_map {int dummy; } ;


 int VAR_0 ;
 struct perf_cpu_map* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct perf_sched *VAR_1)
{
 struct perf_cpu_map *VAR_2;

 VAR_1->max_cpu = FUNC_2(VAR_0);

 if (VAR_1->map.comp) {
  VAR_1->map.comp_cpus = FUNC_3(VAR_1->max_cpu * sizeof(int));
  if (!VAR_1->map.comp_cpus)
   return -1;
 }

 if (!VAR_1->map.cpus_str)
  return 0;

 VAR_2 = FUNC_0(VAR_1->map.cpus_str);
 if (!VAR_2) {
  FUNC_1("failed to get cpus map from %s\n", VAR_1->map.cpus_str);
  return -1;
 }

 VAR_1->map.cpus = VAR_2;
 return 0;
}
