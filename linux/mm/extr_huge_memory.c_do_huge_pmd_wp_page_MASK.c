
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {unsigned long address; int ptl; int * pmd; struct vm_area_struct* vma; } ;
struct vm_area_struct {int vm_mm; int vm_page_prot; int anon_vma; } ;
struct page {int dummy; } ;
struct mmu_notifier_range {int dummy; } ;
struct mem_cgroup {int dummy; } ;
typedef int pmd_t ;
typedef int gfp_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int,struct page*) ;
 int FUNC_3 (int,struct vm_area_struct*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct vm_area_struct*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct vm_area_struct*) ;
 struct page* FUNC_8 (int ,struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_9 (struct page*,unsigned long,int ) ;
 int FUNC_10 (struct page*,struct page*,unsigned long,struct vm_area_struct*,int ) ;
 int FUNC_11 (struct mem_cgroup*,int ,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct vm_fault*,int ,struct page*) ;
 int FUNC_14 (struct page*) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (struct page*) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*,struct vm_area_struct*) ;
 int FUNC_19 (int ,struct vm_area_struct*) ;
 int FUNC_20 (struct page*,struct mem_cgroup*,int) ;
 int FUNC_21 (struct page*,struct mem_cgroup*,int,int) ;
 int FUNC_22 (struct page*,int ,int ,struct mem_cgroup**,int) ;
 int FUNC_23 (struct page*,int ) ;
 int FUNC_24 (struct mmu_notifier_range*) ;
 int FUNC_25 (struct mmu_notifier_range*) ;
 int FUNC_26 (struct mmu_notifier_range*,int ,int ,struct vm_area_struct*,int ,unsigned long,scalar_t__) ;
 int FUNC_27 (struct page*,struct vm_area_struct*,unsigned long,int) ;
 int FUNC_28 (struct page*,int) ;
 int FUNC_29 (int ,int *) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int ) ;
 struct page* FUNC_32 (int ) ;
 int FUNC_33 (int ,int ) ;
 int FUNC_34 (struct vm_area_struct*,unsigned long,int *) ;
 scalar_t__ FUNC_35 (struct vm_area_struct*,unsigned long,int *,int ,int) ;
 int FUNC_36 (struct page*) ;
 int FUNC_37 (struct page*) ;
 scalar_t__ FUNC_38 (struct page*,int *) ;
 int FUNC_39 (int ,unsigned long,int *,int ) ;
 int FUNC_40 (int ) ;
 int FUNC_41 (int ) ;
 int FUNC_42 (struct vm_area_struct*,int *,unsigned long) ;
 int FUNC_43 () ;
 int FUNC_44 (struct page*) ;
 scalar_t__ FUNC_45 (int) ;
 int FUNC_46 (struct page*) ;
 int FUNC_47 (struct vm_area_struct*,unsigned long,int *) ;

