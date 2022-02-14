
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct page {int lru; } ;
struct mmu_gather {int fullmm; struct mm_struct* mm; } ;
struct mm_walk {struct vm_area_struct* vma; struct madvise_walk_private* private; } ;
struct mm_struct {int dummy; } ;
struct madvise_walk_private {int pageout; struct mmu_gather* tlb; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (int ) ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,struct page*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_3 ;
 int FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct mm_struct*) ;
 int FUNC_11 (struct page*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (struct page*) ;
 int VAR_4 ;
 int FUNC_17 (struct page*) ;
 unsigned long FUNC_18 (unsigned long,unsigned long) ;
 int FUNC_19 (int ) ;
 struct page* FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int ) ;
 int * FUNC_23 (int *,struct vm_area_struct*) ;
 scalar_t__ FUNC_24 (int *) ;
 scalar_t__ FUNC_25 (int ) ;
 int FUNC_26 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_27 (int ) ;
 scalar_t__ FUNC_28 (int ) ;
 int * FUNC_29 (struct mm_struct*,int *,unsigned long,int **) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int *,int *) ;
 scalar_t__ FUNC_32 (int ) ;
 int FUNC_33 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_34 (struct page*) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_37 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_38 (int *) ;
 int FUNC_39 (struct page*) ;
 int FUNC_40 (struct page*) ;
 scalar_t__ FUNC_41 () ;
 int FUNC_42 (struct mmu_gather*,unsigned long) ;
 int FUNC_43 (struct mmu_gather*,int *,unsigned long) ;
 int FUNC_44 (struct mmu_gather*,int *,unsigned long) ;
 int FUNC_45 (struct page*) ;
 scalar_t__ FUNC_46 (int) ;
 int FUNC_47 (struct page*) ;
 struct page* FUNC_48 (struct vm_area_struct*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_49(pmd_t *VAR_5,
    unsigned long VAR_6, unsigned long VAR_7,
    struct mm_walk *VAR_8)
{
 struct madvise_walk_private *VAR_9 = VAR_8->private;
 struct mmu_gather *VAR_10 = VAR_9->tlb;
 bool VAR_11 = VAR_9->pageout;
 struct mm_struct *VAR_12 = VAR_10->mm;
 struct vm_area_struct *VAR_13 = VAR_8->vma;
 pte_t *VAR_14, *VAR_15, VAR_16;
 spinlock_t *VAR_17;
 struct page *VAR_18 = ((void*)0);
 FUNC_1(VAR_4);

 if (FUNC_9(VAR_3))
  return -VAR_0;
 FUNC_42(VAR_10, VAR_2);
 VAR_14 = VAR_15 = FUNC_29(VAR_13->vm_mm, VAR_5, VAR_6, &VAR_17);
 FUNC_10(VAR_12);
 FUNC_5();
 for (; VAR_6 < VAR_7; VAR_15++, VAR_6 += VAR_2) {
  VAR_16 = *VAR_15;

  if (FUNC_28(VAR_16))
   continue;

  if (!FUNC_30(VAR_16))
   continue;

  VAR_18 = FUNC_48(VAR_13, VAR_6, VAR_16);
  if (!VAR_18)
   continue;





  if (FUNC_2(VAR_18)) {
   if (FUNC_17(VAR_18) != 1)
    break;
   FUNC_11(VAR_18);
   if (!FUNC_45(VAR_18)) {
    FUNC_34(VAR_18);
    break;
   }
   FUNC_31(VAR_14, VAR_17);
   if (FUNC_39(VAR_18)) {
    FUNC_47(VAR_18);
    FUNC_34(VAR_18);
    FUNC_29(VAR_12, VAR_5, VAR_6, &VAR_17);
    break;
   }
   FUNC_47(VAR_18);
   FUNC_34(VAR_18);
   VAR_15 = FUNC_29(VAR_12, VAR_5, VAR_6, &VAR_17);
   VAR_15--;
   VAR_6 -= VAR_2;
   continue;
  }

  FUNC_4(FUNC_2(VAR_18), VAR_18);

  if (FUNC_32(VAR_16)) {
   VAR_16 = FUNC_33(VAR_12, VAR_6, VAR_15,
       VAR_10->fullmm);
   VAR_16 = FUNC_27(VAR_16);
   FUNC_37(VAR_12, VAR_6, VAR_15, VAR_16);
   FUNC_44(VAR_10, VAR_15, VAR_6);
  }







  FUNC_0(VAR_18);
  FUNC_40(VAR_18);
  if (VAR_11) {
   if (!FUNC_14(VAR_18))
    FUNC_15(&VAR_18->lru, &VAR_4);
  } else
   FUNC_8(VAR_18);
 }

 FUNC_6();
 FUNC_31(VAR_14, VAR_17);
 if (VAR_11)
  FUNC_35(&VAR_4);
 FUNC_7();

 return 0;
}
