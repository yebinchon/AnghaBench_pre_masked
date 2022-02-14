
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; struct vm_area_struct* vm_next; int vm_mm; } ;
struct mmu_notifier_range {int dummy; } ;
struct mmu_gather {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmu_notifier_range*) ;
 int FUNC_1 (struct mmu_notifier_range*) ;
 int FUNC_2 (struct mmu_notifier_range*,int ,int ,struct vm_area_struct*,int ,unsigned long,unsigned long) ;
 int FUNC_3 (struct mmu_gather*,struct vm_area_struct*,unsigned long,unsigned long,int *) ;

void FUNC_4(struct mmu_gather *VAR_1,
  struct vm_area_struct *VAR_2, unsigned long VAR_3,
  unsigned long VAR_4)
{
 struct mmu_notifier_range VAR_5;

 FUNC_2(&VAR_5, VAR_0, 0, VAR_2, VAR_2->vm_mm,
    VAR_3, VAR_4);
 FUNC_1(&VAR_5);
 for ( ; VAR_2 && VAR_2->vm_start < VAR_4; VAR_2 = VAR_2->vm_next)
  FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, ((void*)0));
 FUNC_0(&VAR_5);
}
