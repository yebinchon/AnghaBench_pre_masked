
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int mmap_sem; } ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vm_area_struct*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (int *) ;
 struct vm_area_struct* FUNC_3 (TYPE_1__*,unsigned long) ;
 long FUNC_4 (struct vm_area_struct*,unsigned long,unsigned long) ;
 long FUNC_5 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_6 (struct vm_area_struct*,unsigned long,unsigned long) ;

__attribute__((used)) static long FUNC_7(struct vm_area_struct *VAR_5,
      struct vm_area_struct **VAR_6,
      unsigned long VAR_7, unsigned long VAR_8,
      int VAR_9)
{
 *VAR_6 = VAR_5;
 if (!FUNC_1(VAR_5))
  return -VAR_0;

 if (!FUNC_6(VAR_5, VAR_7, VAR_8)) {
  *VAR_6 = ((void*)0);

  FUNC_2(&VAR_4->mm->mmap_sem);
  VAR_5 = FUNC_3(VAR_4->mm, VAR_7);
  if (!VAR_5)
   return -VAR_1;
  if (VAR_7 < VAR_5->vm_start) {
   return -VAR_1;
  }
  if (!FUNC_1(VAR_5))
   return -VAR_0;
  if (VAR_8 > VAR_5->vm_end) {
   VAR_8 = VAR_5->vm_end;
  }
  FUNC_0(VAR_7 >= VAR_8);
 }

 if (VAR_9 == VAR_2)
  return FUNC_4(VAR_5, VAR_7, VAR_8);
 else if (VAR_9 == VAR_3)
  return FUNC_5(VAR_5, VAR_7, VAR_8);
 else
  return -VAR_0;
}
