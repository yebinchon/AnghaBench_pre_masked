
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 int * FUNC_0 (struct mm_struct*,int *,unsigned long) ;
 int * FUNC_1 (struct mm_struct*,unsigned long) ;
 int * FUNC_2 (struct mm_struct*,int *,unsigned long) ;
 int * FUNC_3 (struct mm_struct*,int *,unsigned long) ;

__attribute__((used)) static pmd_t *FUNC_4(struct mm_struct *VAR_0, unsigned long VAR_1)
{
 pgd_t *VAR_2;
 p4d_t *VAR_3;
 pud_t *VAR_4;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 VAR_3 = FUNC_0(VAR_0, VAR_2, VAR_1);
 if (!VAR_3)
  return ((void*)0);
 VAR_4 = FUNC_3(VAR_0, VAR_3, VAR_1);
 if (!VAR_4)
  return ((void*)0);





 return FUNC_2(VAR_0, VAR_4, VAR_1);
}