vm_fault_t FUNC_48(struct vm_fault *VAR_11, pmd_t VAR_12)
{
 struct vm_area_struct *VAR_13 = VAR_11->vma;
 struct page *VAR_14 = ((void*)0), *VAR_15;
 struct mem_cgroup *VAR_16;
 unsigned long VAR_17 = VAR_11->address & VAR_0;
 struct mmu_notifier_range VAR_18;
 gfp_t VAR_19;
 vm_fault_t VAR_20 = 0;

 VAR_11->ptl = FUNC_29(VAR_13->vm_mm, VAR_11->pmd);
 FUNC_3(!VAR_13->anon_vma, VAR_13);
 if (FUNC_15(VAR_12))
  goto alloc;
 FUNC_40(VAR_11->ptl);
 if (FUNC_45(!FUNC_33(*VAR_11->pmd, VAR_12)))
  goto out_unlock;

 VAR_14 = FUNC_32(VAR_12);
 FUNC_2(!FUNC_0(VAR_14) || !FUNC_1(VAR_14), VAR_14);




 if (!FUNC_44(VAR_14)) {
  FUNC_14(VAR_14);
  FUNC_41(VAR_11->ptl);
  FUNC_17(VAR_14);
  FUNC_40(VAR_11->ptl);
  if (FUNC_45(!FUNC_33(*VAR_11->pmd, VAR_12))) {
   FUNC_46(VAR_14);
   FUNC_37(VAR_14);
   goto out_unlock;
  }
  FUNC_37(VAR_14);
 }
 if (FUNC_38(VAR_14, ((void*)0))) {
  pmd_t VAR_21;
  VAR_21 = FUNC_31(VAR_12);
  VAR_21 = FUNC_19(FUNC_30(VAR_21), VAR_13);
  if (FUNC_35(VAR_13, VAR_17, VAR_11->pmd, VAR_21, 1))
   FUNC_47(VAR_13, VAR_11->address, VAR_11->pmd);
  VAR_20 |= VAR_10;
  FUNC_46(VAR_14);
  goto out_unlock;
 }
 FUNC_46(VAR_14);
 FUNC_14(VAR_14);
 FUNC_41(VAR_11->ptl);
alloc:
 if (FUNC_5(VAR_13) &&
     !FUNC_43()) {
  VAR_19 = FUNC_7(VAR_13);
  VAR_15 = FUNC_8(VAR_19, VAR_13, VAR_17, VAR_2);
 } else
  VAR_15 = ((void*)0);

 if (FUNC_16(VAR_15)) {
  FUNC_36(VAR_15);
 } else {
  if (!VAR_14) {
   FUNC_42(VAR_13, VAR_11->pmd, VAR_11->address);
   VAR_20 |= VAR_8;
  } else {
   VAR_20 = FUNC_13(VAR_11, VAR_12, VAR_14);
   if (VAR_20 & VAR_9) {
    FUNC_42(VAR_13, VAR_11->pmd, VAR_11->address);
    VAR_20 |= VAR_8;
   }
   FUNC_37(VAR_14);
  }
  FUNC_12(VAR_7);
  goto out;
 }

 if (FUNC_45(FUNC_22(VAR_15, VAR_13->vm_mm,
     VAR_19, &VAR_16, 1))) {
  FUNC_37(VAR_15);
  FUNC_42(VAR_13, VAR_11->pmd, VAR_11->address);
  if (VAR_14)
   FUNC_37(VAR_14);
  VAR_20 |= VAR_8;
  FUNC_12(VAR_7);
  goto out;
 }

 FUNC_12(VAR_6);
 FUNC_11(VAR_16, VAR_6, 1);

 if (!VAR_14)
  FUNC_9(VAR_15, VAR_11->address, VAR_1);
 else
  FUNC_10(VAR_15, VAR_14, VAR_11->address,
        VAR_13, VAR_1);
 FUNC_4(VAR_15);

 FUNC_26(&VAR_18, VAR_4, 0, VAR_13, VAR_13->vm_mm,
    VAR_17, VAR_17 + VAR_3);
 FUNC_25(&VAR_18);

 FUNC_40(VAR_11->ptl);
 if (VAR_14)
  FUNC_37(VAR_14);
 if (FUNC_45(!FUNC_33(*VAR_11->pmd, VAR_12))) {
  FUNC_41(VAR_11->ptl);
  FUNC_20(VAR_15, VAR_16, 1);
  FUNC_37(VAR_15);
  goto out_mn;
 } else {
  pmd_t VAR_22;
  VAR_22 = FUNC_23(VAR_15, VAR_13->vm_page_prot);
  VAR_22 = FUNC_19(FUNC_30(VAR_22), VAR_13);
  FUNC_34(VAR_13, VAR_17, VAR_11->pmd);
  FUNC_27(VAR_15, VAR_13, VAR_17, 1);
  FUNC_21(VAR_15, VAR_16, 0, 1);
  FUNC_18(VAR_15, VAR_13);
  FUNC_39(VAR_13->vm_mm, VAR_17, VAR_11->pmd, VAR_22);
  FUNC_47(VAR_13, VAR_11->address, VAR_11->pmd);
  if (!VAR_14) {
   FUNC_6(VAR_13->vm_mm, VAR_5, VAR_1);
  } else {
   FUNC_2(!FUNC_1(VAR_14), VAR_14);
   FUNC_28(VAR_14, 1);
   FUNC_37(VAR_14);
  }
  VAR_20 |= VAR_10;
 }
 FUNC_41(VAR_11->ptl);
out_mn:




 FUNC_24(&VAR_18);
out:
 return VAR_20;
out_unlock:
 FUNC_41(VAR_11->ptl);
 return VAR_20;
}
