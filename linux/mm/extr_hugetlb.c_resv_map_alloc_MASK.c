
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resv_map {int region_cache_count; int region_cache; int link; scalar_t__ adds_in_progress; int regions; int lock; int refs; } ;
struct file_region {int region_cache_count; int region_cache; int link; scalar_t__ adds_in_progress; int regions; int lock; int refs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct resv_map*) ;
 struct resv_map* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

struct resv_map *FUNC_6(void)
{
 struct resv_map *VAR_1 = FUNC_2(sizeof(*VAR_1), VAR_0);
 struct file_region *VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);

 if (!VAR_1 || !VAR_2) {
  FUNC_1(VAR_1);
  FUNC_1(VAR_2);
  return ((void*)0);
 }

 FUNC_3(&VAR_1->refs);
 FUNC_5(&VAR_1->lock);
 FUNC_0(&VAR_1->regions);

 VAR_1->adds_in_progress = 0;

 FUNC_0(&VAR_1->region_cache);
 FUNC_4(&VAR_2->link, &VAR_1->region_cache);
 VAR_1->region_cache_count = 1;

 return VAR_1;
}
