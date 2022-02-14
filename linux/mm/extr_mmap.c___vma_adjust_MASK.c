
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; long vm_pgoff; struct vm_area_struct* vm_next; struct anon_vma* anon_vma; struct file* vm_file; struct mm_struct* vm_mm; } ;
struct rb_root_cached {int dummy; } ;
struct mm_struct {scalar_t__ highest_vm_end; int map_count; } ;
struct file {struct address_space* f_mapping; } ;
struct anon_vma {int dummy; } ;
struct address_space {struct rb_root_cached i_mmap; } ;
typedef long pgoff_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mm_struct*,struct vm_area_struct*) ;
 int FUNC_2 (struct vm_area_struct*,struct file*,struct address_space*) ;
 int FUNC_3 (struct vm_area_struct*) ;
 int FUNC_4 (struct mm_struct*,struct vm_area_struct*,int *,int,struct vm_area_struct*) ;
 int FUNC_5 (struct mm_struct*,struct vm_area_struct*,struct vm_area_struct*) ;
 int FUNC_6 (struct vm_area_struct*,struct vm_area_struct*) ;
 int FUNC_7 (struct vm_area_struct*) ;
 int FUNC_8 (struct vm_area_struct*) ;
 int FUNC_9 (struct anon_vma*) ;
 int FUNC_10 (struct vm_area_struct*,struct vm_area_struct*) ;
 int FUNC_11 (struct anon_vma*) ;
 int FUNC_12 (struct address_space*) ;
 int FUNC_13 (struct address_space*) ;
 int FUNC_14 (struct file*) ;
 int FUNC_15 (struct address_space*) ;
 int FUNC_16 (struct address_space*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct vm_area_struct*,struct vm_area_struct*) ;
 int FUNC_19 (struct vm_area_struct*) ;
 int FUNC_20 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_21 (struct mm_struct*) ;
 int FUNC_22 (struct vm_area_struct*) ;
 scalar_t__ FUNC_23 (struct vm_area_struct*) ;
 int FUNC_24 (struct vm_area_struct*,unsigned long,unsigned long,long) ;
 int FUNC_25 (struct vm_area_struct*) ;
 int FUNC_26 (struct vm_area_struct*,struct rb_root_cached*) ;
 int FUNC_27 (struct vm_area_struct*,struct rb_root_cached*) ;
 int FUNC_28 (struct vm_area_struct*) ;

int FUNC_29(struct vm_area_struct *VAR_1, unsigned long VAR_2,
 unsigned long VAR_3, pgoff_t VAR_4, struct vm_area_struct *VAR_5,
 struct vm_area_struct *VAR_6)
{
 struct mm_struct *VAR_7 = VAR_1->vm_mm;
 struct vm_area_struct *VAR_8 = VAR_1->vm_next, *VAR_9 = VAR_1;
 struct address_space *VAR_10 = ((void*)0);
 struct rb_root_cached *VAR_11 = ((void*)0);
 struct anon_vma *VAR_12 = ((void*)0);
 struct file *VAR_13 = VAR_1->vm_file;
 bool VAR_14 = 0, VAR_15 = 0;
 long VAR_16 = 0;
 int VAR_17 = 0;

 if (VAR_8 && !VAR_5) {
  struct vm_area_struct *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);

  if (VAR_3 >= VAR_8->vm_end) {






   if (VAR_8 == VAR_6) {




    FUNC_0(VAR_3 != VAR_8->vm_end);





    VAR_17 = 3;
    FUNC_0(VAR_13 != VAR_8->vm_file);
    FUNC_18(VAR_1, VAR_8);
   } else {
    FUNC_0(VAR_6 != VAR_1);




    VAR_17 = 1 + (VAR_3 > VAR_8->vm_end);
    FUNC_0(VAR_17 == 2 &&
        VAR_3 != VAR_8->vm_next->vm_end);
    FUNC_0(VAR_17 == 1 &&
        VAR_3 != VAR_8->vm_end);

    VAR_3 = VAR_8->vm_end;
   }

   VAR_18 = VAR_8;
   VAR_19 = VAR_1;





   if (VAR_17 == 2 && !VAR_8->anon_vma)
    VAR_18 = VAR_8->vm_next;

  } else if (VAR_3 > VAR_8->vm_start) {




   VAR_16 = (VAR_3 - VAR_8->vm_start) >> VAR_0;
   VAR_18 = VAR_8;
   VAR_19 = VAR_1;
   FUNC_0(VAR_6 != VAR_19);
  } else if (VAR_3 < VAR_1->vm_end) {





   VAR_16 = -((VAR_1->vm_end - VAR_3) >> VAR_0);
   VAR_18 = VAR_1;
   VAR_19 = VAR_8;
   FUNC_0(VAR_6 != VAR_19);
  }






