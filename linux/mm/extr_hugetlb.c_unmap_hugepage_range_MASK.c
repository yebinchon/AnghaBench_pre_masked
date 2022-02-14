
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct page {int dummy; } ;
struct mmu_gather {int dummy; } ;
struct mm_struct {int dummy; } ;


 int FUNC_0 (struct mmu_gather*,struct vm_area_struct*,unsigned long,unsigned long,struct page*) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long*,unsigned long*) ;
 int FUNC_2 (struct mmu_gather*,unsigned long,unsigned long) ;
 int FUNC_3 (struct mmu_gather*,struct mm_struct*,unsigned long,unsigned long) ;

void FUNC_4(struct vm_area_struct *VAR_0, unsigned long VAR_1,
     unsigned long VAR_2, struct page *VAR_3)
{
 struct mm_struct *VAR_4;
 struct mmu_gather VAR_5;
 unsigned long VAR_6 = VAR_1;
 unsigned long VAR_7 = VAR_2;
 FUNC_1(VAR_0, &VAR_6, &VAR_7);

 VAR_4 = VAR_0->vm_mm;

 FUNC_3(&VAR_5, VAR_4, VAR_6, VAR_7);
 FUNC_0(&VAR_5, VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_5, VAR_6, VAR_7);
}
