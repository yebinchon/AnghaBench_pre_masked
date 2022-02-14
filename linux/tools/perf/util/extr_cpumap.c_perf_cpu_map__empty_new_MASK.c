
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int nr; int* map; int refcnt; } ;


 struct perf_cpu_map* FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;

struct perf_cpu_map *FUNC_2(int VAR_0)
{
 struct perf_cpu_map *VAR_1 = FUNC_0(sizeof(*VAR_1) + sizeof(int) * VAR_0);

 if (VAR_1 != ((void*)0)) {
  int VAR_2;

  VAR_1->nr = VAR_0;
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   VAR_1->map[VAR_2] = -1;

  FUNC_1(&VAR_1->refcnt, 1);
 }

 return VAR_1;
}
