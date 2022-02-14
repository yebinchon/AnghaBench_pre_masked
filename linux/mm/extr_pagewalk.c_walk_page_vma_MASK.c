
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_end; int vm_start; TYPE_1__* vm_mm; } ;
struct mm_walk_ops {int dummy; } ;
struct mm_walk {void* private; TYPE_1__* mm; struct vm_area_struct* vma; struct mm_walk_ops const* ops; } ;
struct TYPE_2__ {int mmap_sem; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct mm_walk*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,struct mm_walk*) ;

int FUNC_3(struct vm_area_struct *VAR_1, const struct mm_walk_ops *VAR_2,
  void *VAR_3)
{
 struct mm_walk VAR_4 = {
  .ops = VAR_2,
  .mm = VAR_1->vm_mm,
  .vma = VAR_1,
  .private = VAR_3,
 };
 int VAR_5;

 if (!VAR_4.mm)
  return -VAR_0;

 FUNC_1(&VAR_4.mm->mmap_sem);

 VAR_5 = FUNC_2(VAR_1->vm_start, VAR_1->vm_end, &VAR_4);
 if (VAR_5 > 0)
  return 0;
 if (VAR_5 < 0)
  return VAR_5;
 return FUNC_0(VAR_1->vm_start, VAR_1->vm_end, &VAR_4);
}
