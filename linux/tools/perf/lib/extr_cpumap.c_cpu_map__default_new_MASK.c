
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int* map; int nr; int refcnt; } ;


 int VAR_0 ;
 struct perf_cpu_map* FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct perf_cpu_map *FUNC_3(void)
{
 struct perf_cpu_map *VAR_1;
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 < 0)
  return ((void*)0);

 VAR_1 = FUNC_0(sizeof(*VAR_1) + VAR_2 * sizeof(int));
 if (VAR_1 != ((void*)0)) {
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
   VAR_1->map[VAR_3] = VAR_3;

  VAR_1->nr = VAR_2;
  FUNC_1(&VAR_1->refcnt, 1);
 }

 return VAR_1;
}
