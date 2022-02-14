
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int nr; int* map; int refcnt; } ;


 struct perf_cpu_map* FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int*,size_t,int,int ) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(struct perf_cpu_map *VAR_1, struct perf_cpu_map **VAR_2,
         int (*VAR_3)(struct perf_cpu_map *VAR_4, int VAR_5, void *VAR_6),
         void *VAR_7)
{
 struct perf_cpu_map *VAR_8;
 int VAR_9 = VAR_1->nr;
 int VAR_10, VAR_11, VAR_12;


 VAR_8 = FUNC_0(1, sizeof(*VAR_8) + VAR_9 * sizeof(int));
 if (!VAR_8)
  return -1;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  VAR_11 = VAR_3(VAR_1, VAR_10, VAR_7);
  for (VAR_12 = 0; VAR_12 < VAR_8->nr; VAR_12++) {
   if (VAR_11 == VAR_8->map[VAR_12])
    break;
  }
  if (VAR_12 == VAR_8->nr) {
   VAR_8->map[VAR_8->nr] = VAR_11;
   VAR_8->nr++;
  }
 }

 FUNC_1(VAR_8->map, VAR_8->nr, sizeof(int), VAR_0);

 FUNC_2(&VAR_8->refcnt, 1);
 *VAR_2 = VAR_8;
 return 0;
}
