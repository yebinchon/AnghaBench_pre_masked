
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
struct mmu_gather {struct mm_struct* mm; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pmd_t ;


 int FUNC_0 (struct page*) ;
 unsigned long VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 struct page* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (int *,struct vm_area_struct*) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct page*) ;
 scalar_t__ FUNC_20 () ;
 int FUNC_21 (struct mmu_gather*,unsigned long) ;
 int FUNC_22 (struct mmu_gather*,int *,unsigned long) ;
 int FUNC_23 (struct page*) ;
 scalar_t__ FUNC_24 (int) ;
 int FUNC_25 (struct page*) ;

bool FUNC_26(struct mmu_gather *VAR_1, struct vm_area_struct *VAR_2,
  pmd_t *VAR_3, unsigned long VAR_4, unsigned long VAR_5)
{
 spinlock_t *VAR_6;
 pmd_t VAR_7;
 struct page *VAR_8;
 struct mm_struct *VAR_9 = VAR_1->mm;
 bool VAR_10 = 0;

 FUNC_21(VAR_1, VAR_0);

 VAR_6 = FUNC_13(VAR_3, VAR_2);
 if (!VAR_6)
  goto out_unlocked;

 VAR_7 = *VAR_3;
 if (FUNC_4(VAR_7))
  goto out;

 if (FUNC_24(!FUNC_12(VAR_7))) {
  FUNC_2(FUNC_20() &&
      !FUNC_5(VAR_7));
  goto out;
 }

 VAR_8 = FUNC_11(VAR_7);




 if (FUNC_7(VAR_8) != 1)
  goto out;

 if (!FUNC_23(VAR_8))
  goto out;





 if (VAR_5 - VAR_4 != VAR_0) {
  FUNC_3(VAR_8);
  FUNC_18(VAR_6);
  FUNC_19(VAR_8);
  FUNC_25(VAR_8);
  FUNC_16(VAR_8);
  goto out_unlocked;
 }

 if (FUNC_1(VAR_8))
  FUNC_0(VAR_8);
 FUNC_25(VAR_8);

 if (FUNC_14(VAR_7) || FUNC_8(VAR_7)) {
  FUNC_15(VAR_2, VAR_4, VAR_3);
  VAR_7 = FUNC_10(VAR_7);
  VAR_7 = FUNC_9(VAR_7);

  FUNC_17(VAR_9, VAR_4, VAR_3, VAR_7);
  FUNC_22(VAR_1, VAR_3, VAR_4);
 }

 FUNC_6(VAR_8);
 VAR_10 = 1;
out:
 FUNC_18(VAR_6);
out_unlocked:
 return VAR_10;
}
