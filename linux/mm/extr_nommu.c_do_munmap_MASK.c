
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; struct vm_area_struct* vm_next; scalar_t__ vm_file; } ;
struct mm_struct {int dummy; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int comm; int pid; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct mm_struct*,struct vm_area_struct*) ;
 int FUNC_2 (struct vm_area_struct*) ;
 struct vm_area_struct* FUNC_3 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 int FUNC_5 (char*,int ,int ,unsigned long,unsigned long) ;
 int FUNC_6 (struct mm_struct*,struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_7 (struct mm_struct*,struct vm_area_struct*,unsigned long,int) ;

int FUNC_8(struct mm_struct *VAR_2, unsigned long VAR_3, size_t VAR_4, struct list_head *VAR_5)
{
 struct vm_area_struct *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 VAR_4 = FUNC_0(VAR_4);
 if (VAR_4 == 0)
  return -VAR_0;

 VAR_7 = VAR_3 + VAR_4;


 VAR_6 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_6) {
  static int VAR_9;
  if (VAR_9 < 5) {
   FUNC_5("munmap of memory not mmapped by process %d (%s): 0x%lx-0x%lx\n",
     VAR_1->pid, VAR_1->comm,
     VAR_3, VAR_3 + VAR_4 - 1);
   VAR_9++;
  }
  return -VAR_0;
 }


 if (VAR_6->vm_file) {
  do {
   if (VAR_3 > VAR_6->vm_start)
    return -VAR_0;
   if (VAR_7 == VAR_6->vm_end)
    goto erase_whole_vma;
   VAR_6 = VAR_6->vm_next;
  } while (VAR_6);
  return -VAR_0;
 } else {

  if (VAR_3 == VAR_6->vm_start && VAR_7 == VAR_6->vm_end)
   goto erase_whole_vma;
  if (VAR_3 < VAR_6->vm_start || VAR_7 > VAR_6->vm_end)
   return -VAR_0;
  if (FUNC_4(VAR_3))
   return -VAR_0;
  if (VAR_7 != VAR_6->vm_end && FUNC_4(VAR_7))
   return -VAR_0;
  if (VAR_3 != VAR_6->vm_start && VAR_7 != VAR_6->vm_end) {
   VAR_8 = FUNC_7(VAR_2, VAR_6, VAR_3, 1);
   if (VAR_8 < 0)
    return VAR_8;
  }
  return FUNC_6(VAR_2, VAR_6, VAR_3, VAR_7);
 }

erase_whole_vma:
 FUNC_2(VAR_6);
 FUNC_1(VAR_2, VAR_6);
 return 0;
}
