
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct perf_cpu_map* color_cpus; int color_cpus_str; } ;
struct perf_sched {TYPE_1__ map; } ;
struct perf_cpu_map {int dummy; } ;


 struct perf_cpu_map* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct perf_sched *VAR_0)
{
 struct perf_cpu_map *VAR_1;

 if (!VAR_0->map.color_cpus_str)
  return 0;

 VAR_1 = FUNC_0(VAR_0->map.color_cpus_str);
 if (!VAR_1) {
  FUNC_1("failed to get thread map from %s\n", VAR_0->map.color_cpus_str);
  return -1;
 }

 VAR_0->map.color_cpus = VAR_1;
 return 0;
}
