
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int nr; int* map; } ;



int FUNC_0(struct perf_cpu_map *VAR_0)
{
 int VAR_1, VAR_2 = -1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr; VAR_1++) {
  if (VAR_0->map[VAR_1] > VAR_2)
   VAR_2 = VAR_0->map[VAR_1];
 }

 return VAR_2;
}
