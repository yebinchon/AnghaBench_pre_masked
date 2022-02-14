
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int swp_entry_t ;
struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
struct mmu_gather {int fullmm; struct mm_struct* mm; } ;
struct mm_walk {struct vm_area_struct* vma; struct mmu_gather* private; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (scalar_t__,struct page*) ;
 int FUNC_5 (struct mm_struct*,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_9 (struct mm_struct*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct page*) ;
 scalar_t__ FUNC_12 (struct mmu_gather*,struct vm_area_struct*,int *,unsigned long,unsigned long) ;
 int FUNC_13 (struct page*) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (struct page*) ;
 unsigned long FUNC_16 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (struct mm_struct*,unsigned long,int *,int ) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ) ;
 int * FUNC_24 (struct mm_struct*,int *,unsigned long,int **) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int *,int *) ;
 scalar_t__ FUNC_28 (int ) ;
 int FUNC_29 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_30 (struct page*) ;
 int FUNC_31 (struct mm_struct*,unsigned long,int *,int ) ;
 scalar_t__ FUNC_32 (struct page*) ;
 int FUNC_33 (struct mm_struct*) ;
 int FUNC_34 (struct mmu_gather*,scalar_t__) ;
 int FUNC_35 (struct mmu_gather*,int *,unsigned long) ;
 int FUNC_36 (struct page*) ;
 int FUNC_37 (struct page*) ;
 int FUNC_38 (struct page*) ;
 struct page* FUNC_39 (struct vm_area_struct*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_40(pmd_t *VAR_3, unsigned long VAR_4,
    unsigned long VAR_5, struct mm_walk *VAR_6)

{
 struct mmu_gather *VAR_7 = VAR_6->private;
 struct mm_struct *VAR_8 = VAR_7->mm;
 struct vm_area_struct *VAR_9 = VAR_6->vma;
 spinlock_t *VAR_10;
 pte_t *VAR_11, *VAR_12, VAR_13;
 struct page *VAR_14;
 int VAR_15 = 0;
 unsigned long VAR_16;

 VAR_16 = FUNC_16(VAR_4, VAR_5);
 if (FUNC_17(*VAR_3))
  if (FUNC_12(VAR_7, VAR_9, VAR_3, VAR_4, VAR_16))
   goto next;

 if (FUNC_18(VAR_3))
  return 0;

 FUNC_34(VAR_7, VAR_1);
 VAR_11 = VAR_12 = FUNC_24(VAR_8, VAR_3, VAR_4, &VAR_10);
 FUNC_9(VAR_8);
 FUNC_6();
 for (; VAR_4 != VAR_5; VAR_12++, VAR_4 += VAR_1) {
  VAR_13 = *VAR_12;

  if (FUNC_23(VAR_13))
   continue;





  if (!FUNC_25(VAR_13)) {
   swp_entry_t VAR_17;

   VAR_17 = FUNC_26(VAR_13);
   if (FUNC_14(VAR_17))
    continue;
   VAR_15--;
   FUNC_10(VAR_17);
   FUNC_19(VAR_8, VAR_4, VAR_12, VAR_7->fullmm);
   continue;
  }

  VAR_14 = FUNC_39(VAR_9, VAR_4, VAR_13);
  if (!VAR_14)
   continue;






  if (FUNC_3(VAR_14)) {
   if (FUNC_15(VAR_14) != 1)
    goto out;
   FUNC_11(VAR_14);
   if (!FUNC_37(VAR_14)) {
    FUNC_30(VAR_14);
    goto out;
   }
   FUNC_27(VAR_11, VAR_10);
   if (FUNC_32(VAR_14)) {
    FUNC_38(VAR_14);
    FUNC_30(VAR_14);
    FUNC_24(VAR_8, VAR_3, VAR_4, &VAR_10);
    goto out;
   }
   FUNC_38(VAR_14);
   FUNC_30(VAR_14);
   VAR_12 = FUNC_24(VAR_8, VAR_3, VAR_4, &VAR_10);
   VAR_12--;
   VAR_4 -= VAR_1;
   continue;
  }

  FUNC_4(FUNC_3(VAR_14), VAR_14);

  if (FUNC_2(VAR_14) || FUNC_1(VAR_14)) {
   if (!FUNC_37(VAR_14))
    continue;




   if (FUNC_15(VAR_14) != 1) {
    FUNC_38(VAR_14);
    continue;
   }

   if (FUNC_2(VAR_14) && !FUNC_36(VAR_14)) {
    FUNC_38(VAR_14);
    continue;
   }

   FUNC_0(VAR_14);
   FUNC_38(VAR_14);
  }

  if (FUNC_28(VAR_13) || FUNC_20(VAR_13)) {






   VAR_13 = FUNC_29(VAR_8, VAR_4, VAR_12,
       VAR_7->fullmm);

   VAR_13 = FUNC_22(VAR_13);
   VAR_13 = FUNC_21(VAR_13);
   FUNC_31(VAR_8, VAR_4, VAR_12, VAR_13);
   FUNC_35(VAR_7, VAR_12, VAR_4);
  }
  FUNC_13(VAR_14);
 }
out:
 if (VAR_15) {
  if (VAR_2->mm == VAR_8)
   FUNC_33(VAR_8);

  FUNC_5(VAR_8, VAR_0, VAR_15);
 }
 FUNC_7();
 FUNC_27(VAR_11, VAR_10);
 FUNC_8();
next:
 return 0;
}
