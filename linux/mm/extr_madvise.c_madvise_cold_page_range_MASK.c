
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
struct mmu_gather {int dummy; } ;
struct madvise_walk_private {int pageout; struct mmu_gather* tlb; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmu_gather*,struct vm_area_struct*) ;
 int FUNC_1 (struct mmu_gather*,struct vm_area_struct*) ;
 int FUNC_2 (int ,unsigned long,unsigned long,int *,struct madvise_walk_private*) ;

__attribute__((used)) static void FUNC_3(struct mmu_gather *VAR_1,
        struct vm_area_struct *VAR_2,
        unsigned long VAR_3, unsigned long VAR_4)
{
 struct madvise_walk_private VAR_5 = {
  .pageout = 0,
  .tlb = VAR_1,
 };

 FUNC_1(VAR_1, VAR_2);
 FUNC_2(VAR_2->vm_mm, VAR_3, VAR_4, &VAR_0, &VAR_5);
 FUNC_0(VAR_1, VAR_2);
}
