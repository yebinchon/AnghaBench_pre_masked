
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_notifier_range {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mmu_notifier_range*) ;
 int FUNC_2 (struct mmu_notifier_range*) ;
 int FUNC_3 (struct mmu_notifier_range*,int ,int ,int *,struct mm_struct*,unsigned long,scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (struct mm_struct*,unsigned long) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int * FUNC_12 (struct mm_struct*,int *) ;
 scalar_t__ FUNC_13 (int ) ;
 int * FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int ) ;
 int * FUNC_16 (struct mm_struct*,int *,unsigned long,int **) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 int * FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int ) ;

__attribute__((used)) static int FUNC_24(struct mm_struct *VAR_6, unsigned long VAR_7,
       struct mmu_notifier_range *VAR_8,
       pte_t **VAR_9, pmd_t **VAR_10, spinlock_t **VAR_11)
{
 pgd_t *VAR_12;
 p4d_t *VAR_13;
 pud_t *VAR_14;
 pmd_t *VAR_15;
 pte_t *VAR_16;

 VAR_12 = FUNC_9(VAR_6, VAR_7);
 if (FUNC_8(*VAR_12) || FUNC_23(FUNC_7(*VAR_12)))
  goto out;

 VAR_13 = FUNC_6(VAR_12, VAR_7);
 if (FUNC_5(*VAR_13) || FUNC_23(FUNC_4(*VAR_13)))
  goto out;

 VAR_14 = FUNC_21(VAR_13, VAR_7);
 if (FUNC_20(*VAR_14) || FUNC_23(FUNC_19(*VAR_14)))
  goto out;

 VAR_15 = FUNC_14(VAR_14, VAR_7);
 FUNC_0(FUNC_15(*VAR_15));

 if (FUNC_11(*VAR_15)) {
  if (!VAR_10)
   goto out;

  if (VAR_8) {
   FUNC_3(VAR_8, VAR_1, 0,
      ((void*)0), VAR_6, VAR_7 & VAR_4,
      (VAR_7 & VAR_4) + VAR_5);
   FUNC_2(VAR_8);
  }
  *VAR_11 = FUNC_12(VAR_6, VAR_15);
  if (FUNC_11(*VAR_15)) {
   *VAR_10 = VAR_15;
   return 0;
  }
  FUNC_22(*VAR_11);
  if (VAR_8)
   FUNC_1(VAR_8);
 }

 if (FUNC_13(*VAR_15) || FUNC_23(FUNC_10(*VAR_15)))
  goto out;

 if (VAR_8) {
  FUNC_3(VAR_8, VAR_1, 0, ((void*)0), VAR_6,
     VAR_7 & VAR_2,
     (VAR_7 & VAR_2) + VAR_3);
  FUNC_2(VAR_8);
 }
 VAR_16 = FUNC_16(VAR_6, VAR_15, VAR_7, VAR_11);
 if (!FUNC_17(*VAR_16))
  goto unlock;
 *VAR_9 = VAR_16;
 return 0;
unlock:
 FUNC_18(VAR_16, *VAR_11);
 if (VAR_8)
  FUNC_1(VAR_8);
out:
 return -VAR_0;
}
