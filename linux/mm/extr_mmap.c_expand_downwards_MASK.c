
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; unsigned long vm_end; unsigned long vm_start; unsigned long vm_pgoff; int anon_vma; struct vm_area_struct* vm_prev; struct mm_struct* vm_mm; } ;
struct mm_struct {unsigned long locked_vm; int page_table_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_1 (struct vm_area_struct*) ;
 int FUNC_2 (struct vm_area_struct*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vm_area_struct*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct vm_area_struct*,int) ;
 unsigned long VAR_9 ;
 int FUNC_7 (struct vm_area_struct*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 unsigned long VAR_10 ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct mm_struct*) ;
 int FUNC_12 (struct mm_struct*,int,unsigned long) ;
 int FUNC_13 (struct vm_area_struct*) ;

int FUNC_14(struct vm_area_struct *VAR_11,
       unsigned long VAR_12)
{
 struct mm_struct *VAR_13 = VAR_11->vm_mm;
 struct vm_area_struct *VAR_14;
 int VAR_15 = 0;

 VAR_12 &= VAR_2;
 if (VAR_12 < VAR_9)
  return -VAR_1;


 VAR_14 = VAR_11->vm_prev;

 if (VAR_14 && !(VAR_14->vm_flags & VAR_5) &&
   (VAR_14->vm_flags & (VAR_8|VAR_7|VAR_4))) {
  if (VAR_12 - VAR_14->vm_end < VAR_10)
   return -VAR_0;
 }


 if (FUNC_10(FUNC_4(VAR_11)))
  return -VAR_0;






 FUNC_3(VAR_11->anon_vma);


 if (VAR_12 < VAR_11->vm_start) {
  unsigned long VAR_16, VAR_17;

  VAR_16 = VAR_11->vm_end - VAR_12;
  VAR_17 = (VAR_11->vm_start - VAR_12) >> VAR_3;

  VAR_15 = -VAR_0;
  if (VAR_17 <= VAR_11->vm_pgoff) {
   VAR_15 = FUNC_0(VAR_11, VAR_16, VAR_17);
   if (!VAR_15) {
    FUNC_8(&VAR_13->page_table_lock);
    if (VAR_11->vm_flags & VAR_6)
     VAR_13->locked_vm += VAR_17;
    FUNC_12(VAR_13, VAR_11->vm_flags, VAR_17);
    FUNC_2(VAR_11);
    VAR_11->vm_start = VAR_12;
    VAR_11->vm_pgoff -= VAR_17;
    FUNC_1(VAR_11);
    FUNC_13(VAR_11);
    FUNC_9(&VAR_13->page_table_lock);

    FUNC_7(VAR_11);
   }
  }
 }
 FUNC_5(VAR_11->anon_vma);
 FUNC_6(VAR_11, VAR_11->vm_flags);
 FUNC_11(VAR_13);
 return VAR_15;
}
