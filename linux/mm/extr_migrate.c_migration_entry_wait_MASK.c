
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;


 int FUNC_0 (struct mm_struct*,int *,int *) ;
 int * FUNC_1 (struct mm_struct*,int *) ;
 int * FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct mm_struct *VAR_0, pmd_t *VAR_1,
    unsigned long VAR_2)
{
 spinlock_t *VAR_3 = FUNC_1(VAR_0, VAR_1);
 pte_t *VAR_4 = FUNC_2(VAR_1, VAR_2);
 FUNC_0(VAR_0, VAR_4, VAR_3);
}
