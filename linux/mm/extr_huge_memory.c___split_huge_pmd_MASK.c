
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
struct page {int dummy; } ;
struct mmu_notifier_range {int start; } ;
typedef int spinlock_t ;
typedef int pmd_t ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct vm_area_struct*,int *,int ,int) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct mmu_notifier_range*) ;
 int FUNC_6 (struct mmu_notifier_range*) ;
 int FUNC_7 (struct mmu_notifier_range*,int ,int ,struct vm_area_struct*,int ,unsigned long,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (int ,int *) ;
 struct page* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *) ;

void FUNC_13(struct vm_area_struct *VAR_3, pmd_t *VAR_4,
  unsigned long VAR_5, bool VAR_6, struct page *VAR_7)
{
 spinlock_t *VAR_8;
 struct mmu_notifier_range VAR_9;

 FUNC_7(&VAR_9, VAR_2, 0, VAR_3, VAR_3->vm_mm,
    VAR_5 & VAR_0,
    (VAR_5 & VAR_0) + VAR_1);
 FUNC_6(&VAR_9);
 VAR_8 = FUNC_9(VAR_3->vm_mm, VAR_4);





 FUNC_1(VAR_6 && !VAR_7);
 if (VAR_7 && VAR_7 != FUNC_10(*VAR_4))
         goto out;

 if (FUNC_11(*VAR_4)) {
  VAR_7 = FUNC_10(*VAR_4);
  if (FUNC_0(VAR_7))
   FUNC_3(VAR_7);
 } else if (!(FUNC_8(*VAR_4) || FUNC_4(*VAR_4)))
  goto out;
 FUNC_2(VAR_3, VAR_4, VAR_9.start, VAR_6);
out:
 FUNC_12(VAR_8);
 FUNC_5(&VAR_9);
}
