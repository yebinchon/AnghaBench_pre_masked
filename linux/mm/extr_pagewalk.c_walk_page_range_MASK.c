
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; struct vm_area_struct* vm_next; } ;
struct mm_walk_ops {scalar_t__ pte_hole; } ;
struct mm_walk {void* private; struct mm_walk_ops const* ops; struct vm_area_struct* vma; struct mm_struct* mm; } ;
struct mm_struct {int mmap_sem; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long,struct mm_walk*) ;
 struct vm_area_struct* FUNC_1 (struct mm_struct*,unsigned long) ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long,struct mm_walk*) ;

int FUNC_5(struct mm_struct *VAR_1, unsigned long VAR_2,
  unsigned long VAR_3, const struct mm_walk_ops *VAR_4,
  void *VAR_5)
{
 int VAR_6 = 0;
 unsigned long VAR_7;
 struct vm_area_struct *VAR_8;
 struct mm_walk VAR_9 = {
  .ops = VAR_4,
  .mm = VAR_1,
  .private = VAR_5,
 };

 if (VAR_2 >= VAR_3)
  return -VAR_0;

 if (!VAR_9.mm)
  return -VAR_0;

 FUNC_2(&VAR_9.mm->mmap_sem);

 VAR_8 = FUNC_1(VAR_9.mm, VAR_2);
 do {
  if (!VAR_8) {
   VAR_9.vma = ((void*)0);
   VAR_7 = VAR_3;
  } else if (VAR_2 < VAR_8->vm_start) {
   VAR_9.vma = ((void*)0);
   VAR_7 = FUNC_3(VAR_3, VAR_8->vm_start);
  } else {
   VAR_9.vma = VAR_8;
   VAR_7 = FUNC_3(VAR_3, VAR_8->vm_end);
   VAR_8 = VAR_8->vm_next;

   VAR_6 = FUNC_4(VAR_2, VAR_7, &VAR_9);
   if (VAR_6 > 0) {





    VAR_6 = 0;
    continue;
   }
   if (VAR_6 < 0)
    break;
  }
  if (VAR_9.vma || VAR_9.ops->pte_hole)
   VAR_6 = FUNC_0(VAR_2, VAR_7, &VAR_9);
  if (VAR_6)
   break;
 } while (VAR_2 = VAR_7, VAR_2 < VAR_3);
 return VAR_6;
}
