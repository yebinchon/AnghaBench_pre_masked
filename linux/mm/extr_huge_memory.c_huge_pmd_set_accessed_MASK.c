
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vm_fault {int flags; unsigned long address; int ptl; int * pmd; TYPE_1__* vma; } ;
typedef int pmd_t ;
struct TYPE_3__ {int vm_mm; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,unsigned long,int *,int ,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,unsigned long,int *) ;

void FUNC_8(struct vm_fault *VAR_2, pmd_t VAR_3)
{
 pmd_t VAR_4;
 unsigned long VAR_5;
 bool VAR_6 = VAR_2->flags & VAR_0;

 VAR_2->ptl = FUNC_0(VAR_2->vma->vm_mm, VAR_2->pmd);
 if (FUNC_6(!FUNC_3(*VAR_2->pmd, VAR_3)))
  goto unlock;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_6)
  VAR_4 = FUNC_1(VAR_4);
 VAR_5 = VAR_2->address & VAR_1;
 if (FUNC_4(VAR_2->vma, VAR_5, VAR_2->pmd, VAR_4, VAR_6))
  FUNC_7(VAR_2->vma, VAR_2->address, VAR_2->pmd);

unlock:
 FUNC_5(VAR_2->ptl);
}