  if (VAR_18 && VAR_18->anon_vma && !VAR_19->anon_vma) {
   int VAR_20;

   VAR_19->anon_vma = VAR_18->anon_vma;
   VAR_20 = FUNC_6(VAR_19, VAR_18);
   if (VAR_20)
    return VAR_20;
  }
 }
again:
 FUNC_24(VAR_9, VAR_2, VAR_3, VAR_16);

 if (VAR_13) {
  VAR_10 = VAR_13->f_mapping;
  VAR_11 = &VAR_10->i_mmap;
  FUNC_20(VAR_1, VAR_1->vm_start, VAR_1->vm_end);

  if (VAR_16)
   FUNC_20(VAR_8, VAR_8->vm_start, VAR_8->vm_end);

  FUNC_15(VAR_10);
  if (VAR_5) {






   FUNC_3(VAR_5);
  }
 }

 VAR_12 = VAR_1->anon_vma;
 if (!VAR_12 && VAR_16)
  VAR_12 = VAR_8->anon_vma;
 if (VAR_12) {
  FUNC_0(VAR_16 && VAR_8->anon_vma &&
      VAR_12 != VAR_8->anon_vma);
  FUNC_9(VAR_12);
  FUNC_8(VAR_1);
  if (VAR_16)
   FUNC_8(VAR_8);
 }

 if (VAR_11) {
  FUNC_12(VAR_10);
  FUNC_27(VAR_1, VAR_11);
  if (VAR_16)
   FUNC_27(VAR_8, VAR_11);
 }

 if (VAR_2 != VAR_1->vm_start) {
  VAR_1->vm_start = VAR_2;
  VAR_14 = 1;
 }
 if (VAR_3 != VAR_1->vm_end) {
  VAR_1->vm_end = VAR_3;
  VAR_15 = 1;
 }
 VAR_1->vm_pgoff = VAR_4;
 if (VAR_16) {
  VAR_8->vm_start += VAR_16 << VAR_0;
  VAR_8->vm_pgoff += VAR_16;
 }

 if (VAR_11) {
  if (VAR_16)
   FUNC_26(VAR_8, VAR_11);
  FUNC_26(VAR_1, VAR_11);
  FUNC_13(VAR_10);
 }

 if (VAR_17) {




  if (VAR_17 != 3)
   FUNC_5(VAR_7, VAR_8, VAR_1);
  else
   FUNC_4(VAR_7, VAR_8, ((void*)0), 0, VAR_1);
  if (VAR_13)
   FUNC_2(VAR_8, VAR_13, VAR_10);
 } else if (VAR_5) {





  FUNC_1(VAR_7, VAR_5);
 } else {
  if (VAR_14)
   FUNC_25(VAR_1);
  if (VAR_15) {
   if (!VAR_8)
    VAR_7->highest_vm_end = FUNC_23(VAR_1);
   else if (!VAR_16)
    FUNC_25(VAR_8);
  }
 }

 if (VAR_12) {
  FUNC_7(VAR_1);
  if (VAR_16)
   FUNC_7(VAR_8);
  FUNC_11(VAR_12);
 }
 if (VAR_10)
  FUNC_16(VAR_10);

 if (VAR_11) {
  FUNC_19(VAR_1);

  if (VAR_16)
   FUNC_19(VAR_8);
 }

 if (VAR_17) {
  if (VAR_13) {
   FUNC_20(VAR_8, VAR_8->vm_start, VAR_8->vm_end);
   FUNC_14(VAR_13);
  }
  if (VAR_8->anon_vma)
   FUNC_10(VAR_1, VAR_8);
  VAR_7->map_count--;
  FUNC_17(FUNC_28(VAR_8));
  FUNC_22(VAR_8);





  if (VAR_17 != 3) {






   VAR_8 = VAR_1->vm_next;
  } else {
   VAR_8 = VAR_1;
  }
  if (VAR_17 == 2) {
   VAR_17 = 1;
   VAR_3 = VAR_8->vm_end;
   goto again;
  }
  else if (VAR_8)
   FUNC_25(VAR_8);
  else {
   FUNC_0(VAR_7->highest_vm_end != FUNC_23(VAR_1));
  }
 }
 if (VAR_5 && VAR_13)
  FUNC_19(VAR_5);

 FUNC_21(VAR_7);

 return 0;
}
