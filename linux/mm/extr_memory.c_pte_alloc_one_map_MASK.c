
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {int ptl; int address; int * pmd; int pte; int * prealloc_pte; struct vm_area_struct* vma; } ;
struct vm_area_struct {int vm_mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *,int ,int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static vm_fault_t FUNC_9(struct vm_fault *VAR_2)
{
 struct vm_area_struct *VAR_3 = VAR_2->vma;

 if (!FUNC_3(*VAR_2->pmd))
  goto map_pte;
 if (VAR_2->prealloc_pte) {
  VAR_2->ptl = FUNC_2(VAR_3->vm_mm, VAR_2->pmd);
  if (FUNC_8(!FUNC_3(*VAR_2->pmd))) {
   FUNC_7(VAR_2->ptl);
   goto map_pte;
  }

  FUNC_0(VAR_3->vm_mm);
  FUNC_4(VAR_3->vm_mm, VAR_2->pmd, VAR_2->prealloc_pte);
  FUNC_7(VAR_2->ptl);
  VAR_2->prealloc_pte = ((void*)0);
 } else if (FUNC_8(FUNC_5(VAR_3->vm_mm, VAR_2->pmd))) {
  return VAR_1;
 }
map_pte:
 if (FUNC_1(VAR_2->pmd))
  return VAR_0;
 VAR_2->pte = FUNC_6(VAR_3->vm_mm, VAR_2->pmd, VAR_2->address,
   &VAR_2->ptl);
 return 0;
}
