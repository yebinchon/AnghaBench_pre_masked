
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int* map; } ;



bool FUNC_0(const struct perf_cpu_map *VAR_0)
{
 return VAR_0 ? VAR_0->map[0] == -1 : 1;
}
