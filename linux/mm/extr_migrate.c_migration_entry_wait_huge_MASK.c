
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;


 int FUNC_0 (struct mm_struct*,int *,int *) ;
 int FUNC_1 (struct vm_area_struct*) ;
 int * FUNC_2 (int ,struct mm_struct*,int *) ;

void FUNC_3(struct vm_area_struct *VAR_0,
  struct mm_struct *VAR_1, pte_t *VAR_2)
{
 spinlock_t *VAR_3 = FUNC_2(FUNC_1(VAR_0), VAR_1, VAR_2);
 FUNC_0(VAR_1, VAR_2, VAR_3);
}
