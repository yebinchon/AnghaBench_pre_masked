
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct vm_area_struct {int vm_flags; int vm_end; struct mm_struct* vm_mm; } ;
struct page_vma_mapped_walk {unsigned long address; int * pte; struct vm_area_struct* vma; struct page* page; } ;
struct page {int dummy; } ;
struct mmu_notifier_range {unsigned long start; scalar_t__ end; } ;
struct mm_struct {int mmlist; } ;
typedef int pte_t ;
typedef enum ttu_flags { ____Placeholder_ttu_flags } ttu_flags ;
struct TYPE_8__ {int mmlist; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (int,struct page*) ;
 int VAR_12 ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct vm_area_struct*,unsigned long*,scalar_t__*) ;
 scalar_t__ FUNC_12 (struct mm_struct*,struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct mm_struct*,int ) ;
 int FUNC_15 (struct vm_area_struct*,unsigned long,struct page*) ;
 int FUNC_16 (struct vm_area_struct*,unsigned long,scalar_t__) ;
 int FUNC_17 (struct vm_area_struct*,unsigned long,scalar_t__) ;
 scalar_t__ FUNC_18 (struct mm_struct*,unsigned long*,int *) ;
 int FUNC_19 (int ,struct mm_struct*) ;
 int FUNC_20 (struct mm_struct*,int ) ;
 TYPE_6__ VAR_13 ;
 int FUNC_21 (struct page*) ;
 scalar_t__ FUNC_22 (struct page*) ;
 int FUNC_23 (int *,int *) ;
 scalar_t__ FUNC_24 (int *) ;
 TYPE_1__ FUNC_25 (struct page*) ;
 TYPE_1__ FUNC_26 (struct page*,int ) ;
 int FUNC_27 (int ,scalar_t__) ;
 int FUNC_28 (struct page*) ;
 int FUNC_29 (struct page*) ;
 int FUNC_30 (struct page*) ;
 int VAR_14 ;
 int FUNC_31 (struct mm_struct*,unsigned long,scalar_t__) ;
 int FUNC_32 (struct mmu_notifier_range*) ;
 int FUNC_33 (struct mmu_notifier_range*) ;
 int FUNC_34 (struct mmu_notifier_range*,int ,int ,struct vm_area_struct*,struct mm_struct*,unsigned long,int ) ;
 int FUNC_35 (struct page*) ;
 int FUNC_36 (struct page*,scalar_t__) ;
 scalar_t__ FUNC_37 (struct page*) ;
 struct page* FUNC_38 (struct page*) ;
 scalar_t__ FUNC_39 (struct page_vma_mapped_walk*) ;
 int FUNC_40 (struct page_vma_mapped_walk*) ;
 scalar_t__ FUNC_41 (int ) ;
 struct page* FUNC_42 (int ) ;
 scalar_t__ FUNC_43 (int ) ;
 int FUNC_44 (int ) ;
 scalar_t__ FUNC_45 (int ) ;
 int FUNC_46 (int ) ;
 int FUNC_47 (struct vm_area_struct*,unsigned long,int *) ;
 scalar_t__ FUNC_48 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_49 (struct mm_struct*,unsigned long,int *) ;
 int FUNC_50 (struct page*) ;
 int FUNC_51 (struct mm_struct*,unsigned long,int *,int ,int ) ;
 int FUNC_52 (struct page*) ;
 int FUNC_53 (struct page_vma_mapped_walk*,struct page*) ;
 int FUNC_54 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_55 (struct mm_struct*,scalar_t__) ;
 scalar_t__ FUNC_56 (struct mm_struct*,int) ;
 int FUNC_57 (int *) ;
 int FUNC_58 (int *) ;
 int FUNC_59 (struct vm_area_struct*,unsigned long,int,struct page*) ;
 scalar_t__ FUNC_60 (TYPE_1__) ;
 int FUNC_61 (TYPE_1__) ;
 scalar_t__ FUNC_62 (int) ;
 int FUNC_63 (struct mm_struct*) ;
 int FUNC_64 (struct vm_area_struct*) ;
 int FUNC_65 (struct vm_area_struct*) ;

