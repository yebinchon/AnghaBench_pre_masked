
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {int flags; int ptl; int * pte; int address; TYPE_1__* vma; int orig_pte; int * pmd; } ;
typedef int pte_t ;
struct TYPE_6__ {int vm_mm; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct vm_fault*) ;
 int FUNC_2 (struct vm_fault*) ;
 int FUNC_3 (struct vm_fault*) ;
 int FUNC_4 (struct vm_fault*) ;
 int FUNC_5 (struct vm_fault*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int * FUNC_13 (int *,int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (TYPE_1__*,int ,int *,int ,int) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int) ;
 int FUNC_23 (TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_24 (TYPE_1__*) ;
 scalar_t__ FUNC_25 (TYPE_1__*) ;

__attribute__((used)) static vm_fault_t FUNC_26(struct vm_fault *VAR_1)
{
 pte_t VAR_2;

 if (FUNC_22(FUNC_8(*VAR_1->pmd))) {






  VAR_1->pte = ((void*)0);
 } else {

  if (FUNC_7(VAR_1->pmd))
   return 0;






  VAR_1->pte = FUNC_13(VAR_1->pmd, VAR_1->address);
  VAR_1->orig_pte = *VAR_1->pte;
  FUNC_0();
  if (FUNC_12(VAR_1->orig_pte)) {
   FUNC_17(VAR_1->pte);
   VAR_1->pte = ((void*)0);
  }
 }

 if (!VAR_1->pte) {
  if (FUNC_25(VAR_1->vma))
   return FUNC_1(VAR_1);
  else
   return FUNC_2(VAR_1);
 }

 if (!FUNC_14(VAR_1->orig_pte))
  return FUNC_4(VAR_1);

 if (FUNC_15(VAR_1->orig_pte) && FUNC_24(VAR_1->vma))
  return FUNC_3(VAR_1);

 VAR_1->ptl = FUNC_9(VAR_1->vma->vm_mm, VAR_1->pmd);
 FUNC_21(VAR_1->ptl);
 VAR_2 = VAR_1->orig_pte;
 if (FUNC_22(!FUNC_16(*VAR_1->pte, VAR_2)))
  goto unlock;
 if (VAR_1->flags & VAR_0) {
  if (!FUNC_19(VAR_2))
   return FUNC_5(VAR_1);
  VAR_2 = FUNC_10(VAR_2);
 }
 VAR_2 = FUNC_11(VAR_2);
 if (FUNC_20(VAR_1->vma, VAR_1->address, VAR_1->pte, VAR_2,
    VAR_1->flags & VAR_0)) {
  FUNC_23(VAR_1->vma, VAR_1->address, VAR_1->pte);
 } else {






  if (VAR_1->flags & VAR_0)
   FUNC_6(VAR_1->vma, VAR_1->address);
 }
unlock:
 FUNC_18(VAR_1->pte, VAR_1->ptl);
 return 0;
}
