
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_head {int cache_list; } ;
struct cache_detail {int hash_lock; int entries; } ;


 int FUNC_0 (struct cache_head*,struct cache_detail*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct cache_detail *VAR_0, struct cache_head *VAR_1)
{
 FUNC_3(&VAR_0->hash_lock);
 if (!FUNC_2(&VAR_1->cache_list)){
  FUNC_1(&VAR_1->cache_list);
  VAR_0->entries--;
  FUNC_4(&VAR_0->hash_lock);
  FUNC_0(VAR_1, VAR_0);
 } else
  FUNC_4(&VAR_0->hash_lock);
}
