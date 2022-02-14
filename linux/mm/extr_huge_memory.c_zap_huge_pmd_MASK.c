
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
struct mmu_gather {int mm; int fullmm; } ;
typedef int spinlock_t ;
typedef int pmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,struct page*) ;
 int FUNC_4 (int,char*) ;
 int * FUNC_5 (int *,struct vm_area_struct*) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct page*) ;
 scalar_t__ FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*,int) ;
 struct page* FUNC_13 (int ) ;
 struct page* FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,unsigned long,int *,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 () ;
 int FUNC_21 (struct mmu_gather*,int ) ;
 int FUNC_22 (struct mmu_gather*,struct page*,int ) ;
 int FUNC_23 (struct mmu_gather*,int *,unsigned long) ;
 scalar_t__ FUNC_24 (struct vm_area_struct*) ;
 int FUNC_25 (int ,int *) ;

int FUNC_26(struct mmu_gather *VAR_3, struct vm_area_struct *VAR_4,
   pmd_t *VAR_5, unsigned long VAR_6)
{
 pmd_t VAR_7;
 spinlock_t *VAR_8;

 FUNC_21(VAR_3, VAR_1);

 VAR_8 = FUNC_5(VAR_5, VAR_4);
 if (!VAR_8)
  return 0;






 VAR_7 = FUNC_17(VAR_3->mm, VAR_6, VAR_5,
   VAR_3->fullmm);
 FUNC_23(VAR_3, VAR_5, VAR_6);
 if (FUNC_24(VAR_4)) {
  if (FUNC_7())
   FUNC_25(VAR_3->mm, VAR_5);
  FUNC_18(VAR_8);
  if (FUNC_8(VAR_7))
   FUNC_22(VAR_3, FUNC_14(VAR_7), VAR_1);
 } else if (FUNC_8(VAR_7)) {
  FUNC_25(VAR_3->mm, VAR_5);
  FUNC_18(VAR_8);
  FUNC_22(VAR_3, FUNC_14(VAR_7), VAR_1);
 } else {
  struct page *VAR_9 = ((void*)0);
  int VAR_10 = 1;

  if (FUNC_15(VAR_7)) {
   VAR_9 = FUNC_14(VAR_7);
   FUNC_12(VAR_9, 1);
   FUNC_3(FUNC_11(VAR_9) < 0, VAR_9);
   FUNC_3(!FUNC_1(VAR_9), VAR_9);
  } else if (FUNC_20()) {
   swp_entry_t VAR_11;

   FUNC_2(!FUNC_9(VAR_7));
   VAR_11 = FUNC_16(VAR_7);
   VAR_9 = FUNC_13(FUNC_19(VAR_11));
   VAR_10 = 0;
  } else
   FUNC_4(1, "Non present huge pmd without pmd migration enabled!");

  if (FUNC_0(VAR_9)) {
   FUNC_25(VAR_3->mm, VAR_5);
   FUNC_6(VAR_3->mm, VAR_2, -VAR_0);
  } else {
   if (FUNC_7())
    FUNC_25(VAR_3->mm, VAR_5);
   FUNC_6(VAR_3->mm, FUNC_10(VAR_9), -VAR_0);
  }

  FUNC_18(VAR_8);
  if (VAR_10)
   FUNC_22(VAR_3, VAR_9, VAR_1);
 }
 return 1;
}
