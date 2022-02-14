
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z3fold_pool {int stale_lock; int work; int release_wq; int stale; int lock; } ;
struct z3fold_header {int buddy; } ;
struct page {int lru; int private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct page* FUNC_9 (struct z3fold_header*) ;
 int FUNC_10 (struct z3fold_header*) ;
 struct z3fold_pool* FUNC_11 (struct z3fold_header*) ;

__attribute__((used)) static void FUNC_12(struct z3fold_header *VAR_2, bool VAR_3)
{
 struct page *VAR_4 = FUNC_9(VAR_2);
 struct z3fold_pool *VAR_5 = FUNC_11(VAR_2);

 FUNC_0(!FUNC_4(&VAR_2->buddy));
 FUNC_6(VAR_1, &VAR_4->private);
 FUNC_1(VAR_0, &VAR_4->private);
 FUNC_7(&VAR_5->lock);
 if (!FUNC_4(&VAR_4->lru))
  FUNC_3(&VAR_4->lru);
 FUNC_8(&VAR_5->lock);
 if (VAR_3)
  FUNC_10(VAR_2);
 FUNC_7(&VAR_5->stale_lock);
 FUNC_2(&VAR_2->buddy, &VAR_5->stale);
 FUNC_5(VAR_5->release_wq, &VAR_5->work);
 FUNC_8(&VAR_5->stale_lock);
}
