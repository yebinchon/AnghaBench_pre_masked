
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z3fold_pool {int compact_wq; int lock; int lru; } ;
struct z3fold_header {scalar_t__ mapped_count; int work; int cpu; scalar_t__ middle_chunks; scalar_t__ last_chunks; scalar_t__ first_chunks; int buddy; int page_lock; } ;
struct page {int lru; scalar_t__ private; } ;
struct address_space {int dummy; } ;
typedef enum migrate_mode { ____Placeholder_migrate_mode } migrate_mode ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int,struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*,struct address_space*) ;
 int VAR_7 ;
 int FUNC_9 (struct z3fold_header*,int ) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (struct z3fold_header*,struct z3fold_header*,int ) ;
 struct z3fold_header* FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 struct address_space* FUNC_15 (struct page*) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (int ,int ,int *) ;
 int FUNC_18 (int ,scalar_t__*) ;
 int FUNC_19 () ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int *) ;
 int FUNC_24 (struct z3fold_header*) ;
 int FUNC_25 (struct z3fold_header*) ;
 int FUNC_26 (struct z3fold_header*) ;
 struct z3fold_pool* FUNC_27 (struct z3fold_header*) ;

__attribute__((used)) static int FUNC_28(struct address_space *VAR_8, struct page *VAR_9,
          struct page *VAR_10, enum migrate_mode VAR_11)
{
 struct z3fold_header *VAR_12, *VAR_13;
 struct z3fold_pool *VAR_14;
 struct address_space *VAR_15;

 FUNC_6(!FUNC_5(VAR_10), VAR_10);
 FUNC_6(!FUNC_3(VAR_10), VAR_10);
 FUNC_6(!FUNC_4(VAR_9), VAR_9);

 VAR_12 = FUNC_13(VAR_10);
 VAR_14 = FUNC_27(VAR_12);

 if (!FUNC_25(VAR_12)) {
  return -VAR_0;
 }
 if (VAR_12->mapped_count != 0) {
  FUNC_26(VAR_12);
  return -VAR_1;
 }
 if (FUNC_23(&VAR_12->work)) {
  FUNC_26(VAR_12);
  return -VAR_0;
 }
 VAR_13 = FUNC_13(VAR_9);
 FUNC_12(VAR_13, VAR_12, VAR_6);
 VAR_9->private = VAR_10->private;
 VAR_10->private = 0;
 FUNC_26(VAR_12);
 FUNC_21(&VAR_13->page_lock);
 FUNC_2(&VAR_13->work, VAR_7);




 FUNC_1(&VAR_13->buddy);
 VAR_15 = FUNC_15(VAR_10);
 FUNC_7(VAR_10);
 FUNC_0(VAR_10);

 FUNC_10(VAR_9);
 FUNC_24(VAR_13);
 if (VAR_13->first_chunks)
  FUNC_9(VAR_13, VAR_2);
 if (VAR_13->last_chunks)
  FUNC_9(VAR_13, VAR_3);
 if (VAR_13->middle_chunks)
  FUNC_9(VAR_13, VAR_4);
 FUNC_18(VAR_5, &VAR_9->private);
 VAR_13->cpu = FUNC_19();
 FUNC_20(&VAR_14->lock);
 FUNC_11(&VAR_9->lru, &VAR_14->lru);
 FUNC_22(&VAR_14->lock);
 FUNC_8(VAR_9, VAR_15);
 FUNC_26(VAR_13);

 FUNC_17(VAR_13->cpu, VAR_14->compact_wq, &VAR_13->work);

 FUNC_14(VAR_10);
 FUNC_16(VAR_10);
 return 0;
}
