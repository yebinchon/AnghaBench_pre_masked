
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z3fold_pool {int lock; int lru; int pages_nr; } ;
struct z3fold_header {int refcount; int buddy; } ;
struct page {int lru; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct z3fold_header* FUNC_6 (struct page*) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct z3fold_header*) ;
 int FUNC_10 (struct z3fold_header*) ;
 struct z3fold_pool* FUNC_11 (struct z3fold_header*) ;

__attribute__((used)) static void FUNC_12(struct page *VAR_1)
{
 struct z3fold_header *VAR_2;
 struct z3fold_pool *VAR_3;

 VAR_2 = FUNC_6(VAR_1);
 VAR_3 = FUNC_11(VAR_2);

 FUNC_9(VAR_2);
 if (!FUNC_5(&VAR_2->buddy))
  FUNC_4(&VAR_2->buddy);
 FUNC_0(&VAR_1->lru);
 if (FUNC_2(&VAR_2->refcount, VAR_0)) {
  FUNC_1(&VAR_3->pages_nr);
  return;
 }
 FUNC_7(&VAR_3->lock);
 FUNC_3(&VAR_1->lru, &VAR_3->lru);
 FUNC_8(&VAR_3->lock);
 FUNC_10(VAR_2);
}
