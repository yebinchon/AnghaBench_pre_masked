
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lru_cache {unsigned int nr_elements; struct lru_cache* lc_slot; struct lru_cache* lc_element; } ;


 int FUNC_0 (struct lru_cache*) ;
 int FUNC_1 (struct lru_cache*,unsigned int) ;

void FUNC_2(struct lru_cache *VAR_0)
{
 unsigned VAR_1;
 if (!VAR_0)
  return;
 for (VAR_1 = 0; VAR_1 < VAR_0->nr_elements; VAR_1++)
  FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_0->lc_element);
 FUNC_0(VAR_0->lc_slot);
 FUNC_0(VAR_0);
}
