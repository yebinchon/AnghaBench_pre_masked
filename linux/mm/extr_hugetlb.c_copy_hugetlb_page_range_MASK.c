
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct vm_area_struct {int vm_flags; unsigned long vm_start; unsigned long vm_end; } ;
struct page {int dummy; } ;
struct mmu_notifier_range {int dummy; } ;
struct mm_struct {int dummy; } ;
struct hstate {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct page*) ;
 struct hstate* FUNC_1 (struct vm_area_struct*) ;
 unsigned long FUNC_2 (struct hstate*) ;
 int * FUNC_3 (struct mm_struct*,unsigned long,unsigned long) ;
 int * FUNC_4 (struct hstate*,struct mm_struct*,int *) ;
 int * FUNC_5 (struct hstate*,struct mm_struct*,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (struct mm_struct*,unsigned long,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct mm_struct*,unsigned long,int *) ;
 int FUNC_10 (int ,struct mm_struct*) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct mmu_notifier_range*) ;
 int FUNC_16 (struct mmu_notifier_range*) ;
 int FUNC_17 (struct mmu_notifier_range*,int ,int ,struct vm_area_struct*,struct mm_struct*,unsigned long,unsigned long) ;
 int FUNC_18 (struct page*,int) ;
 int FUNC_19 (struct hstate*) ;
 struct page* FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_23 (struct mm_struct*,unsigned long,int *,int ,unsigned long) ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (int) ;

int FUNC_28(struct mm_struct *VAR_5, struct mm_struct *VAR_6,
       struct vm_area_struct *VAR_7)
{
 pte_t *VAR_8, *VAR_9, VAR_10, VAR_11;
 struct page *VAR_12;
 unsigned long VAR_13;
 int VAR_14;
 struct hstate *VAR_15 = FUNC_1(VAR_7);
 unsigned long VAR_16 = FUNC_2(VAR_15);
 struct mmu_notifier_range VAR_17;
 int VAR_18 = 0;

 VAR_14 = (VAR_7->vm_flags & (VAR_4 | VAR_3)) == VAR_3;

 if (VAR_14) {
  FUNC_17(&VAR_17, VAR_1, 0, VAR_7, VAR_6,
     VAR_7->vm_start,
     VAR_7->vm_end);
  FUNC_16(&VAR_17);
 }

 for (VAR_13 = VAR_7->vm_start; VAR_13 < VAR_7->vm_end; VAR_13 += VAR_16) {
  spinlock_t *VAR_19, *VAR_20;
  VAR_8 = FUNC_7(VAR_6, VAR_13, VAR_16);
  if (!VAR_8)
   continue;
  VAR_9 = FUNC_3(VAR_5, VAR_13, VAR_16);
  if (!VAR_9) {
   VAR_18 = -VAR_0;
   break;
  }
  VAR_11 = FUNC_8(VAR_9);
  if ((VAR_9 == VAR_8) || !FUNC_6(VAR_11))
   continue;

  VAR_20 = FUNC_4(VAR_15, VAR_5, VAR_9);
  VAR_19 = FUNC_5(VAR_15, VAR_6, VAR_8);
  FUNC_24(VAR_19, VAR_2);
  VAR_10 = FUNC_8(VAR_8);
  VAR_11 = FUNC_8(VAR_9);
  if (FUNC_6(VAR_10) || !FUNC_6(VAR_11)) {





   ;
  } else if (FUNC_27(FUNC_12(VAR_10) ||
        FUNC_11(VAR_10))) {
   swp_entry_t VAR_21 = FUNC_21(VAR_10);

   if (FUNC_13(VAR_21) && VAR_14) {




    FUNC_14(&VAR_21);
    VAR_10 = FUNC_26(VAR_21);
    FUNC_23(VAR_6, VAR_13, VAR_8,
           VAR_10, VAR_16);
   }
   FUNC_23(VAR_5, VAR_13, VAR_9, VAR_10, VAR_16);
  } else {
   if (VAR_14) {







    FUNC_9(VAR_6, VAR_13, VAR_8);
   }
   VAR_10 = FUNC_8(VAR_8);
   VAR_12 = FUNC_20(VAR_10);
   FUNC_0(VAR_12);
   FUNC_18(VAR_12, 1);
   FUNC_22(VAR_5, VAR_13, VAR_9, VAR_10);
   FUNC_10(FUNC_19(VAR_15), VAR_5);
  }
  FUNC_25(VAR_19);
  FUNC_25(VAR_20);
 }

 if (VAR_14)
  FUNC_15(&VAR_17);

 return VAR_18;
}
