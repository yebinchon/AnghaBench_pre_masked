
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_flags; struct vm_area_struct* vm_next; struct vm_area_struct* vm_prev; } ;
struct mm_struct {scalar_t__ map_count; int mmap_sem; scalar_t__ locked_vm; struct vm_area_struct* mmap; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t) ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mm_struct*,struct vm_area_struct*,unsigned long,int) ;
 int FUNC_2 (struct mm_struct*,unsigned long,unsigned long) ;
 int FUNC_3 (struct mm_struct*,struct vm_area_struct*,struct vm_area_struct*,unsigned long) ;
 int FUNC_4 (int *) ;
 struct vm_area_struct* FUNC_5 (struct mm_struct*,unsigned long) ;
 int FUNC_6 (struct vm_area_struct*) ;
 scalar_t__ FUNC_7 (unsigned long) ;
 int FUNC_8 (struct mm_struct*,struct vm_area_struct*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_9 (struct list_head*) ;
 int FUNC_10 (struct mm_struct*,struct vm_area_struct*,struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_11 (struct vm_area_struct*,unsigned long,unsigned long,struct list_head*) ;
 scalar_t__ FUNC_12 (struct vm_area_struct*) ;

int FUNC_13(struct mm_struct *VAR_5, unsigned long VAR_6, size_t VAR_7,
  struct list_head *VAR_8, bool VAR_9)
{
 unsigned long VAR_10;
 struct vm_area_struct *VAR_11, *VAR_12, *VAR_13;

 if ((FUNC_7(VAR_6)) || VAR_6 > VAR_2 || VAR_7 > VAR_2-VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_7);
 VAR_10 = VAR_6 + VAR_7;
 if (VAR_7 == 0)
  return -VAR_0;






 FUNC_2(VAR_5, VAR_6, VAR_10);


 VAR_11 = FUNC_5(VAR_5, VAR_6);
 if (!VAR_11)
  return 0;
 VAR_12 = VAR_11->vm_prev;



 if (VAR_11->vm_start >= VAR_10)
  return 0;
 if (VAR_6 > VAR_11->vm_start) {
  int VAR_14;






  if (VAR_10 < VAR_11->vm_end && VAR_5->map_count >= VAR_4)
   return -VAR_1;

  VAR_14 = FUNC_1(VAR_5, VAR_11, VAR_6, 0);
  if (VAR_14)
   return VAR_14;
  VAR_12 = VAR_11;
 }


 VAR_13 = FUNC_5(VAR_5, VAR_10);
 if (VAR_13 && VAR_10 > VAR_13->vm_start) {
  int VAR_15 = FUNC_1(VAR_5, VAR_13, VAR_10, 1);
  if (VAR_15)
   return VAR_15;
 }
 VAR_11 = VAR_12 ? VAR_12->vm_next : VAR_5->mmap;

 if (FUNC_9(VAR_8)) {
  int VAR_16 = FUNC_11(VAR_11, VAR_6, VAR_10, VAR_8);
  if (VAR_16)
   return VAR_16;
 }




 if (VAR_5->locked_vm) {
  struct vm_area_struct *VAR_17 = VAR_11;
  while (VAR_17 && VAR_17->vm_start < VAR_10) {
   if (VAR_17->vm_flags & VAR_3) {
    VAR_5->locked_vm -= FUNC_12(VAR_17);
    FUNC_6(VAR_17);
   }

   VAR_17 = VAR_17->vm_next;
  }
 }


 FUNC_3(VAR_5, VAR_11, VAR_12, VAR_10);

 if (VAR_9)
  FUNC_4(&VAR_5->mmap_sem);

 FUNC_10(VAR_5, VAR_11, VAR_12, VAR_6, VAR_10);


 FUNC_8(VAR_5, VAR_11);

 return VAR_9 ? 1 : 0;
}
