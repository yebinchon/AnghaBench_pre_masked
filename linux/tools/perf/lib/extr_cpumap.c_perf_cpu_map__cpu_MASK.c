
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int nr; int* map; } ;



int FUNC_0(const struct perf_cpu_map *VAR_0, int VAR_1)
{
 if (VAR_1 < VAR_0->nr)
  return VAR_0->map[VAR_1];

 return -1;
}
