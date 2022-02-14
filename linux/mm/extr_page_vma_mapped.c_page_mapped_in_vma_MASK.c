
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; } ;
struct page_vma_mapped_walk {int address; int flags; struct vm_area_struct* vma; struct page* page; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct page*,struct vm_area_struct*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (struct page_vma_mapped_walk*) ;
 int FUNC_4 (struct page_vma_mapped_walk*) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct page *VAR_2, struct vm_area_struct *VAR_3)
{
 struct page_vma_mapped_walk VAR_4 = {
  .page = VAR_2,
  .vma = VAR_3,
  .flags = VAR_1,
 };
 unsigned long VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 VAR_6 = VAR_5 + VAR_0 * (FUNC_1(VAR_2) - 1);

 if (FUNC_5(VAR_6 < VAR_3->vm_start || VAR_5 >= VAR_3->vm_end))
  return 0;
 VAR_4.address = FUNC_2(VAR_5, VAR_3->vm_start);
 if (!FUNC_3(&VAR_4))
  return 0;
 FUNC_4(&VAR_4);
 return 1;
}
