
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
typedef int spinlock_t ;
typedef int pmd_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

spinlock_t *FUNC_6(pmd_t *VAR_0, struct vm_area_struct *VAR_1)
{
 spinlock_t *VAR_2;
 VAR_2 = FUNC_3(VAR_1->vm_mm, VAR_0);
 if (FUNC_1(FUNC_0(*VAR_0) || FUNC_4(*VAR_0) ||
   FUNC_2(*VAR_0)))
  return VAR_2;
 FUNC_5(VAR_2);
 return ((void*)0);
}
