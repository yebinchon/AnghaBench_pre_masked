
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_env {int nr_cpus_avail; } ;
struct perf_cpu_map {int nr; int* map; } ;



__attribute__((used)) static inline int FUNC_0(struct perf_env *VAR_0, struct perf_cpu_map *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_2 > VAR_1->nr)
  return -1;

 VAR_3 = VAR_1->map[VAR_2];

 if (VAR_3 >= VAR_0->nr_cpus_avail)
  return -1;

 return VAR_3;
}
