
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmu_notifier {int rcu; int hlist; scalar_t__ users; struct mm_struct* mm; } ;
struct mm_struct {TYPE_1__* mmu_notifier_mm; } ;
struct TYPE_2__ {int lock; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

void FUNC_5(struct mmu_notifier *VAR_2)
{
 struct mm_struct *VAR_3 = VAR_2->mm;

 FUNC_3(&VAR_3->mmu_notifier_mm->lock);
 if (FUNC_0(!VAR_2->users) || --VAR_2->users)
  goto out_unlock;
 FUNC_2(&VAR_2->hlist);
 FUNC_4(&VAR_3->mmu_notifier_mm->lock);

 FUNC_1(&VAR_1, &VAR_2->rcu, VAR_0);
 return;

out_unlock:
 FUNC_4(&VAR_3->mmu_notifier_mm->lock);
}
