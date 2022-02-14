
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; scalar_t__ vm_pgoff; int vm_flags; int vm_page_prot; } ;
struct page {int dummy; } ;
struct file {struct page* private_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,int ,unsigned long,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5,
      struct vm_area_struct *VAR_6)
{
 struct page *VAR_7 = VAR_5->private_data;
 unsigned long VAR_8 = VAR_6->vm_end - VAR_6->vm_start;

 FUNC_0(!VAR_7);


 if (VAR_6->vm_pgoff > 0 || VAR_8 != VAR_2)
  return -VAR_0;

 if (VAR_6->vm_flags & VAR_4)
  return -VAR_1;

 VAR_6->vm_flags &= ~VAR_3;

 return FUNC_2(VAR_6, VAR_6->vm_start,
          FUNC_1(VAR_7),
          VAR_8, VAR_6->vm_page_prot);
}
