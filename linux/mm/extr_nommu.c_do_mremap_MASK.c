
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; int vm_flags; TYPE_1__* vm_region; } ;
struct TYPE_4__ {int mm; } ;
struct TYPE_3__ {unsigned long vm_end; unsigned long vm_start; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (unsigned long) ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 struct vm_area_struct* FUNC_1 (int ,unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;

__attribute__((used)) static unsigned long FUNC_3(unsigned long VAR_7,
   unsigned long VAR_8, unsigned long VAR_9,
   unsigned long VAR_10, unsigned long VAR_11)
{
 struct vm_area_struct *VAR_12;


 VAR_8 = FUNC_0(VAR_8);
 VAR_9 = FUNC_0(VAR_9);
 if (VAR_8 == 0 || VAR_9 == 0)
  return (unsigned long) -VAR_1;

 if (FUNC_2(VAR_7))
  return -VAR_1;

 if (VAR_10 & VAR_4 && VAR_11 != VAR_7)
  return (unsigned long) -VAR_1;

 VAR_12 = FUNC_1(VAR_6->mm, VAR_7, VAR_8);
 if (!VAR_12)
  return (unsigned long) -VAR_1;

 if (VAR_12->vm_end != VAR_12->vm_start + VAR_8)
  return (unsigned long) -VAR_0;

 if (VAR_12->vm_flags & VAR_5)
  return (unsigned long) -VAR_3;

 if (VAR_9 > VAR_12->vm_region->vm_end - VAR_12->vm_region->vm_start)
  return (unsigned long) -VAR_2;


 VAR_12->vm_end = VAR_12->vm_start + VAR_9;
 return VAR_12->vm_start;
}
