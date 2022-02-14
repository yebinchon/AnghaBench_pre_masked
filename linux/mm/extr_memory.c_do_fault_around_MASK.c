
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {unsigned long address; int pgoff; int * pte; int ptl; int * pmd; TYPE_2__* vma; int prealloc_pte; } ;
typedef int pgoff_t ;
struct TYPE_4__ {TYPE_1__* vm_ops; int vm_mm; scalar_t__ vm_pgoff; int vm_start; } ;
struct TYPE_3__ {int (* map_pages ) (struct vm_fault*,int,int) ;} ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct vm_fault*,int,int) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static vm_fault_t FUNC_11(struct vm_fault *VAR_6)
{
 unsigned long VAR_7 = VAR_6->address, VAR_8, VAR_9;
 pgoff_t VAR_10 = VAR_6->pgoff;
 pgoff_t VAR_11;
 int VAR_12;
 vm_fault_t VAR_13 = 0;

 VAR_8 = FUNC_0(VAR_5) >> VAR_1;
 VAR_9 = ~(VAR_8 * VAR_2 - 1) & VAR_0;

 VAR_6->address = FUNC_1(VAR_7 & VAR_9, VAR_6->vma->vm_start);
 VAR_12 = ((VAR_7 - VAR_6->address) >> VAR_1) & (VAR_3 - 1);
 VAR_10 -= VAR_12;





 VAR_11 = VAR_10 -
  ((VAR_6->address >> VAR_1) & (VAR_3 - 1)) +
  VAR_3 - 1;
 VAR_11 = FUNC_2(VAR_11, FUNC_10(VAR_6->vma) + VAR_6->vma->vm_pgoff - 1,
   VAR_10 + VAR_8 - 1);

 if (FUNC_3(*VAR_6->pmd)) {
  VAR_6->prealloc_pte = FUNC_5(VAR_6->vma->vm_mm);
  if (!VAR_6->prealloc_pte)
   goto out;
  FUNC_8();
 }

 VAR_6->vma->vm_ops->map_pages(VAR_6, VAR_10, VAR_11);


 if (FUNC_4(*VAR_6->pmd)) {
  VAR_13 = VAR_4;
  goto out;
 }


 if (!VAR_6->pte)
  goto out;


 VAR_6->pte -= (VAR_6->address >> VAR_1) - (VAR_7 >> VAR_1);
 if (!FUNC_6(*VAR_6->pte))
  VAR_13 = VAR_4;
 FUNC_7(VAR_6->pte, VAR_6->ptl);
out:
 VAR_6->address = VAR_7;
 VAR_6->pte = ((void*)0);
 return VAR_13;
}
