
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {unsigned long address; int flags; int ptl; int * pmd; struct vm_area_struct* vma; } ;
struct vm_area_struct {int vm_mm; int vm_flags; } ;
struct page {int dummy; } ;
typedef int pgtable_t ;
typedef int gfp_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct vm_fault*,struct page*,int ) ;
 int FUNC_2 (struct vm_area_struct*) ;
 struct page* FUNC_3 (int ,struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_4 (struct vm_area_struct*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct vm_fault*,int ) ;
 int FUNC_8 (struct vm_area_struct*,int ) ;
 int FUNC_9 (int ) ;
 struct page* FUNC_10 (int ) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ,struct vm_area_struct*,unsigned long,int *,struct page*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct vm_area_struct*,unsigned long) ;
 scalar_t__ FUNC_19 () ;
 scalar_t__ FUNC_20 (int) ;
 scalar_t__ FUNC_21 (struct vm_area_struct*) ;

vm_fault_t FUNC_22(struct vm_fault *VAR_7)
{
 struct vm_area_struct *VAR_8 = VAR_7->vma;
 gfp_t VAR_9;
 struct page *VAR_10;
 unsigned long VAR_11 = VAR_7->address & VAR_1;

 if (!FUNC_18(VAR_8, VAR_11))
  return VAR_4;
 if (FUNC_20(FUNC_4(VAR_8)))
  return VAR_5;
 if (FUNC_20(FUNC_8(VAR_8, VAR_8->vm_flags)))
  return VAR_5;
 if (!(VAR_7->flags & VAR_0) &&
   !FUNC_9(VAR_8->vm_mm) &&
   FUNC_19()) {
  pgtable_t VAR_12;
  struct page *VAR_13;
  bool VAR_14;
  vm_fault_t VAR_15;
  VAR_12 = FUNC_14(VAR_8->vm_mm);
  if (FUNC_20(!VAR_12))
   return VAR_5;
  VAR_13 = FUNC_10(VAR_8->vm_mm);
  if (FUNC_20(!VAR_13)) {
   FUNC_15(VAR_8->vm_mm, VAR_12);
   FUNC_6(VAR_3);
   return VAR_4;
  }
  VAR_7->ptl = FUNC_11(VAR_8->vm_mm, VAR_7->pmd);
  VAR_15 = 0;
  VAR_14 = 0;
  if (FUNC_12(*VAR_7->pmd)) {
   VAR_15 = FUNC_5(VAR_8->vm_mm);
   if (VAR_15) {
    FUNC_17(VAR_7->ptl);
   } else if (FUNC_21(VAR_8)) {
    FUNC_17(VAR_7->ptl);
    VAR_15 = FUNC_7(VAR_7, VAR_6);
    FUNC_0(VAR_15 & VAR_4);
   } else {
    FUNC_16(VAR_12, VAR_8->vm_mm, VAR_8,
         VAR_11, VAR_7->pmd, VAR_13);
    FUNC_17(VAR_7->ptl);
    VAR_14 = 1;
   }
  } else
   FUNC_17(VAR_7->ptl);
  if (!VAR_14)
   FUNC_15(VAR_8->vm_mm, VAR_12);
  return VAR_15;
 }
 VAR_9 = FUNC_2(VAR_8);
 VAR_10 = FUNC_3(VAR_9, VAR_8, VAR_11, VAR_2);
 if (FUNC_20(!VAR_10)) {
  FUNC_6(VAR_3);
  return VAR_4;
 }
 FUNC_13(VAR_10);
 return FUNC_1(VAR_7, VAR_10, VAR_9);
}
