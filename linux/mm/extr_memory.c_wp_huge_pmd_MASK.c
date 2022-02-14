
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {int address; int pmd; TYPE_2__* vma; } ;
typedef int pmd_t ;
struct TYPE_6__ {int vm_flags; TYPE_1__* vm_ops; } ;
struct TYPE_5__ {int (* huge_fault ) (struct vm_fault*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int,int *) ;
 int FUNC_2 (struct vm_fault*,int ) ;
 int FUNC_3 (struct vm_fault*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static inline vm_fault_t FUNC_5(struct vm_fault *VAR_3, pmd_t VAR_4)
{
 if (FUNC_4(VAR_3->vma))
  return FUNC_2(VAR_3, VAR_4);
 if (VAR_3->vma->vm_ops->huge_fault)
  return VAR_3->vma->vm_ops->huge_fault(VAR_3, VAR_0);


 FUNC_0(VAR_3->vma->vm_flags & VAR_2, VAR_3->vma);
 FUNC_1(VAR_3->vma, VAR_3->pmd, VAR_3->address, 0, ((void*)0));

 return VAR_1;
}
