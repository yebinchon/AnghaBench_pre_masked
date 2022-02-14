
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_flags; int vm_page_prot; TYPE_1__* vm_mm; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int mmap_sem; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,struct page*,int ) ;
 int FUNC_3 (struct page*) ;

int FUNC_4(struct vm_area_struct *VAR_4, unsigned long VAR_5,
   struct page *VAR_6)
{
 if (VAR_5 < VAR_4->vm_start || VAR_5 >= VAR_4->vm_end)
  return -VAR_0;
 if (!FUNC_3(VAR_6))
  return -VAR_1;
 if (!(VAR_4->vm_flags & VAR_2)) {
  FUNC_0(FUNC_1(&VAR_4->vm_mm->mmap_sem));
  FUNC_0(VAR_4->vm_flags & VAR_3);
  VAR_4->vm_flags |= VAR_2;
 }
 return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_4->vm_page_prot);
}
