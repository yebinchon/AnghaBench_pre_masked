
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {int dummy; } ;
struct mmu_gather {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmu_gather*,struct vm_area_struct*,unsigned long,unsigned long,struct page*) ;

void FUNC_1(struct mmu_gather *VAR_1,
     struct vm_area_struct *VAR_2, unsigned long VAR_3,
     unsigned long VAR_4, struct page *VAR_5)
{
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_2->vm_flags &= ~VAR_0;
}
