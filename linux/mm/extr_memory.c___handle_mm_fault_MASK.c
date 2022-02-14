
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {unsigned long address; unsigned int flags; int * pmd; int * pud; int gfp_mask; int pgoff; struct vm_area_struct* vma; } ;
struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vm_area_struct*) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct vm_fault*) ;
 int FUNC_5 (struct vm_fault*) ;
 int FUNC_6 (struct vm_fault*,int ) ;
 int FUNC_7 (struct vm_fault*) ;
 int FUNC_8 (struct vm_fault*,int ) ;
 int FUNC_9 (struct vm_fault*,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct vm_area_struct*,unsigned long) ;
 int * FUNC_13 (struct mm_struct*,int *,unsigned long) ;
 int * FUNC_14 (struct mm_struct*,unsigned long) ;
 int * FUNC_15 (struct mm_struct*,int *,unsigned long) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (struct mm_struct*,int *) ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int * FUNC_22 (struct mm_struct*,int *,unsigned long) ;
 scalar_t__ FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int ) ;
 scalar_t__ FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 scalar_t__ FUNC_27 () ;
 scalar_t__ FUNC_28 (int ) ;
 scalar_t__ FUNC_29 (struct vm_area_struct*) ;
 int FUNC_30 (struct vm_fault*,int ) ;
 int FUNC_31 (struct vm_fault*,int ) ;

__attribute__((used)) static vm_fault_t FUNC_32(struct vm_area_struct *VAR_4,
  unsigned long VAR_5, unsigned int VAR_6)
{
 struct vm_fault VAR_7 = {
  .vma = VAR_4,
  .address = VAR_5 & VAR_1,
  .flags = VAR_6,
  .pgoff = FUNC_12(VAR_4, VAR_5),
  .gfp_mask = FUNC_1(VAR_4),
 };
 unsigned int VAR_8 = VAR_6 & VAR_0;
 struct mm_struct *VAR_9 = VAR_4->vm_mm;
 pgd_t *VAR_10;
 p4d_t *VAR_11;
 vm_fault_t VAR_12;

 VAR_10 = FUNC_14(VAR_9, VAR_5);
 VAR_11 = FUNC_13(VAR_9, VAR_10, VAR_5);
 if (!VAR_11)
  return VAR_3;

 VAR_7.pud = FUNC_22(VAR_9, VAR_11, VAR_5);
 if (!VAR_7.pud)
  return VAR_3;
 if (FUNC_24(*VAR_7.pud) && FUNC_2(VAR_4)) {
  VAR_12 = FUNC_5(&VAR_7);
  if (!(VAR_12 & VAR_2))
   return VAR_12;
 } else {
  pud_t VAR_13 = *VAR_7.pud;

  FUNC_3();
  if (FUNC_25(VAR_13) || FUNC_23(VAR_13)) {



   if (VAR_8 && !FUNC_26(VAR_13)) {
    VAR_12 = FUNC_31(&VAR_7, VAR_13);
    if (!(VAR_12 & VAR_2))
     return VAR_12;
   } else {
    FUNC_9(&VAR_7, VAR_13);
    return 0;
   }
  }
 }

 VAR_7.pmd = FUNC_15(VAR_9, VAR_7.pud, VAR_5);
 if (!VAR_7.pmd)
  return VAR_3;
 if (FUNC_18(*VAR_7.pmd) && FUNC_2(VAR_4)) {
  VAR_12 = FUNC_4(&VAR_7);
  if (!(VAR_12 & VAR_2))
   return VAR_12;
 } else {
  pmd_t VAR_14 = *VAR_7.pmd;

  FUNC_3();
  if (FUNC_28(FUNC_11(VAR_14))) {
   FUNC_0(FUNC_27() &&
       !FUNC_10(VAR_14));
   if (FUNC_10(VAR_14))
    FUNC_17(VAR_9, VAR_7.pmd);
   return 0;
  }
  if (FUNC_20(VAR_14) || FUNC_16(VAR_14)) {
   if (FUNC_19(VAR_14) && FUNC_29(VAR_4))
    return FUNC_6(&VAR_7, VAR_14);

   if (VAR_8 && !FUNC_21(VAR_14)) {
    VAR_12 = FUNC_30(&VAR_7, VAR_14);
    if (!(VAR_12 & VAR_2))
     return VAR_12;
   } else {
    FUNC_8(&VAR_7, VAR_14);
    return 0;
   }
  }
 }

 return FUNC_7(&VAR_7);
}
