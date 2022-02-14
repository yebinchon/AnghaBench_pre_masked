
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int nr; int* map; int refcnt; } ;


 struct perf_cpu_map* FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;

struct perf_cpu_map *FUNC_2(void)
{
 struct perf_cpu_map *VAR_0 = FUNC_0(sizeof(*VAR_0) + sizeof(int));

 if (VAR_0 != ((void*)0)) {
  VAR_0->nr = 1;
  VAR_0->map[0] = -1;
  FUNC_1(&VAR_0->refcnt, 1);
 }

 return VAR_0;
}
