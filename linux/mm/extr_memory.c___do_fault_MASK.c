
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {int * page; scalar_t__ prealloc_pte; struct vm_area_struct* vma; int * pmd; } ;
struct vm_area_struct {TYPE_1__* vm_ops; int vm_mm; } ;
struct TYPE_2__ {int (* fault ) (struct vm_fault*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (struct vm_fault*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static vm_fault_t FUNC_11(struct vm_fault *VAR_7)
{
 struct vm_area_struct *VAR_8 = VAR_7->vma;
 vm_fault_t VAR_9;
 if (FUNC_4(*VAR_7->pmd) && !VAR_7->prealloc_pte) {
  VAR_7->prealloc_pte = FUNC_5(VAR_7->vma->vm_mm);
  if (!VAR_7->prealloc_pte)
   return VAR_5;
  FUNC_7();
 }

 VAR_9 = VAR_8->vm_ops->fault(VAR_7);
 if (FUNC_9(VAR_9 & (VAR_1 | VAR_4 | VAR_6 |
       VAR_0)))
  return VAR_9;

 if (FUNC_9(FUNC_0(VAR_7->page))) {
  if (VAR_9 & VAR_3)
   FUNC_10(VAR_7->page);
  FUNC_6(VAR_7->page);
  VAR_7->page = ((void*)0);
  return VAR_2;
 }

 if (FUNC_9(!(VAR_9 & VAR_3)))
  FUNC_3(VAR_7->page);
 else
  FUNC_2(!FUNC_1(VAR_7->page), VAR_7->page);

 return VAR_9;
}
