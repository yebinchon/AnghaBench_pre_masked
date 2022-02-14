
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lru_cache {int free; } ;
struct lc_element {int list; int colision; int lc_new_number; int lc_number; int refcnt; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct lru_cache*,struct lc_element*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

void FUNC_6(struct lru_cache *VAR_1, struct lc_element *VAR_2)
{
 FUNC_1();
 FUNC_2(VAR_1, VAR_2);
 FUNC_0(VAR_2->refcnt);

 VAR_2->lc_number = VAR_2->lc_new_number = VAR_0;
 FUNC_4(&VAR_2->colision);
 FUNC_5(&VAR_2->list, &VAR_1->free);
 FUNC_3();
}
