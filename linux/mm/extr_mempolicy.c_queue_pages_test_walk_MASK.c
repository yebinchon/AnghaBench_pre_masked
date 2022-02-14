
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int vm_flags; int vm_next; } ;
struct queue_pages {unsigned long flags; struct vm_area_struct* prev; } ;
struct mm_walk {struct queue_pages* private; struct vm_area_struct* vma; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_1 (struct vm_area_struct*) ;
 int FUNC_2 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_9, unsigned long VAR_10,
    struct mm_walk *VAR_11)
{
 struct vm_area_struct *VAR_12 = VAR_11->vma;
 struct queue_pages *VAR_13 = VAR_11->private;
 unsigned long VAR_14 = VAR_12->vm_end;
 unsigned long VAR_15 = VAR_13->flags;





 if (!FUNC_2(VAR_12) &&
     !(VAR_15 & VAR_3))
  return 1;

 if (VAR_14 > VAR_10)
  VAR_14 = VAR_10;
 if (VAR_12->vm_start > VAR_9)
  VAR_9 = VAR_12->vm_start;

 if (!(VAR_15 & VAR_1)) {
  if (!VAR_12->vm_next && VAR_12->vm_end < VAR_10)
   return -VAR_0;
  if (VAR_13->prev && VAR_13->prev->vm_end < VAR_12->vm_start)
   return -VAR_0;
 }

 VAR_13->prev = VAR_12;

 if (VAR_15 & VAR_2) {

  if (!FUNC_1(VAR_12) &&
   (VAR_12->vm_flags & (VAR_7 | VAR_5 | VAR_8)) &&
   !(VAR_12->vm_flags & VAR_6))
   FUNC_0(VAR_12, VAR_9, VAR_14);
  return 1;
 }


 if (VAR_15 & VAR_4)
  return 0;
 return 1;
}