__attribute__((used)) static bool FUNC_66(struct page *VAR_15, struct vm_area_struct *VAR_16,
       unsigned long VAR_17, void *VAR_18)
{
 struct mm_struct *VAR_19 = VAR_16->vm_mm;
 struct page_vma_mapped_walk VAR_20 = {
  .page = VAR_15,
  .vma = VAR_16,
  .address = VAR_17,
 };
 pte_t VAR_21;
 struct page *VAR_22;
 bool VAR_23 = 1;
 struct mmu_notifier_range VAR_24;
 enum ttu_flags VAR_25 = (enum ttu_flags)VAR_18;


 if ((VAR_25 & VAR_9) && !(VAR_16->vm_flags & VAR_12))
  return 1;

 if (FUNC_0(VAR_0) && (VAR_25 & VAR_8) &&
     FUNC_22(VAR_15) && !FUNC_21(VAR_15))
  return 1;

 if (VAR_25 & VAR_11) {
  FUNC_59(VAR_16, VAR_17,
    VAR_25 & VAR_10, VAR_15);
 }
 FUNC_34(&VAR_24, VAR_1, 0, VAR_16, VAR_16->vm_mm,
    VAR_17,
    FUNC_27(VAR_16->vm_end, VAR_17 + FUNC_37(VAR_15)));
 if (FUNC_4(VAR_15)) {




  FUNC_11(VAR_16, &VAR_24.start,
           &VAR_24.end);
 }
 FUNC_33(&VAR_24);

 while (FUNC_39(&VAR_20)) {
  if (!(VAR_25 & VAR_7)) {
   if (VAR_16->vm_flags & VAR_12) {

    if (!FUNC_7(VAR_15)) {




     FUNC_28(VAR_15);
    }
    VAR_23 = 0;
    FUNC_40(&VAR_20);
    break;
   }
   if (VAR_25 & VAR_9)
    continue;
  }


  FUNC_9(!VAR_20.pte, VAR_15);

  VAR_22 = VAR_15 - FUNC_38(VAR_15) + FUNC_42(*VAR_20.pte);
  VAR_17 = VAR_20.address;

  if (FUNC_4(VAR_15)) {
   if (FUNC_18(VAR_19, &VAR_17, VAR_20.pte)) {







    FUNC_16(VAR_16, VAR_24.start, VAR_24.end);
    FUNC_17(VAR_16, VAR_24.start, VAR_24.end);
    FUNC_31(VAR_19, VAR_24.start,
             VAR_24.end);
    FUNC_40(&VAR_20);
    break;
   }
  }

  if (FUNC_0(VAR_0) &&
      (VAR_25 & VAR_8) &&
      FUNC_22(VAR_15)) {
   swp_entry_t VAR_26;
   pte_t VAR_27;

   VAR_21 = FUNC_49(VAR_19, VAR_20.address, VAR_20.pte);






   VAR_26 = FUNC_26(VAR_15, 0);
   VAR_27 = FUNC_61(VAR_26);
   if (FUNC_43(VAR_21))
    VAR_27 = FUNC_44(VAR_27);
   FUNC_54(VAR_19, VAR_20.address, VAR_20.pte, VAR_27);
   VAR_22 = VAR_15;
   goto discard;
  }

  if (!(VAR_25 & VAR_5)) {
   if (FUNC_48(VAR_16, VAR_17,
      VAR_20.pte)) {
    VAR_23 = 0;
    FUNC_40(&VAR_20);
    break;
   }
  }


  FUNC_15(VAR_16, VAR_17, FUNC_42(*VAR_20.pte));
  if (FUNC_56(VAR_19, VAR_25)) {
   VAR_21 = FUNC_49(VAR_19, VAR_17, VAR_20.pte);

   FUNC_55(VAR_19, FUNC_41(VAR_21));
  } else {
   VAR_21 = FUNC_47(VAR_16, VAR_17, VAR_20.pte);
  }


  if (FUNC_41(VAR_21))
   FUNC_52(VAR_15);


  FUNC_63(VAR_19);

  if (FUNC_3(VAR_15) && !(VAR_25 & VAR_6)) {
   VAR_21 = FUNC_61(FUNC_25(VAR_22));
   if (FUNC_4(VAR_15)) {
    FUNC_19(FUNC_13(VAR_15), VAR_19);
    FUNC_51(VAR_19, VAR_17,
           VAR_20.pte, VAR_21,
           FUNC_65(VAR_16));
   } else {
    FUNC_14(VAR_19, FUNC_29(VAR_15));
    FUNC_54(VAR_19, VAR_17, VAR_20.pte, VAR_21);
   }

  } else if (FUNC_45(VAR_21) && !FUNC_64(VAR_16)) {
   FUNC_14(VAR_19, FUNC_29(VAR_15));

   FUNC_31(VAR_19, VAR_17,
            VAR_17 + VAR_4);
  } else if (FUNC_0(VAR_0) &&
    (VAR_25 & (VAR_8|VAR_10))) {
   swp_entry_t VAR_28;
   pte_t VAR_29;

   if (FUNC_12(VAR_19, VAR_16, VAR_17, VAR_21) < 0) {
    FUNC_54(VAR_19, VAR_17, VAR_20.pte, VAR_21);
    VAR_23 = 0;
    FUNC_40(&VAR_20);
    break;
   }






   VAR_28 = FUNC_26(VAR_22,
     FUNC_46(VAR_21));
   VAR_29 = FUNC_61(VAR_28);
   if (FUNC_43(VAR_21))
    VAR_29 = FUNC_44(VAR_29);
   FUNC_54(VAR_19, VAR_17, VAR_20.pte, VAR_29);




  } else if (FUNC_1(VAR_15)) {
   swp_entry_t VAR_30 = { .val = FUNC_35(VAR_22) };
   pte_t VAR_31;




   if (FUNC_62(FUNC_5(VAR_15) != FUNC_6(VAR_15))) {
    FUNC_10(1);
    VAR_23 = 0;

    FUNC_31(VAR_19, VAR_17,
       VAR_17 + VAR_4);
    FUNC_40(&VAR_20);
    break;
   }


   if (!FUNC_5(VAR_15)) {
    if (!FUNC_2(VAR_15)) {

     FUNC_31(VAR_19,
      VAR_17, VAR_17 + VAR_4);
     FUNC_14(VAR_19, VAR_2);
     goto discard;
    }





    FUNC_54(VAR_19, VAR_17, VAR_20.pte, VAR_21);
    FUNC_8(VAR_15);
    VAR_23 = 0;
    FUNC_40(&VAR_20);
    break;
   }

   if (FUNC_60(VAR_30) < 0) {
    FUNC_54(VAR_19, VAR_17, VAR_20.pte, VAR_21);
    VAR_23 = 0;
    FUNC_40(&VAR_20);
    break;
   }
   if (FUNC_12(VAR_19, VAR_16, VAR_17, VAR_21) < 0) {
    FUNC_54(VAR_19, VAR_17, VAR_20.pte, VAR_21);
    VAR_23 = 0;
    FUNC_40(&VAR_20);
    break;
   }
   if (FUNC_24(&VAR_19->mmlist)) {
    FUNC_57(&VAR_14);
    if (FUNC_24(&VAR_19->mmlist))
     FUNC_23(&VAR_19->mmlist, &VAR_13.mmlist);
    FUNC_58(&VAR_14);
   }
   FUNC_14(VAR_19, VAR_2);
   FUNC_20(VAR_19, VAR_3);
   VAR_31 = FUNC_61(VAR_30);
   if (FUNC_43(VAR_21))
    VAR_31 = FUNC_44(VAR_31);
   FUNC_54(VAR_19, VAR_17, VAR_20.pte, VAR_31);

   FUNC_31(VAR_19, VAR_17,
            VAR_17 + VAR_4);
  } else {
   FUNC_14(VAR_19, FUNC_30(VAR_15));
  }
discard:







  FUNC_36(VAR_22, FUNC_4(VAR_15));
  FUNC_50(VAR_15);
 }

 FUNC_32(&VAR_24);

 return VAR_23;
}
