
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_fault_t ;
struct vm_fault {int flags; int ptl; scalar_t__ pte; int memcg; TYPE_1__* vma; struct page* page; struct page* cow_page; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int vm_flags; int vm_mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct vm_fault*,int ,struct page*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;

vm_fault_t FUNC_3(struct vm_fault *VAR_2)
{
 struct page *VAR_3;
 vm_fault_t VAR_4 = 0;


 if ((VAR_2->flags & VAR_0) &&
     !(VAR_2->vma->vm_flags & VAR_1))
  VAR_3 = VAR_2->cow_page;
 else
  VAR_3 = VAR_2->page;





 if (!(VAR_2->vma->vm_flags & VAR_1))
  VAR_4 = FUNC_1(VAR_2->vma->vm_mm);
 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_2, VAR_2->memcg, VAR_3);
 if (VAR_2->pte)
  FUNC_2(VAR_2->pte, VAR_2->ptl);
 return VAR_4;
}
