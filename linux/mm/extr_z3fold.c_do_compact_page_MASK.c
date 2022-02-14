
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z3fold_pool {int pages_nr; int lock; } ;
struct z3fold_header {int refcount; int buddy; } ;
struct page {int private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct z3fold_pool*,struct z3fold_header*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int) ;
 struct page* FUNC_11 (struct z3fold_header*) ;
 int FUNC_12 (struct z3fold_header*) ;
 int FUNC_13 (struct z3fold_header*) ;
 int FUNC_14 (struct z3fold_header*) ;
 int FUNC_15 (struct z3fold_header*) ;
 struct z3fold_pool* FUNC_16 (struct z3fold_header*) ;

__attribute__((used)) static void FUNC_17(struct z3fold_header *VAR_4, bool VAR_5)
{
 struct z3fold_pool *VAR_6 = FUNC_16(VAR_4);
 struct page *VAR_7;

 VAR_7 = FUNC_11(VAR_4);
 if (VAR_5)
  FUNC_1(FUNC_14(VAR_4));
 else
  FUNC_13(VAR_4);
 if (FUNC_1(!FUNC_8(VAR_0, &VAR_7->private))) {
  FUNC_15(VAR_4);
  return;
 }
 FUNC_6(&VAR_6->lock);
 FUNC_5(&VAR_4->buddy);
 FUNC_7(&VAR_6->lock);

 if (FUNC_4(&VAR_4->refcount, VAR_3)) {
  FUNC_3(&VAR_6->pages_nr);
  return;
 }

 if (FUNC_10(FUNC_0(VAR_7) ||
       FUNC_9(VAR_1, &VAR_7->private) ||
       FUNC_9(VAR_2, &VAR_7->private))) {
  FUNC_15(VAR_4);
  return;
 }

 FUNC_12(VAR_4);
 FUNC_2(VAR_6, VAR_4);
 FUNC_15(VAR_4);
}
