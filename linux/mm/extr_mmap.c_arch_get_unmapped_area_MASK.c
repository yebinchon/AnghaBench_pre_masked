
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_unmapped_area_info {unsigned long length; unsigned long high_limit; scalar_t__ align_mask; int low_limit; scalar_t__ flags; } ;
struct vm_area_struct {int dummy; } ;
struct mm_struct {int mmap_base; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 TYPE_1__* VAR_2 ;
 struct vm_area_struct* FUNC_2 (struct mm_struct*,unsigned long,struct vm_area_struct**) ;
 unsigned long const VAR_3 ;
 unsigned long FUNC_3 (struct vm_area_struct*) ;
 unsigned long FUNC_4 (struct vm_area_struct*) ;
 unsigned long FUNC_5 (struct vm_unmapped_area_info*) ;

unsigned long
FUNC_6(struct file *VAR_4, unsigned long VAR_5,
  unsigned long VAR_6, unsigned long VAR_7, unsigned long VAR_8)
{
 struct mm_struct *VAR_9 = VAR_2->mm;
 struct vm_area_struct *VAR_10, *VAR_11;
 struct vm_unmapped_area_info VAR_12;
 const unsigned long VAR_13 = FUNC_1(VAR_5);

 if (VAR_6 > VAR_13 - VAR_3)
  return -VAR_0;

 if (VAR_8 & VAR_1)
  return VAR_5;

 if (VAR_5) {
  VAR_5 = FUNC_0(VAR_5);
  VAR_10 = FUNC_2(VAR_9, VAR_5, &VAR_11);
  if (VAR_13 - VAR_6 >= VAR_5 && VAR_5 >= VAR_3 &&
      (!VAR_10 || VAR_5 + VAR_6 <= FUNC_4(VAR_10)) &&
      (!VAR_11 || VAR_5 >= FUNC_3(VAR_11)))
   return VAR_5;
 }

 VAR_12.flags = 0;
 VAR_12.length = VAR_6;
 VAR_12.low_limit = VAR_9->mmap_base;
 VAR_12.high_limit = VAR_13;
 VAR_12.align_mask = 0;
 return FUNC_5(&VAR_12);
}
