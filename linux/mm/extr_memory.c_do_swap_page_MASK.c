
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;


typedef int vm_fault_t ;
struct TYPE_19__ {scalar_t__ val; } ;
typedef TYPE_3__ swp_entry_t ;
struct vm_fault {int flags; int ptl; int * pte; int address; int orig_pte; int pmd; TYPE_13__* page; struct vm_area_struct* vma; } ;
struct vm_area_struct {int vm_flags; int vm_mm; int vm_page_prot; } ;
struct swap_info_struct {int flags; } ;
struct page {int dummy; } ;
struct mem_cgroup {int dummy; } ;
typedef int pte_t ;
struct TYPE_18__ {TYPE_1__* ops; } ;
struct TYPE_17__ {int (* migrate_to_ram ) (struct vm_fault*) ;} ;
struct TYPE_16__ {TYPE_2__* pgmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (TYPE_3__) ;
 int FUNC_7 (struct page*) ;
 struct page* FUNC_8 (int ,struct vm_area_struct*,int ) ;
 int FUNC_9 (int ,struct vm_area_struct*,int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 TYPE_13__* FUNC_15 (TYPE_3__) ;
 int FUNC_16 (struct page*,struct vm_area_struct*,int ,int) ;
 int FUNC_17 (struct vm_fault*) ;
 int FUNC_18 (struct vm_area_struct*,struct page*) ;
 int FUNC_19 (int ,int ) ;
 scalar_t__ FUNC_20 (TYPE_3__) ;
 scalar_t__ FUNC_21 (TYPE_3__) ;
 scalar_t__ FUNC_22 (TYPE_3__) ;
 struct page* FUNC_23 (struct page*,struct vm_area_struct*,int ) ;
 scalar_t__ FUNC_24 (int ) ;
 int FUNC_25 (struct page*,int ,int) ;
 struct page* FUNC_26 (TYPE_3__,struct vm_area_struct*,int ) ;
 int FUNC_27 (struct page*,struct vm_area_struct*) ;
 int FUNC_28 (struct page*) ;
 int FUNC_29 (int ,struct vm_area_struct*) ;
 int FUNC_30 (struct page*,struct mem_cgroup*,int) ;
 int FUNC_31 (struct page*,struct mem_cgroup*,int,int) ;
 scalar_t__ FUNC_32 (struct page*) ;
 scalar_t__ FUNC_33 (struct page*,int ,int ,struct mem_cgroup**,int) ;
 int FUNC_34 (int ,int ,int ) ;
 int FUNC_35 (struct page*,int ) ;
 int FUNC_36 (TYPE_3__) ;
 int FUNC_37 (struct page*,struct vm_area_struct*,int ,int) ;
 scalar_t__ FUNC_38 (struct page*) ;
 int FUNC_39 (struct vm_area_struct*,int ,int ,int *) ;
 int FUNC_40 (int ) ;
 int FUNC_41 (int ) ;
 void* FUNC_42 (int ,int ,int ,int *) ;
 int FUNC_43 (int ,int ) ;
 scalar_t__ FUNC_44 (int ) ;
 TYPE_3__ FUNC_45 (int ) ;
 int FUNC_46 (int ,int ,int *,int ) ;
 int FUNC_47 (int *,int ) ;
 int FUNC_48 (struct page*) ;
 scalar_t__ FUNC_49 (struct page*,int *) ;
 int FUNC_50 (struct page*,scalar_t__) ;
 int FUNC_51 (int ,int ,int *,int ) ;
 int FUNC_52 (struct vm_fault*) ;
 int FUNC_53 (TYPE_3__) ;
 int FUNC_54 (struct page*,int) ;
 struct page* FUNC_55 (TYPE_3__,int ,struct vm_fault*) ;
 struct swap_info_struct* FUNC_56 (TYPE_3__) ;
 int FUNC_57 (struct page*) ;
 scalar_t__ FUNC_58 (int) ;
 int FUNC_59 (struct page*) ;
 int FUNC_60 (struct vm_area_struct*,int ,int *) ;

vm_fault_t FUNC_61(struct vm_fault *VAR_17)
{
 struct vm_area_struct *VAR_18 = VAR_17->vma;
 struct page *VAR_19 = ((void*)0), *VAR_20;
 struct mem_cgroup *VAR_21;
 swp_entry_t VAR_22;
 pte_t VAR_23;
 int VAR_24;
 int VAR_25 = 0;
 vm_fault_t VAR_26 = 0;

 if (!FUNC_46(VAR_18->vm_mm, VAR_17->pmd, VAR_17->pte, VAR_17->orig_pte))
  goto out;

 VAR_22 = FUNC_45(VAR_17->orig_pte);
 if (FUNC_58(FUNC_36(VAR_22))) {
  if (FUNC_22(VAR_22)) {
   FUNC_34(VAR_18->vm_mm, VAR_17->pmd,
          VAR_17->address);
  } else if (FUNC_20(VAR_22)) {
   VAR_17->page = FUNC_15(VAR_22);
   VAR_26 = VAR_17->page->pgmap->ops->migrate_to_ram(VAR_17);
  } else if (FUNC_21(VAR_22)) {
   VAR_26 = VAR_10;
  } else {
   FUNC_39(VAR_18, VAR_17->address, VAR_17->orig_pte, ((void*)0));
   VAR_26 = VAR_14;
  }
  goto out;
 }


 FUNC_14(VAR_0);
 VAR_19 = FUNC_26(VAR_22, VAR_18, VAR_17->address);
 VAR_20 = VAR_19;

 if (!VAR_19) {
  struct swap_info_struct *VAR_27 = FUNC_56(VAR_22);

  if (VAR_27->flags & VAR_8 &&
    FUNC_6(VAR_22) == 1) {

   VAR_19 = FUNC_8(VAR_2, VAR_18,
       VAR_17->address);
   if (VAR_19) {
    FUNC_4(VAR_19);
    FUNC_5(VAR_19);
    FUNC_50(VAR_19, VAR_22.val);
    FUNC_28(VAR_19);
    FUNC_54(VAR_19, 1);
   }
  } else {
   VAR_19 = FUNC_55(VAR_22, VAR_2,
      VAR_17);
   VAR_20 = VAR_19;
  }

  if (!VAR_19) {




   VAR_17->pte = FUNC_42(VAR_18->vm_mm, VAR_17->pmd,
     VAR_17->address, &VAR_17->ptl);
   if (FUNC_24(FUNC_43(*VAR_17->pte, VAR_17->orig_pte)))
    VAR_26 = VAR_12;
   FUNC_13(VAR_0);
   goto unlock;
  }


  VAR_26 = VAR_11;
  FUNC_11(VAR_6);
  FUNC_10(VAR_18->vm_mm, VAR_6);
 } else if (FUNC_0(VAR_19)) {




  VAR_26 = VAR_10;
  FUNC_13(VAR_0);
  goto out_release;
 }

 VAR_24 = FUNC_25(VAR_19, VAR_18->vm_mm, VAR_17->flags);

 FUNC_13(VAR_0);
 if (!VAR_24) {
  VAR_26 |= VAR_13;
  goto out_release;
 }







 if (FUNC_58((!FUNC_2(VAR_19) ||
   FUNC_38(VAR_19) != VAR_22.val)) && VAR_20)
  goto out_page;

 VAR_19 = FUNC_23(VAR_19, VAR_18, VAR_17->address);
 if (FUNC_58(!VAR_19)) {
  VAR_26 = VAR_12;
  VAR_19 = VAR_20;
  goto out_page;
 }

 if (FUNC_33(VAR_19, VAR_18->vm_mm, VAR_3,
     &VAR_21, 0)) {
  VAR_26 = VAR_12;
  goto out_page;
 }




 VAR_17->pte = FUNC_42(VAR_18->vm_mm, VAR_17->pmd, VAR_17->address,
   &VAR_17->ptl);
 if (FUNC_58(!FUNC_43(*VAR_17->pte, VAR_17->orig_pte)))
  goto out_nomap;

 if (FUNC_58(!FUNC_3(VAR_19))) {
  VAR_26 = VAR_14;
  goto out_nomap;
 }
 FUNC_19(VAR_18->vm_mm, VAR_4);
 FUNC_12(VAR_18->vm_mm, VAR_5);
 VAR_23 = FUNC_35(VAR_19, VAR_18->vm_page_prot);
 if ((VAR_17->flags & VAR_1) && FUNC_49(VAR_19, ((void*)0))) {
  VAR_23 = FUNC_29(FUNC_40(VAR_23), VAR_18);
  VAR_17->flags &= ~VAR_1;
  VAR_26 |= VAR_15;
  VAR_25 = VAR_7;
 }
 FUNC_18(VAR_18, VAR_19);
 if (FUNC_44(VAR_17->orig_pte))
  VAR_23 = FUNC_41(VAR_23);
 FUNC_51(VAR_18->vm_mm, VAR_17->address, VAR_17->pte, VAR_23);
 FUNC_9(VAR_18->vm_mm, VAR_18, VAR_17->address, VAR_23, VAR_17->orig_pte);
 VAR_17->orig_pte = VAR_23;


 if (FUNC_58(VAR_19 != VAR_20 && VAR_20)) {
  FUNC_37(VAR_19, VAR_18, VAR_17->address, 0);
  FUNC_31(VAR_19, VAR_21, 0, 0);
  FUNC_27(VAR_19, VAR_18);
 } else {
  FUNC_16(VAR_19, VAR_18, VAR_17->address, VAR_25);
  FUNC_31(VAR_19, VAR_21, 1, 0);
  FUNC_7(VAR_19);
 }

 FUNC_53(VAR_22);
 if (FUNC_32(VAR_19) ||
     (VAR_18->vm_flags & VAR_16) || FUNC_1(VAR_19))
  FUNC_57(VAR_19);
 FUNC_59(VAR_19);
 if (VAR_19 != VAR_20 && VAR_20) {
  FUNC_59(VAR_20);
  FUNC_48(VAR_20);
 }

 if (VAR_17->flags & VAR_1) {
  VAR_26 |= FUNC_17(VAR_17);
  if (VAR_26 & VAR_9)
   VAR_26 &= VAR_9;
  goto out;
 }


 FUNC_60(VAR_18, VAR_17->address, VAR_17->pte);
unlock:
 FUNC_47(VAR_17->pte, VAR_17->ptl);
out:
 return VAR_26;
out_nomap:
 FUNC_30(VAR_19, VAR_21, 0);
 FUNC_47(VAR_17->pte, VAR_17->ptl);
out_page:
 FUNC_59(VAR_19);
out_release:
 FUNC_48(VAR_19);
 if (VAR_19 != VAR_20 && VAR_20) {
  FUNC_59(VAR_20);
  FUNC_48(VAR_20);
 }
 return VAR_26;
}
