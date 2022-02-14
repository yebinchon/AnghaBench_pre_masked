
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_notifier_ops {int (* free_notifier ) (struct mmu_notifier*) ;struct mmu_notifier* (* alloc_notifier ) (struct mm_struct*) ;} ;
struct mmu_notifier {struct mmu_notifier_ops const* ops; } ;
struct mm_struct {scalar_t__ mmu_notifier_mm; int mmap_sem; } ;


 struct mmu_notifier* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mmu_notifier*) ;
 int FUNC_2 (struct mmu_notifier*,struct mm_struct*) ;
 struct mmu_notifier* FUNC_3 (struct mm_struct*,struct mmu_notifier_ops const*) ;
 int FUNC_4 (int *) ;
 struct mmu_notifier* FUNC_5 (struct mm_struct*) ;
 int FUNC_6 (struct mmu_notifier*) ;

struct mmu_notifier *FUNC_7(const struct mmu_notifier_ops *VAR_0,
          struct mm_struct *VAR_1)
{
 struct mmu_notifier *VAR_2;
 int VAR_3;

 FUNC_4(&VAR_1->mmap_sem);

 if (VAR_1->mmu_notifier_mm) {
  VAR_2 = FUNC_3(VAR_1, VAR_0);
  if (VAR_2)
   return VAR_2;
 }

 VAR_2 = VAR_0->alloc_notifier(VAR_1);
 if (FUNC_1(VAR_2))
  return VAR_2;
 VAR_2->ops = VAR_0;
 VAR_3 = FUNC_2(VAR_2, VAR_1);
 if (VAR_3)
  goto out_free;
 return VAR_2;
out_free:
 VAR_2->ops->free_notifier(VAR_2);
 return FUNC_0(VAR_3);
}
