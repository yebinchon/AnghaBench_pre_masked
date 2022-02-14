
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; unsigned long vm_start; unsigned long vm_pgoff; TYPE_1__* vm_ops; } ;
struct page {int dummy; } ;
typedef int pte_t ;
struct TYPE_2__ {struct page* (* find_special_page ) (struct vm_area_struct*,unsigned long) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int) ;
 struct page* FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (struct vm_area_struct*,unsigned long,int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 unsigned long FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct page* FUNC_10 (struct vm_area_struct*,unsigned long) ;
 scalar_t__ FUNC_11 (int) ;

struct page *FUNC_12(struct vm_area_struct *VAR_5, unsigned long VAR_6,
       pte_t VAR_7)
{
 unsigned long VAR_8 = FUNC_8(VAR_7);

 if (FUNC_0(VAR_0)) {
  if (FUNC_3(!FUNC_9(VAR_7)))
   goto check_pfn;
  if (VAR_5->vm_ops && VAR_5->vm_ops->find_special_page)
   return VAR_5->vm_ops->find_special_page(VAR_5, VAR_6);
  if (VAR_5->vm_flags & (VAR_3 | VAR_2))
   return ((void*)0);
  if (FUNC_2(VAR_8))
   return ((void*)0);
  if (FUNC_7(VAR_7))
   return ((void*)0);

  FUNC_6(VAR_5, VAR_6, VAR_7, ((void*)0));
  return ((void*)0);
 }



 if (FUNC_11(VAR_5->vm_flags & (VAR_3|VAR_2))) {
  if (VAR_5->vm_flags & VAR_2) {
   if (!FUNC_5(VAR_8))
    return ((void*)0);
   goto out;
  } else {
   unsigned long VAR_9;
   VAR_9 = (VAR_6 - VAR_5->vm_start) >> VAR_1;
   if (VAR_8 == VAR_5->vm_pgoff + VAR_9)
    return ((void*)0);
   if (!FUNC_1(VAR_5->vm_flags))
    return ((void*)0);
  }
 }

 if (FUNC_2(VAR_8))
  return ((void*)0);

check_pfn:
 if (FUNC_11(VAR_8 > VAR_4)) {
  FUNC_6(VAR_5, VAR_6, VAR_7, ((void*)0));
  return ((void*)0);
 }





out:
 return FUNC_4(VAR_8);
}
