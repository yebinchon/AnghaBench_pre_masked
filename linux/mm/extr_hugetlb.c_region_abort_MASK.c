
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resv_map {int lock; int adds_in_progress; int region_cache_count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct resv_map *VAR_0, long VAR_1, long VAR_2)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(!VAR_0->region_cache_count);
 VAR_0->adds_in_progress--;
 FUNC_2(&VAR_0->lock);
}
