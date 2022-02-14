
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_notifier_range {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct mm_struct*,unsigned long,struct mmu_notifier_range*,int **,int **,int **) ;

int FUNC_2(struct mm_struct *VAR_0, unsigned long VAR_1,
     struct mmu_notifier_range *VAR_2,
     pte_t **VAR_3, pmd_t **VAR_4, spinlock_t **VAR_5)
{
 int VAR_6;


 (void) FUNC_0(*VAR_5,
      !(VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2,
          VAR_3, VAR_4, VAR_5)));
 return VAR_6;
}
