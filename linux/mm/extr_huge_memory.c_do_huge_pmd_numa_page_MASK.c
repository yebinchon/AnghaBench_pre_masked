
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {unsigned long address; int ptl; int * pmd; struct vm_area_struct* vma; } ;
struct vm_area_struct {int vm_mm; int vm_page_prot; } ;
struct page {int dummy; } ;
struct anon_vma {int dummy; } ;
typedef int pmd_t ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct page*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,scalar_t__) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int ,struct vm_area_struct*,int *,int ,unsigned long,struct page*,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,unsigned long,scalar_t__) ;
 int FUNC_10 (struct page*,struct vm_area_struct*,unsigned long) ;
 int FUNC_11 () ;
 int FUNC_12 (struct page*) ;
 struct anon_vma* FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct anon_vma*) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ) ;
 struct page* FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (struct page*) ;
 int FUNC_25 (struct page*) ;
 int FUNC_26 (int ,unsigned long,int *,int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int,int,int ,int) ;
 int FUNC_30 (struct page*) ;
 scalar_t__ FUNC_31 (int) ;
 int FUNC_32 (struct page*) ;
 int FUNC_33 (struct vm_area_struct*,unsigned long,int *) ;

vm_fault_t FUNC_34(struct vm_fault *VAR_10, pmd_t VAR_11)
{
 struct vm_area_struct *VAR_12 = VAR_10->vma;
 struct anon_vma *VAR_13 = ((void*)0);
 struct page *VAR_14;
 unsigned long VAR_15 = VAR_10->address & VAR_0;
 int VAR_16 = VAR_5, VAR_17 = FUNC_11();
 int VAR_18, VAR_19 = -1;
 bool VAR_20;
 bool VAR_21 = 0;
 bool VAR_22;
 int VAR_23 = 0;

 VAR_10->ptl = FUNC_16(VAR_12->vm_mm, VAR_10->pmd);
 if (FUNC_31(!FUNC_21(VAR_11, *VAR_10->pmd)))
  goto out_unlock;






 if (FUNC_31(FUNC_23(*VAR_10->pmd))) {
  VAR_14 = FUNC_20(*VAR_10->pmd);
  if (!FUNC_5(VAR_14))
   goto out_unlock;
  FUNC_28(VAR_10->ptl);
  FUNC_24(VAR_14);
  goto out;
 }

 VAR_14 = FUNC_20(VAR_11);
 FUNC_0(FUNC_6(VAR_14));
 VAR_16 = FUNC_14(VAR_14);
 VAR_19 = FUNC_12(VAR_14);
 FUNC_2(VAR_3);
 if (VAR_16 == VAR_17) {
  FUNC_2(VAR_4);
  VAR_23 |= VAR_6;
 }


 if (!FUNC_22(VAR_11))
  VAR_23 |= VAR_9;





 VAR_20 = FUNC_30(VAR_14);
 VAR_18 = FUNC_10(VAR_14, VAR_12, VAR_15);
 if (VAR_18 == VAR_5) {

  if (VAR_20)
   goto clear_pmdnuma;
 }


 if (!VAR_20) {
  VAR_16 = VAR_5;
  if (!FUNC_5(VAR_14))
   goto out_unlock;
  FUNC_28(VAR_10->ptl);
  FUNC_24(VAR_14);
  goto out;
 }





 FUNC_4(VAR_14);
 FUNC_28(VAR_10->ptl);
 VAR_13 = FUNC_13(VAR_14);


 FUNC_27(VAR_10->ptl);
 if (FUNC_31(!FUNC_21(VAR_11, *VAR_10->pmd))) {
  FUNC_32(VAR_14);
  FUNC_25(VAR_14);
  VAR_16 = VAR_5;
  goto out_unlock;
 }


 if (FUNC_31(!VAR_13)) {
  FUNC_25(VAR_14);
  VAR_16 = VAR_5;
  goto clear_pmdnuma;
 }
 if (FUNC_8(VAR_12->vm_mm)) {
  FUNC_3(VAR_12, VAR_15, VAR_15 + VAR_2);
  FUNC_9(VAR_12->vm_mm, VAR_15,
           VAR_15 + VAR_2);
 }





 FUNC_28(VAR_10->ptl);

 VAR_21 = FUNC_7(VAR_12->vm_mm, VAR_12,
    VAR_10->pmd, VAR_11, VAR_10->address, VAR_14, VAR_18);
 if (VAR_21) {
  VAR_23 |= VAR_7;
  VAR_16 = VAR_18;
 } else
  VAR_23 |= VAR_8;

 goto out;
clear_pmdnuma:
 FUNC_0(!FUNC_1(VAR_14));
 VAR_22 = FUNC_22(VAR_11);
 VAR_11 = FUNC_19(VAR_11, VAR_12->vm_page_prot);
 VAR_11 = FUNC_18(VAR_11);
 if (VAR_22)
  VAR_11 = FUNC_17(VAR_11);
 FUNC_26(VAR_12->vm_mm, VAR_15, VAR_10->pmd, VAR_11);
 FUNC_33(VAR_12, VAR_10->address, VAR_10->pmd);
 FUNC_32(VAR_14);
out_unlock:
 FUNC_28(VAR_10->ptl);

out:
 if (VAR_13)
  FUNC_15(VAR_13);

 if (VAR_16 != VAR_5)
  FUNC_29(VAR_19, VAR_16, VAR_1,
    VAR_23);

 return 0;
}
