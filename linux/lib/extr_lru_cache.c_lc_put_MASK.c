
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lru_cache {int flags; int used; int lru; } ;
struct lc_element {scalar_t__ refcnt; scalar_t__ lc_number; scalar_t__ lc_new_number; int list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct lru_cache*,struct lc_element*) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int *) ;

unsigned int FUNC_6(struct lru_cache *VAR_1, struct lc_element *VAR_2)
{
 FUNC_1();
 FUNC_2(VAR_1, VAR_2);
 FUNC_0(VAR_2->refcnt == 0);
 FUNC_0(VAR_2->lc_number != VAR_2->lc_new_number);
 if (--VAR_2->refcnt == 0) {

  FUNC_5(&VAR_2->list, &VAR_1->lru);
  VAR_1->used--;
  FUNC_4(VAR_0, &VAR_1->flags);
 }
 FUNC_3(VAR_2->refcnt);
}
