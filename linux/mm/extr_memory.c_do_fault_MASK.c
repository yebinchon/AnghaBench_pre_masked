
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {int flags; int * prealloc_pte; int ptl; int * pte; int address; int * pmd; struct vm_area_struct* vma; } ;
struct vm_area_struct {int vm_flags; struct mm_struct* vm_mm; TYPE_1__* vm_ops; } ;
struct mm_struct {int dummy; } ;
struct TYPE_2__ {int fault; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vm_fault*) ;
 int FUNC_1 (struct vm_fault*) ;
 int FUNC_2 (struct vm_fault*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mm_struct*,int *) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (struct mm_struct*,int *,int ,int *) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static vm_fault_t FUNC_9(struct vm_fault *VAR_4)
{
 struct vm_area_struct *VAR_5 = VAR_4->vma;
 struct mm_struct *VAR_6 = VAR_5->vm_mm;
 vm_fault_t VAR_7;




 if (!VAR_5->vm_ops->fault) {




  if (FUNC_8(!FUNC_3(*VAR_4->pmd)))
   VAR_7 = VAR_2;
  else {
   VAR_4->pte = FUNC_6(VAR_4->vma->vm_mm,
             VAR_4->pmd,
             VAR_4->address,
             &VAR_4->ptl);







   if (FUNC_8(FUNC_5(*VAR_4->pte)))
    VAR_7 = VAR_2;
   else
    VAR_7 = VAR_1;

   FUNC_7(VAR_4->pte, VAR_4->ptl);
  }
 } else if (!(VAR_4->flags & VAR_0))
  VAR_7 = FUNC_1(VAR_4);
 else if (!(VAR_5->vm_flags & VAR_3))
  VAR_7 = FUNC_0(VAR_4);
 else
  VAR_7 = FUNC_2(VAR_4);


 if (VAR_4->prealloc_pte) {
  FUNC_4(VAR_6, VAR_4->prealloc_pte);
  VAR_4->prealloc_pte = ((void*)0);
 }
 return VAR_7;
}
