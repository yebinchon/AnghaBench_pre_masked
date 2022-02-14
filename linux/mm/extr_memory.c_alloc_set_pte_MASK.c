
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_fault_t ;
struct vm_fault {int flags; int * pte; int address; int * pmd; struct vm_area_struct* vma; } ;
struct vm_area_struct {int vm_flags; int vm_mm; int vm_page_prot; } ;
struct page {int dummy; } ;
struct mem_cgroup {int dummy; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct mem_cgroup*,struct page*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct vm_fault*,struct page*) ;
 int FUNC_4 (struct vm_area_struct*,struct page*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct page*,struct vm_area_struct*) ;
 int FUNC_7 (int ,struct vm_area_struct*) ;
 int FUNC_8 (struct page*,struct mem_cgroup*,int,int) ;
 int FUNC_9 (struct page*,int ) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*,int) ;
 int FUNC_12 (struct page*,struct vm_area_struct*,int ,int) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (struct vm_fault*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (struct vm_area_struct*,int ,int *) ;

vm_fault_t FUNC_20(struct vm_fault *VAR_6, struct mem_cgroup *VAR_7,
  struct page *VAR_8)
{
 struct vm_area_struct *VAR_9 = VAR_6->vma;
 bool VAR_10 = VAR_6->flags & VAR_1;
 pte_t VAR_11;
 vm_fault_t VAR_12;

 if (FUNC_13(*VAR_6->pmd) && FUNC_1(VAR_8) &&
   FUNC_0(VAR_0)) {

  FUNC_2(VAR_7, VAR_8);

  VAR_12 = FUNC_3(VAR_6, VAR_8);
  if (VAR_12 != VAR_3)
   return VAR_12;
 }

 if (!VAR_6->pte) {
  VAR_12 = FUNC_14(VAR_6);
  if (VAR_12)
   return VAR_12;
 }


 if (FUNC_18(!FUNC_16(*VAR_6->pte)))
  return VAR_4;

 FUNC_4(VAR_9, VAR_8);
 VAR_11 = FUNC_9(VAR_8, VAR_9->vm_page_prot);
 if (VAR_10)
  VAR_11 = FUNC_7(FUNC_15(VAR_11), VAR_9);

 if (VAR_10 && !(VAR_9->vm_flags & VAR_5)) {
  FUNC_5(VAR_9->vm_mm, VAR_2);
  FUNC_12(VAR_8, VAR_9, VAR_6->address, 0);
  FUNC_8(VAR_8, VAR_7, 0, 0);
  FUNC_6(VAR_8, VAR_9);
 } else {
  FUNC_5(VAR_9->vm_mm, FUNC_10(VAR_8));
  FUNC_11(VAR_8, 0);
 }
 FUNC_17(VAR_9->vm_mm, VAR_6->address, VAR_6->pte, VAR_11);


 FUNC_19(VAR_9, VAR_6->address, VAR_6->pte);

 return 0;
}
