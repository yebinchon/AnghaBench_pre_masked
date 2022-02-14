
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static pmd_t *FUNC_8(struct mm_struct *VAR_0, unsigned long VAR_1)
{
 pgd_t *VAR_2;
 p4d_t *VAR_3;
 pud_t *VAR_4;
 pmd_t *VAR_5;

 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (FUNC_2(VAR_2))
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (FUNC_0(VAR_3))
  return ((void*)0);

 VAR_4 = FUNC_7(VAR_3, VAR_1);
 if (FUNC_6(VAR_4))
  return ((void*)0);

 VAR_5 = FUNC_5(VAR_4, VAR_1);
 if (FUNC_4(*VAR_5))
  return ((void*)0);

 return VAR_5;
}
