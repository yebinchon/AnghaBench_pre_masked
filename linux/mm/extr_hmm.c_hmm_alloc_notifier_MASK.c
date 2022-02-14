
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_notifier {int dummy; } ;
struct mm_struct {int dummy; } ;
struct hmm {struct mmu_notifier mmu_notifier; scalar_t__ notifiers; int ranges_lock; int ranges; int mirrors_sem; int mirrors; int wq; } ;


 int VAR_0 ;
 struct mmu_notifier* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct hmm* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct mmu_notifier *FUNC_6(struct mm_struct *VAR_2)
{
 struct hmm *VAR_3;

 VAR_3 = FUNC_4(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 FUNC_3(&VAR_3->wq);
 FUNC_1(&VAR_3->mirrors);
 FUNC_2(&VAR_3->mirrors_sem);
 FUNC_1(&VAR_3->ranges);
 FUNC_5(&VAR_3->ranges_lock);
 VAR_3->notifiers = 0;
 return &VAR_3->mmu_notifier;
}
