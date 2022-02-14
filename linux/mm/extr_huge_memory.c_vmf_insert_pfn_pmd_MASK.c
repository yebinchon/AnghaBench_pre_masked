
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {unsigned long address; int pmd; struct vm_area_struct* vma; } ;
struct vm_area_struct {int vm_flags; unsigned long vm_start; unsigned long vm_end; int vm_mm; int vm_page_prot; } ;
typedef int * pgtable_t ;
typedef int pgprot_t ;
typedef int pfn_t ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,int ,int ,int ,int,int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (struct vm_area_struct*,int *,int ) ;

vm_fault_t FUNC_7(struct vm_fault *VAR_6, pfn_t VAR_7, bool VAR_8)
{
 unsigned long VAR_9 = VAR_6->address & VAR_0;
 struct vm_area_struct *VAR_10 = VAR_6->vma;
 pgprot_t VAR_11 = VAR_10->vm_page_prot;
 pgtable_t VAR_12 = ((void*)0);






 FUNC_0(!(VAR_10->vm_flags & (VAR_5|VAR_4)) &&
   !FUNC_4(VAR_7));
 FUNC_0((VAR_10->vm_flags & (VAR_5|VAR_4)) ==
      (VAR_5|VAR_4));
 FUNC_0((VAR_10->vm_flags & VAR_5) && FUNC_3(VAR_10->vm_flags));

 if (VAR_9 < VAR_10->vm_start || VAR_9 >= VAR_10->vm_end)
  return VAR_3;

 if (FUNC_1()) {
  VAR_12 = FUNC_5(VAR_10->vm_mm);
  if (!VAR_12)
   return VAR_2;
 }

 FUNC_6(VAR_10, &VAR_11, VAR_7);

 FUNC_2(VAR_10, VAR_9, VAR_6->pmd, VAR_7, VAR_11, VAR_8, VAR_12);
 return VAR_1;
}
