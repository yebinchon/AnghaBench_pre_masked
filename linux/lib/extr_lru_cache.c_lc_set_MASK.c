
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct lru_cache {int nr_elements; struct list_head lru; struct list_head free; } ;
struct lc_element {unsigned int lc_number; unsigned int lc_new_number; scalar_t__ refcnt; int list; int colision; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 struct lc_element* FUNC_3 (struct lru_cache*,int) ;
 int FUNC_4 (struct lru_cache*,unsigned int) ;
 int FUNC_5 (int *,struct list_head*) ;

void FUNC_6(struct lru_cache *VAR_1, unsigned int VAR_2, int VAR_3)
{
 struct lc_element *VAR_4;
 struct list_head *VAR_5;

 if (VAR_3 < 0 || VAR_3 >= VAR_1->nr_elements)
  return;

 VAR_4 = FUNC_3(VAR_1, VAR_3);
 FUNC_0(VAR_4->lc_number != VAR_4->lc_new_number);
 FUNC_0(VAR_4->refcnt != 0);

 VAR_4->lc_number = VAR_4->lc_new_number = VAR_2;
 FUNC_2(&VAR_4->colision);
 if (VAR_2 == VAR_0)
  VAR_5 = &VAR_1->free;
 else {
  FUNC_1(&VAR_4->colision, FUNC_4(VAR_1, VAR_2));
  VAR_5 = &VAR_1->lru;
 }
 FUNC_5(&VAR_4->list, VAR_5);
}
