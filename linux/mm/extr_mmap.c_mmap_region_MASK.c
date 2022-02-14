
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_flags_t ;
struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_flags; unsigned long vm_pgoff; struct file* vm_file; int vm_page_prot; } ;
struct rb_node {int dummy; } ;
struct mm_struct {unsigned long locked_vm; } ;
struct list_head {int dummy; } ;
struct file {int f_mapping; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct file*,int) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*,struct vm_area_struct*) ;
 unsigned long FUNC_4 (struct mm_struct*,unsigned long,unsigned long) ;
 TYPE_1__* VAR_10 ;
 int FUNC_5 (struct file*) ;
 scalar_t__ FUNC_6 (struct mm_struct*,unsigned long,unsigned long,struct list_head*) ;
 scalar_t__ FUNC_7 (struct mm_struct*,unsigned long,unsigned long,struct vm_area_struct**,struct rb_node***,struct rb_node**) ;
 int FUNC_8 (struct file*) ;
 struct file* FUNC_9 (struct file*) ;
 struct vm_area_struct* FUNC_10 (struct mm_struct*) ;
 scalar_t__ FUNC_11 (struct vm_area_struct*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct mm_struct*,int,unsigned long) ;
 int FUNC_15 (struct vm_area_struct*) ;
 scalar_t__ FUNC_16 (struct mm_struct*,unsigned long) ;
 int FUNC_17 (struct vm_area_struct*) ;
 int FUNC_18 (struct mm_struct*,struct vm_area_struct*,struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_19 (struct vm_area_struct*) ;
 struct vm_area_struct* FUNC_20 (struct mm_struct*) ;
 int FUNC_21 (struct vm_area_struct*) ;
 int FUNC_22 (int) ;
 int FUNC_23 (struct mm_struct*,int,unsigned long) ;
 int FUNC_24 (unsigned long) ;
 scalar_t__ FUNC_25 (struct vm_area_struct*) ;
 int FUNC_26 (struct mm_struct*,struct vm_area_struct*,struct vm_area_struct*,struct rb_node**,struct rb_node*) ;
 struct vm_area_struct* FUNC_27 (struct mm_struct*,struct vm_area_struct*,unsigned long,unsigned long,int,int *,struct file*,unsigned long,int *,int ) ;
 int FUNC_28 (struct vm_area_struct*) ;
 int FUNC_29 (struct vm_area_struct*) ;

unsigned long FUNC_30(struct file *VAR_11, unsigned long VAR_12,
  unsigned long VAR_13, vm_flags_t VAR_14, unsigned long VAR_15,
  struct list_head *VAR_16)
{
 struct mm_struct *VAR_17 = VAR_10->mm;
 struct vm_area_struct *VAR_18, *VAR_19;
 int VAR_20;
 struct rb_node **VAR_21, *VAR_22;
 unsigned long VAR_23 = 0;


 if (!FUNC_14(VAR_17, VAR_14, VAR_13 >> VAR_2)) {
  unsigned long VAR_24;





  VAR_24 = FUNC_4(VAR_17, VAR_12, VAR_12 + VAR_13);

  if (!FUNC_14(VAR_17, VAR_14,
     (VAR_13 >> VAR_2) - VAR_24))
   return -VAR_0;
 }


 while (FUNC_7(VAR_17, VAR_12, VAR_12 + VAR_13, &VAR_19, &VAR_21,
         &VAR_22)) {
  if (FUNC_6(VAR_17, VAR_12, VAR_13, VAR_16))
   return -VAR_0;
 }




 if (FUNC_1(VAR_11, VAR_14)) {
  VAR_23 = VAR_13 >> VAR_2;
  if (FUNC_16(VAR_17, VAR_23))
   return -VAR_0;
  VAR_14 |= VAR_3;
 }




 VAR_18 = FUNC_27(VAR_17, VAR_19, VAR_12, VAR_12 + VAR_13, VAR_14,
   ((void*)0), VAR_11, VAR_15, ((void*)0), VAR_1);
 if (VAR_18)
  goto out;






 VAR_18 = FUNC_20(VAR_17);
 if (!VAR_18) {
  VAR_20 = -VAR_0;
  goto unacct_error;
 }

 VAR_18->vm_start = VAR_12;
 VAR_18->vm_end = VAR_12 + VAR_13;
 VAR_18->vm_flags = VAR_14;
 VAR_18->vm_page_prot = FUNC_22(VAR_14);
 VAR_18->vm_pgoff = VAR_15;

 if (VAR_11) {
  if (VAR_14 & VAR_4) {
   VAR_20 = FUNC_5(VAR_11);
   if (VAR_20)
    goto free_vma;
  }
  if (VAR_14 & VAR_7) {
   VAR_20 = FUNC_12(VAR_11->f_mapping);
   if (VAR_20)
    goto allow_write_and_free_vma;
  }






  VAR_18->vm_file = FUNC_9(VAR_11);
  VAR_20 = FUNC_3(VAR_11, VAR_18);
  if (VAR_20)
   goto unmap_and_free_vma;
  FUNC_0(VAR_12 != VAR_18->vm_start);

  VAR_12 = VAR_18->vm_start;
  VAR_14 = VAR_18->vm_flags;
 } else if (VAR_14 & VAR_7) {
  VAR_20 = FUNC_17(VAR_18);
  if (VAR_20)
   goto free_vma;
 } else {
  FUNC_28(VAR_18);
 }

 FUNC_26(VAR_17, VAR_18, VAR_19, VAR_21, VAR_22);

 if (VAR_11) {
  if (VAR_14 & VAR_7)
   FUNC_13(VAR_11->f_mapping);
  if (VAR_14 & VAR_4)
   FUNC_2(VAR_11);
 }
 VAR_11 = VAR_18->vm_file;
out:
 FUNC_15(VAR_18);

 FUNC_23(VAR_17, VAR_14, VAR_13 >> VAR_2);
 if (VAR_14 & VAR_5) {
  if ((VAR_14 & VAR_9) || FUNC_25(VAR_18) ||
     FUNC_11(VAR_18) ||
     VAR_18 == FUNC_10(VAR_10->mm))
   VAR_18->vm_flags &= VAR_6;
  else
   VAR_17->locked_vm += (VAR_13 >> VAR_2);
 }

 if (VAR_11)
  FUNC_19(VAR_18);
 VAR_18->vm_flags |= VAR_8;

 FUNC_29(VAR_18);

 return VAR_12;

unmap_and_free_vma:
 VAR_18->vm_file = ((void*)0);
 FUNC_8(VAR_11);


 FUNC_18(VAR_17, VAR_18, VAR_19, VAR_18->vm_start, VAR_18->vm_end);
 VAR_23 = 0;
 if (VAR_14 & VAR_7)
  FUNC_13(VAR_11->f_mapping);
allow_write_and_free_vma:
 if (VAR_14 & VAR_4)
  FUNC_2(VAR_11);
free_vma:
 FUNC_21(VAR_18);
unacct_error:
 if (VAR_23)
  FUNC_24(VAR_23);
 return VAR_20;
}
