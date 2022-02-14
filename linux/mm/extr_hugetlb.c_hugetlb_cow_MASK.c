
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
struct mmu_notifier_range {int end; int start; } ;
struct mm_struct {int dummy; } ;
struct hstate {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_1 ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int VAR_2 ;
 int FUNC_5 (struct page*) ;
 struct page* FUNC_6 (struct vm_area_struct*,unsigned long,int) ;
 int FUNC_7 (struct vm_area_struct*) ;
 int FUNC_8 (struct page*,struct page*,unsigned long,struct vm_area_struct*,int ) ;
 int FUNC_9 (struct page*) ;
 struct hstate* FUNC_10 (struct vm_area_struct*) ;
 unsigned long FUNC_11 (struct hstate*) ;
 scalar_t__ FUNC_12 (struct hstate*) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (struct mm_struct*,unsigned long,scalar_t__) ;
 int FUNC_15 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct page*,struct vm_area_struct*,unsigned long) ;
 scalar_t__ FUNC_18 (struct vm_area_struct*,int ) ;
 scalar_t__ FUNC_19 (int) ;
 int FUNC_20 (struct vm_area_struct*,struct page*,int) ;
 int FUNC_21 (struct mm_struct*,int ,int ) ;
 int FUNC_22 (struct mmu_notifier_range*) ;
 int FUNC_23 (struct mmu_notifier_range*) ;
 int FUNC_24 (struct mmu_notifier_range*,int ,int ,struct vm_area_struct*,struct mm_struct*,unsigned long,scalar_t__) ;
 int FUNC_25 (struct page*) ;
 int FUNC_26 (struct page*,struct vm_area_struct*) ;
 int FUNC_27 (struct page*,int) ;
 int FUNC_28 (struct hstate*) ;
 struct page* FUNC_29 (int ) ;
 scalar_t__ FUNC_30 (int ,int ) ;
 int FUNC_31 (struct page*) ;
 int FUNC_32 (struct hstate*,struct vm_area_struct*,unsigned long,struct page*) ;
 int FUNC_33 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_34 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_35 (struct page*) ;
 int FUNC_36 (int *) ;
 int FUNC_37 (int *) ;
 scalar_t__ FUNC_38 (int ) ;
 int FUNC_39 (struct mm_struct*,struct vm_area_struct*,struct page*,unsigned long) ;
 int FUNC_40 (int ) ;

__attribute__((used)) static vm_fault_t FUNC_41(struct mm_struct *VAR_3, struct vm_area_struct *VAR_4,
         unsigned long VAR_5, pte_t *VAR_6,
         struct page *VAR_7, spinlock_t *VAR_8)
{
 pte_t VAR_9;
 struct hstate *VAR_10 = FUNC_10(VAR_4);
 struct page *VAR_11, *VAR_12;
 int VAR_13 = 0;
 vm_fault_t VAR_14 = 0;
 unsigned long VAR_15 = VAR_5 & FUNC_11(VAR_10);
 struct mmu_notifier_range VAR_16;

 VAR_9 = FUNC_16(VAR_6);
 VAR_11 = FUNC_29(VAR_9);

retry_avoidcopy:


 if (FUNC_25(VAR_11) == 1 && FUNC_4(VAR_11)) {
  FUNC_26(VAR_11, VAR_4);
  FUNC_34(VAR_4, VAR_15, VAR_6);
  return 0;
 }
 if (FUNC_18(VAR_4, VAR_0) &&
   VAR_11 != VAR_7)
  VAR_13 = 1;

 FUNC_9(VAR_11);





 FUNC_37(VAR_8);
 VAR_12 = FUNC_6(VAR_4, VAR_15, VAR_13);

 if (FUNC_2(VAR_12)) {







  if (VAR_13) {
   FUNC_31(VAR_11);
   FUNC_0(FUNC_13(VAR_9));
   FUNC_39(VAR_3, VAR_4, VAR_11, VAR_15);
   FUNC_0(FUNC_13(VAR_9));
   FUNC_36(VAR_8);
   VAR_6 = FUNC_14(VAR_3, VAR_15, FUNC_12(VAR_10));
   if (FUNC_19(VAR_6 &&
       FUNC_30(FUNC_16(VAR_6), VAR_9)))
    goto retry_avoidcopy;




   return 0;
  }

  VAR_14 = FUNC_40(FUNC_3(VAR_12));
  goto out_release_old;
 }





 if (FUNC_38(FUNC_7(VAR_4))) {
  VAR_14 = VAR_2;
  goto out_release_all;
 }

 FUNC_8(VAR_12, VAR_11, VAR_5, VAR_4,
       FUNC_28(VAR_10));
 FUNC_5(VAR_12);

 FUNC_24(&VAR_16, VAR_1, 0, VAR_4, VAR_3, VAR_15,
    VAR_15 + FUNC_12(VAR_10));
 FUNC_23(&VAR_16);





 FUNC_36(VAR_8);
 VAR_6 = FUNC_14(VAR_3, VAR_15, FUNC_12(VAR_10));
 if (FUNC_19(VAR_6 && FUNC_30(FUNC_16(VAR_6), VAR_9))) {
  FUNC_1(VAR_12);


  FUNC_15(VAR_4, VAR_15, VAR_6);
  FUNC_21(VAR_3, VAR_16.start, VAR_16.end);
  FUNC_33(VAR_3, VAR_15, VAR_6,
    FUNC_20(VAR_4, VAR_12, 1));
  FUNC_27(VAR_11, 1);
  FUNC_17(VAR_12, VAR_4, VAR_15);
  FUNC_35(VAR_12);

  VAR_12 = VAR_11;
 }
 FUNC_37(VAR_8);
 FUNC_22(&VAR_16);
out_release_all:
 FUNC_32(VAR_10, VAR_4, VAR_15, VAR_12);
 FUNC_31(VAR_12);
out_release_old:
 FUNC_31(VAR_11);

 FUNC_36(VAR_8);
 return VAR_14;
}
