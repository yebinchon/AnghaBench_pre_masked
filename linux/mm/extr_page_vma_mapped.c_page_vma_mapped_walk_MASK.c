
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int swp_entry_t ;
struct page_vma_mapped_walk {int address; int flags; int * ptl; int * pmd; int * pte; struct page* page; TYPE_1__* vma; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;
struct TYPE_2__ {int vm_end; struct mm_struct* vm_mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct page*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct page_vma_mapped_walk*) ;
 int FUNC_5 (struct page*) ;
 int * FUNC_6 (int ,struct mm_struct*,int *) ;
 int * FUNC_7 (struct mm_struct*,int,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct page_vma_mapped_walk*) ;
 struct page* FUNC_12 (int ) ;
 int FUNC_13 (struct page_vma_mapped_walk*) ;
 int * FUNC_14 (int *,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (struct page*) ;
 int * FUNC_18 (struct mm_struct*,int) ;
 int FUNC_19 (int ) ;
 int * FUNC_20 (struct mm_struct*,int *) ;
 int * FUNC_21 (int *,int) ;
 struct page* FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 scalar_t__ FUNC_25 (int ) ;
 int * FUNC_26 (struct mm_struct*,int *) ;
 scalar_t__ FUNC_27 (int ) ;
 int FUNC_28 (int *) ;
 int * FUNC_29 (int *,int) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *) ;
 scalar_t__ FUNC_33 () ;
 scalar_t__ FUNC_34 (scalar_t__) ;

bool FUNC_35(struct page_vma_mapped_walk *VAR_3)
{
 struct mm_struct *VAR_4 = VAR_3->vma->vm_mm;
 struct page *VAR_5 = VAR_3->page;
 pgd_t *VAR_6;
 p4d_t *VAR_7;
 pud_t *VAR_8;
 pmd_t VAR_9;


 if (VAR_3->pmd && !VAR_3->pte)
  return FUNC_13(VAR_3);

 if (VAR_3->pte)
  goto next_pte;

 if (FUNC_34(FUNC_0(VAR_3->page))) {

  VAR_3->pte = FUNC_7(VAR_4, VAR_3->address, FUNC_17(VAR_5));
  if (!VAR_3->pte)
   return 0;

  VAR_3->ptl = FUNC_6(FUNC_16(VAR_5), VAR_4, VAR_3->pte);
  FUNC_31(VAR_3->ptl);
  if (!FUNC_4(VAR_3))
   return FUNC_13(VAR_3);
  return 1;
 }
restart:
 VAR_6 = FUNC_18(VAR_4, VAR_3->address);
 if (!FUNC_19(*VAR_6))
  return 0;
 VAR_7 = FUNC_14(VAR_6, VAR_3->address);
 if (!FUNC_15(*VAR_7))
  return 0;
 VAR_8 = FUNC_29(VAR_7, VAR_3->address);
 if (!FUNC_30(*VAR_8))
  return 0;
 VAR_3->pmd = FUNC_21(VAR_8, VAR_3->address);





 VAR_9 = FUNC_2(*VAR_3->pmd);
 if (FUNC_25(VAR_9) || FUNC_9(VAR_9)) {
  VAR_3->ptl = FUNC_20(VAR_4, VAR_3->pmd);
  if (FUNC_10(FUNC_25(*VAR_3->pmd))) {
   if (VAR_3->flags & VAR_2)
    return FUNC_13(VAR_3);
   if (FUNC_22(*VAR_3->pmd) != VAR_5)
    return FUNC_13(VAR_3);
   return 1;
  } else if (!FUNC_23(*VAR_3->pmd)) {
   if (FUNC_33()) {
    if (!(VAR_3->flags & VAR_2))
     return FUNC_13(VAR_3);
    if (FUNC_8(FUNC_24(*VAR_3->pmd))) {
     swp_entry_t VAR_10 = FUNC_24(*VAR_3->pmd);

     if (FUNC_12(VAR_10) != VAR_5)
      return FUNC_13(VAR_3);
     return 1;
    }
   }
   return FUNC_13(VAR_3);
  } else {

   FUNC_32(VAR_3->ptl);
   VAR_3->ptl = ((void*)0);
  }
 } else if (!FUNC_23(VAR_9)) {
  return 0;
 }
 if (!FUNC_11(VAR_3))
  goto next_pte;
 while (1) {
  if (FUNC_4(VAR_3))
   return 1;
next_pte:

  if (!FUNC_1(VAR_3->page) || FUNC_0(VAR_3->page))
   return FUNC_13(VAR_3);
  do {
   VAR_3->address += VAR_0;
   if (VAR_3->address >= VAR_3->vma->vm_end ||
       VAR_3->address >=
     FUNC_3(VAR_3->page, VAR_3->vma) +
     FUNC_5(VAR_3->page) * VAR_0)
    return FUNC_13(VAR_3);

   if (VAR_3->address % VAR_1 == 0) {
    FUNC_28(VAR_3->pte);
    if (VAR_3->ptl) {
     FUNC_32(VAR_3->ptl);
     VAR_3->ptl = ((void*)0);
    }
    goto restart;
   } else {
    VAR_3->pte++;
   }
  } while (FUNC_27(*VAR_3->pte));

  if (!VAR_3->ptl) {
   VAR_3->ptl = FUNC_26(VAR_4, VAR_3->pmd);
   FUNC_31(VAR_3->ptl);
  }
 }
}
