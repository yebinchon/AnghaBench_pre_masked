
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_fault_t ;
struct vm_fault {int flags; int ptl; int * pte; int address; int pmd; struct vm_area_struct* vma; } ;
struct vm_area_struct {int vm_flags; int vm_mm; int vm_page_prot; } ;
struct page {int dummy; } ;
struct mem_cgroup {int dummy; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (struct vm_area_struct*,int ) ;
 int FUNC_2 (struct vm_area_struct*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct vm_fault*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct page*,struct vm_area_struct*) ;
 int FUNC_7 (struct page*,struct mem_cgroup*,int) ;
 int FUNC_8 (struct page*,struct mem_cgroup*,int,int) ;
 scalar_t__ FUNC_9 (struct page*,int ,int ,struct mem_cgroup**,int) ;
 int FUNC_10 (struct page*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct page*,struct vm_area_struct*,int ,int) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 void* FUNC_21 (int ,int ,int ,int *) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (struct page*) ;
 int FUNC_24 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_25 (int ) ;
 int FUNC_26 (struct vm_area_struct*,int ,int *) ;
 scalar_t__ FUNC_27 (struct vm_area_struct*) ;

__attribute__((used)) static vm_fault_t FUNC_28(struct vm_fault *VAR_8)
{
 struct vm_area_struct *VAR_9 = VAR_8->vma;
 struct mem_cgroup *VAR_10;
 struct page *VAR_11;
 vm_fault_t VAR_12 = 0;
 pte_t VAR_13;


 if (VAR_9->vm_flags & VAR_5)
  return VAR_4;
 if (FUNC_16(VAR_9->vm_mm, VAR_8->pmd))
  return VAR_3;


 if (FUNC_25(FUNC_15(VAR_8->pmd)))
  return 0;


 if (!(VAR_8->flags & VAR_0) &&
   !FUNC_11(VAR_9->vm_mm)) {
  VAR_13 = FUNC_18(FUNC_14(FUNC_12(VAR_8->address),
      VAR_9->vm_page_prot));
  VAR_8->pte = FUNC_21(VAR_9->vm_mm, VAR_8->pmd,
    VAR_8->address, &VAR_8->ptl);
  if (!FUNC_20(*VAR_8->pte))
   goto unlock;
  VAR_12 = FUNC_3(VAR_9->vm_mm);
  if (VAR_12)
   goto unlock;

  if (FUNC_27(VAR_9)) {
   FUNC_22(VAR_8->pte, VAR_8->ptl);
   return FUNC_4(VAR_8, VAR_6);
  }
  goto setpte;
 }


 if (FUNC_25(FUNC_2(VAR_9)))
  goto oom;
 VAR_11 = FUNC_1(VAR_9, VAR_8->address);
 if (!VAR_11)
  goto oom;

 if (FUNC_9(VAR_11, VAR_9->vm_mm, VAR_1, &VAR_10,
     0))
  goto oom_free_page;






 FUNC_0(VAR_11);

 VAR_13 = FUNC_10(VAR_11, VAR_9->vm_page_prot);
 if (VAR_9->vm_flags & VAR_7)
  VAR_13 = FUNC_19(FUNC_17(VAR_13));

 VAR_8->pte = FUNC_21(VAR_9->vm_mm, VAR_8->pmd, VAR_8->address,
   &VAR_8->ptl);
 if (!FUNC_20(*VAR_8->pte))
  goto release;

 VAR_12 = FUNC_3(VAR_9->vm_mm);
 if (VAR_12)
  goto release;


 if (FUNC_27(VAR_9)) {
  FUNC_22(VAR_8->pte, VAR_8->ptl);
  FUNC_7(VAR_11, VAR_10, 0);
  FUNC_23(VAR_11);
  return FUNC_4(VAR_8, VAR_6);
 }

 FUNC_5(VAR_9->vm_mm, VAR_2);
 FUNC_13(VAR_11, VAR_9, VAR_8->address, 0);
 FUNC_8(VAR_11, VAR_10, 0, 0);
 FUNC_6(VAR_11, VAR_9);
setpte:
 FUNC_24(VAR_9->vm_mm, VAR_8->address, VAR_8->pte, VAR_13);


 FUNC_26(VAR_9, VAR_8->address, VAR_8->pte);
unlock:
 FUNC_22(VAR_8->pte, VAR_8->ptl);
 return VAR_12;
release:
 FUNC_7(VAR_11, VAR_10, 0);
 FUNC_23(VAR_11);
 goto unlock;
oom_free_page:
 FUNC_23(VAR_11);
oom:
 return VAR_3;
}
