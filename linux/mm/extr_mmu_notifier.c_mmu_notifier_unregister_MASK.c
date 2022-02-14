
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmu_notifier {int hlist; TYPE_1__* ops; } ;
struct mm_struct {int mm_count; TYPE_2__* mmu_notifier_mm; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int (* release ) (struct mmu_notifier*,struct mm_struct*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mm_struct*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (struct mmu_notifier*,struct mm_struct*) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct mmu_notifier *VAR_1, struct mm_struct *VAR_2)
{
 FUNC_0(FUNC_1(&VAR_2->mm_count) <= 0);

 if (!FUNC_3(&VAR_1->hlist)) {




  int VAR_3;

  VAR_3 = FUNC_7(&VAR_0);




  if (VAR_1->ops->release)
   VAR_1->ops->release(VAR_1, VAR_2);
  FUNC_8(&VAR_0, VAR_3);

  FUNC_5(&VAR_2->mmu_notifier_mm->lock);




  FUNC_2(&VAR_1->hlist);
  FUNC_6(&VAR_2->mmu_notifier_mm->lock);
 }





 FUNC_10(&VAR_0);

 FUNC_0(FUNC_1(&VAR_2->mm_count) <= 0);

 FUNC_4(VAR_2);
}
