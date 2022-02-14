
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int swp_entry_t ;
struct page_vma_mapped_walk {int flags; int ptl; int pmd; TYPE_1__* vma; int * pte; int address; } ;
struct TYPE_2__ {int vm_mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7(struct page_vma_mapped_walk *VAR_2)
{
 VAR_2->pte = FUNC_3(VAR_2->pmd, VAR_2->address);
 if (!(VAR_2->flags & VAR_1)) {
  if (VAR_2->flags & VAR_0) {
   if (!FUNC_1(*VAR_2->pte))
    return 0;
  } else {
   if (FUNC_1(*VAR_2->pte)) {
    swp_entry_t VAR_3;


    VAR_3 = FUNC_5(*VAR_2->pte);
    if (!FUNC_0(VAR_3))
     return 0;
   } else if (!FUNC_4(*VAR_2->pte))
    return 0;
  }
 }
 VAR_2->ptl = FUNC_2(VAR_2->vma->vm_mm, VAR_2->pmd);
 FUNC_6(VAR_2->ptl);
 return 1;
}
