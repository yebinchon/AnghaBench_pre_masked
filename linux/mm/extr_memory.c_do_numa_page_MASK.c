
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {int ptl; int * pte; int address; int orig_pte; int pmd; struct vm_area_struct* vma; } ;
struct vm_area_struct {int vm_flags; int vm_page_prot; int vm_mm; } ;
struct page {int dummy; } ;
typedef int pte_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct page*,struct vm_area_struct*,int) ;
 int FUNC_2 (struct page*,struct vm_area_struct*,int ,int,int*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct vm_area_struct*,int ,int *,int ,int ) ;
 int FUNC_15 (struct vm_area_struct*,int ,int *) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int,int,int,int) ;
 scalar_t__ FUNC_19 (int) ;
 int FUNC_20 (struct vm_area_struct*,int ,int *) ;
 struct page* FUNC_21 (struct vm_area_struct*,int ,int ) ;

__attribute__((used)) static vm_fault_t FUNC_22(struct vm_fault *VAR_6)
{
 struct vm_area_struct *VAR_7 = VAR_6->vma;
 struct page *VAR_8 = ((void*)0);
 int VAR_9 = VAR_0;
 int VAR_10;
 int VAR_11;
 bool VAR_12 = 0;
 pte_t VAR_13, VAR_14;
 bool VAR_15 = FUNC_11(VAR_6->orig_pte);
 int VAR_16 = 0;






 VAR_6->ptl = FUNC_6(VAR_7->vm_mm, VAR_6->pmd);
 FUNC_17(VAR_6->ptl);
 if (FUNC_19(!FUNC_10(*VAR_6->pte, VAR_6->orig_pte))) {
  FUNC_12(VAR_6->pte, VAR_6->ptl);
  goto out;
 }





 VAR_14 = FUNC_15(VAR_7, VAR_6->address, VAR_6->pte);
 VAR_13 = FUNC_9(VAR_14, VAR_7->vm_page_prot);
 VAR_13 = FUNC_8(VAR_13);
 if (VAR_15)
  VAR_13 = FUNC_7(VAR_13);
 FUNC_14(VAR_7, VAR_6->address, VAR_6->pte, VAR_14, VAR_13);
 FUNC_20(VAR_7, VAR_6->address, VAR_6->pte);

 VAR_8 = FUNC_21(VAR_7, VAR_6->address, VAR_13);
 if (!VAR_8) {
  FUNC_12(VAR_6->pte, VAR_6->ptl);
  return 0;
 }


 if (FUNC_0(VAR_8)) {
  FUNC_12(VAR_6->pte, VAR_6->ptl);
  return 0;
 }
 if (!FUNC_13(VAR_13))
  VAR_16 |= VAR_3;





 if (FUNC_4(VAR_8) > 1 && (VAR_7->vm_flags & VAR_5))
  VAR_16 |= VAR_4;

 VAR_10 = FUNC_3(VAR_8);
 VAR_9 = FUNC_5(VAR_8);
 VAR_11 = FUNC_2(VAR_8, VAR_7, VAR_6->address, VAR_9,
   &VAR_16);
 FUNC_12(VAR_6->pte, VAR_6->ptl);
 if (VAR_11 == VAR_0) {
  FUNC_16(VAR_8);
  goto out;
 }


 VAR_12 = FUNC_1(VAR_8, VAR_7, VAR_11);
 if (VAR_12) {
  VAR_9 = VAR_11;
  VAR_16 |= VAR_1;
 } else
  VAR_16 |= VAR_2;

out:
 if (VAR_9 != VAR_0)
  FUNC_18(VAR_10, VAR_9, 1, VAR_16);
 return 0;
}
