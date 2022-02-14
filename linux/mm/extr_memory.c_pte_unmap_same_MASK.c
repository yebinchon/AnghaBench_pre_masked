
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;


 int * FUNC_0 (struct mm_struct*,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline int FUNC_5(struct mm_struct *VAR_0, pmd_t *VAR_1,
    pte_t *VAR_2, pte_t VAR_3)
{
 int VAR_4 = 1;
 FUNC_2(VAR_2);
 return VAR_4;
}
