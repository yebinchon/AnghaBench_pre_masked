
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z3fold_pool {int lock; } ;
struct z3fold_header {scalar_t__ mapped_count; int buddy; int refcount; } ;
struct page {int lru; int private; } ;
typedef int isolate_mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int,struct page*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct z3fold_header* FUNC_7 (struct page*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (struct z3fold_header*) ;
 int FUNC_12 (struct z3fold_header*) ;
 struct z3fold_pool* FUNC_13 (struct z3fold_header*) ;

__attribute__((used)) static bool FUNC_14(struct page *VAR_4, isolate_mode_t VAR_5)
{
 struct z3fold_header *VAR_6;
 struct z3fold_pool *VAR_7;

 FUNC_2(!FUNC_1(VAR_4), VAR_4);
 FUNC_2(FUNC_0(VAR_4), VAR_4);

 if (FUNC_10(VAR_2, &VAR_4->private) ||
     FUNC_10(VAR_1, &VAR_4->private))
  return 0;

 VAR_6 = FUNC_7(VAR_4);
 FUNC_11(VAR_6);
 if (FUNC_10(VAR_0, &VAR_4->private) ||
     FUNC_10(VAR_3, &VAR_4->private))
  goto out;

 VAR_7 = FUNC_13(VAR_6);

 if (VAR_6->mapped_count == 0) {
  FUNC_3(&VAR_6->refcount);
  if (!FUNC_6(&VAR_6->buddy))
   FUNC_5(&VAR_6->buddy);
  FUNC_8(&VAR_7->lock);
  if (!FUNC_6(&VAR_4->lru))
   FUNC_4(&VAR_4->lru);
  FUNC_9(&VAR_7->lock);
  FUNC_12(VAR_6);
  return 1;
 }
out:
 FUNC_12(VAR_6);
 return 0;
}
