
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pmd_t ;
typedef int * pgtable_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mm_struct*) ;
 int * FUNC_2 (struct mm_struct*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mm_struct*,int *,int *) ;
 int * FUNC_5 (struct mm_struct*) ;
 int FUNC_6 (struct mm_struct*,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;

int FUNC_9(struct mm_struct *VAR_1, pmd_t *VAR_2)
{
 spinlock_t *VAR_3;
 pgtable_t VAR_4 = FUNC_5(VAR_1);
 if (!VAR_4)
  return -VAR_0;
 FUNC_7();

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (FUNC_0(FUNC_3(*VAR_2))) {
  FUNC_1(VAR_1);
  FUNC_4(VAR_1, VAR_2, VAR_4);
  VAR_4 = ((void*)0);
 }
 FUNC_8(VAR_3);
 if (VAR_4)
  FUNC_6(VAR_1, VAR_4);
 return 0;
}
