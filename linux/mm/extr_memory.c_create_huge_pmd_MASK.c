
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {TYPE_2__* vma; } ;
struct TYPE_4__ {TYPE_1__* vm_ops; } ;
struct TYPE_3__ {int (* huge_fault ) (struct vm_fault*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vm_fault*) ;
 int FUNC_1 (struct vm_fault*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static inline vm_fault_t FUNC_3(struct vm_fault *VAR_2)
{
 if (FUNC_2(VAR_2->vma))
  return FUNC_0(VAR_2);
 if (VAR_2->vma->vm_ops->huge_fault)
  return VAR_2->vma->vm_ops->huge_fault(VAR_2, VAR_0);
 return VAR_1;
}
