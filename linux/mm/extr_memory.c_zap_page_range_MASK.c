
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_start; struct vm_area_struct* vm_next; int vm_mm; } ;
struct mmu_notifier_range {scalar_t__ end; } ;
struct mmu_gather {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct mmu_notifier_range*) ;
 int FUNC_2 (struct mmu_notifier_range*) ;
 int FUNC_3 (struct mmu_notifier_range*,int ,int ,struct vm_area_struct*,int ,unsigned long,unsigned long) ;
 int FUNC_4 (struct mmu_gather*,unsigned long,scalar_t__) ;
 int FUNC_5 (struct mmu_gather*,int ,unsigned long,scalar_t__) ;
 int FUNC_6 (struct mmu_gather*,struct vm_area_struct*,unsigned long,scalar_t__,int *) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct vm_area_struct *VAR_1, unsigned long VAR_2,
  unsigned long VAR_3)
{
 struct mmu_notifier_range VAR_4;
 struct mmu_gather VAR_5;

 FUNC_0();
 FUNC_3(&VAR_4, VAR_0, 0, VAR_1, VAR_1->vm_mm,
    VAR_2, VAR_2 + VAR_3);
 FUNC_5(&VAR_5, VAR_1->vm_mm, VAR_2, VAR_4.end);
 FUNC_7(VAR_1->vm_mm);
 FUNC_2(&VAR_4);
 for ( ; VAR_1 && VAR_1->vm_start < VAR_4.end; VAR_1 = VAR_1->vm_next)
  FUNC_6(&VAR_5, VAR_1, VAR_2, VAR_4.end, ((void*)0));
 FUNC_1(&VAR_4);
 FUNC_4(&VAR_5, VAR_2, VAR_4.end);
}
