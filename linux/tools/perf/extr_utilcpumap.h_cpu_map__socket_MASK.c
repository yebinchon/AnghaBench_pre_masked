
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int nr; int* map; } ;



__attribute__((used)) static inline int FUNC_0(struct perf_cpu_map *VAR_0, int VAR_1)
{
 if (!VAR_0 || VAR_1 > VAR_0->nr || VAR_1 < 0)
  return 0;
 return VAR_0->map[VAR_1];
}
