
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {unsigned long address; int ptl; int * pmd; struct vm_area_struct* vma; } ;
struct vm_area_struct {int vm_mm; int vm_page_prot; } ;
struct page {int dummy; } ;
struct mem_cgroup {int dummy; } ;
typedef int pmd_t ;
typedef scalar_t__ pgtable_t ;
typedef int gfp_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct page*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct page*,unsigned long,int ) ;
 int FUNC_7 (struct mem_cgroup*,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct vm_fault*,int ) ;
 int FUNC_10 (struct page*,struct vm_area_struct*) ;
 int FUNC_11 (int ,struct vm_area_struct*) ;
 int FUNC_12 (struct page*,struct mem_cgroup*,int) ;
 int FUNC_13 (struct page*,struct mem_cgroup*,int,int) ;
 scalar_t__ FUNC_14 (struct page*,int ,int ,struct mem_cgroup**,int) ;
 int FUNC_15 (struct page*,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct page*,struct vm_area_struct*,unsigned long,int) ;
 int FUNC_18 (int ,int *,scalar_t__) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int ) ;
 int FUNC_23 (int ,scalar_t__) ;
 int FUNC_24 (struct page*) ;
 int FUNC_25 (int ,unsigned long,int *,int ) ;
 int FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (int) ;
 scalar_t__ FUNC_28 (struct vm_area_struct*) ;

__attribute__((used)) static vm_fault_t FUNC_29(struct vm_fault *VAR_8,
   struct page *VAR_9, gfp_t VAR_10)
{
 struct vm_area_struct *VAR_11 = VAR_8->vma;
 struct mem_cgroup *VAR_12;
 pgtable_t VAR_13;
 unsigned long VAR_14 = VAR_8->address & VAR_0;
 vm_fault_t VAR_15 = 0;

 FUNC_2(!FUNC_0(VAR_9), VAR_9);

 if (FUNC_14(VAR_9, VAR_11->vm_mm, VAR_10, &VAR_12, 1)) {
  FUNC_24(VAR_9);
  FUNC_8(VAR_4);
  return VAR_5;
 }

 VAR_13 = FUNC_22(VAR_11->vm_mm);
 if (FUNC_27(!VAR_13)) {
  VAR_15 = VAR_6;
  goto release;
 }

 FUNC_6(VAR_9, VAR_8->address, VAR_1);





 FUNC_3(VAR_9);

 VAR_8->ptl = FUNC_19(VAR_11->vm_mm, VAR_8->pmd);
 if (FUNC_27(!FUNC_21(*VAR_8->pmd))) {
  goto unlock_release;
 } else {
  pmd_t VAR_16;

  VAR_15 = FUNC_5(VAR_11->vm_mm);
  if (VAR_15)
   goto unlock_release;


  if (FUNC_28(VAR_11)) {
   vm_fault_t VAR_17;

   FUNC_26(VAR_8->ptl);
   FUNC_12(VAR_9, VAR_12, 1);
   FUNC_24(VAR_9);
   FUNC_23(VAR_11->vm_mm, VAR_13);
   VAR_17 = FUNC_9(VAR_8, VAR_7);
   FUNC_1(VAR_17 & VAR_5);
   return VAR_17;
  }

  VAR_16 = FUNC_15(VAR_9, VAR_11->vm_page_prot);
  VAR_16 = FUNC_11(FUNC_20(VAR_16), VAR_11);
  FUNC_17(VAR_9, VAR_11, VAR_14, 1);
  FUNC_13(VAR_9, VAR_12, 0, 1);
  FUNC_10(VAR_9, VAR_11);
  FUNC_18(VAR_11->vm_mm, VAR_8->pmd, VAR_13);
  FUNC_25(VAR_11->vm_mm, VAR_14, VAR_8->pmd, VAR_16);
  FUNC_4(VAR_11->vm_mm, VAR_2, VAR_1);
  FUNC_16(VAR_11->vm_mm);
  FUNC_26(VAR_8->ptl);
  FUNC_8(VAR_3);
  FUNC_7(VAR_12, VAR_3, 1);
 }

 return 0;
unlock_release:
 FUNC_26(VAR_8->ptl);
release:
 if (VAR_13)
  FUNC_23(VAR_11->vm_mm, VAR_13);
 FUNC_12(VAR_9, VAR_12, 1);
 FUNC_24(VAR_9);
 return VAR_15;

}
