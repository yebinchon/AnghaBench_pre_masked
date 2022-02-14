
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_notifier_mm {int lock; int list; } ;
struct mmu_notifier {int users; int hlist; struct mm_struct* mm; } ;
struct mm_struct {int mm_users; struct mmu_notifier_mm* mmu_notifier_mm; int mmap_sem; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct mmu_notifier_mm*) ;
 struct mmu_notifier_mm* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct mm_struct*) ;
 int FUNC_13 (struct mm_struct*) ;
 int FUNC_14 (struct mm_struct*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int) ;

int FUNC_19(struct mmu_notifier *VAR_4, struct mm_struct *VAR_5)
{
 struct mmu_notifier_mm *VAR_6 = ((void*)0);
 int VAR_7;

 FUNC_11(&VAR_5->mmap_sem);
 FUNC_0(FUNC_3(&VAR_5->mm_users) <= 0);

 if (FUNC_2(VAR_0)) {
  FUNC_4(VAR_2);
  FUNC_9(&VAR_3);
  FUNC_10(&VAR_3);
  FUNC_5(VAR_2);
 }

 VAR_4->mm = VAR_5;
 VAR_4->users = 1;

 if (!VAR_5->mmu_notifier_mm) {





  VAR_6 =
   FUNC_8(sizeof(struct mmu_notifier_mm), VAR_2);
  if (!VAR_6)
   return -VAR_1;

  FUNC_1(&VAR_6->list);
  FUNC_16(&VAR_6->lock);
 }

 VAR_7 = FUNC_13(VAR_5);
 if (FUNC_18(VAR_7))
  goto out_clean;


 FUNC_14(VAR_5);
 if (VAR_6)
  VAR_5->mmu_notifier_mm = VAR_6;

 FUNC_15(&VAR_5->mmu_notifier_mm->lock);
 FUNC_6(&VAR_4->hlist, &VAR_5->mmu_notifier_mm->list);
 FUNC_17(&VAR_5->mmu_notifier_mm->lock);

 FUNC_12(VAR_5);
 FUNC_0(FUNC_3(&VAR_5->mm_users) <= 0);
 return 0;

out_clean:
 FUNC_7(VAR_6);
 return VAR_7;
}
