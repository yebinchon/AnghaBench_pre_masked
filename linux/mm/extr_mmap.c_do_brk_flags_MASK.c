
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; unsigned long vm_pgoff; unsigned long vm_flags; int vm_page_prot; } ;
struct rb_node {int dummy; } ;
struct mm_struct {unsigned long def_flags; scalar_t__ map_count; unsigned long total_vm; unsigned long data_vm; unsigned long locked_vm; } ;
struct list_head {int dummy; } ;
typedef unsigned long pgoff_t ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 TYPE_1__* VAR_10 ;
 scalar_t__ FUNC_0 (struct mm_struct*,unsigned long,unsigned long,struct list_head*) ;
 scalar_t__ FUNC_1 (struct mm_struct*,unsigned long,unsigned long,struct vm_area_struct**,struct rb_node***,struct rb_node**) ;
 int FUNC_2 (int *,unsigned long,unsigned long,int ,int ) ;
 int FUNC_3 (struct mm_struct*,unsigned long,unsigned long) ;
 int FUNC_4 (struct mm_struct*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct vm_area_struct*) ;
 scalar_t__ FUNC_7 (struct mm_struct*,unsigned long) ;
 scalar_t__ VAR_11 ;
 struct vm_area_struct* FUNC_8 (struct mm_struct*) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (struct mm_struct*,struct vm_area_struct*,struct vm_area_struct*,struct rb_node**,struct rb_node*) ;
 struct vm_area_struct* FUNC_12 (struct mm_struct*,struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int *,int *,unsigned long,int *,int ) ;
 int FUNC_13 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_14(unsigned long VAR_12, unsigned long VAR_13, unsigned long VAR_14, struct list_head *VAR_15)
{
 struct mm_struct *VAR_16 = VAR_10->mm;
 struct vm_area_struct *VAR_17, *VAR_18;
 struct rb_node **VAR_19, *VAR_20;
 pgoff_t VAR_21 = VAR_12 >> VAR_4;
 int VAR_22;


 if ((VAR_14 & (~VAR_7)) != 0)
  return -VAR_0;
 VAR_14 |= VAR_6 | VAR_5 | VAR_16->def_flags;

 VAR_22 = FUNC_2(((void*)0), VAR_12, VAR_13, 0, VAR_2);
 if (FUNC_5(VAR_22))
  return VAR_22;

 VAR_22 = FUNC_4(VAR_16, VAR_16->def_flags, VAR_13);
 if (VAR_22)
  return VAR_22;




 while (FUNC_1(VAR_16, VAR_12, VAR_12 + VAR_13, &VAR_18, &VAR_19,
         &VAR_20)) {
  if (FUNC_0(VAR_16, VAR_12, VAR_13, VAR_15))
   return -VAR_1;
 }


 if (!FUNC_3(VAR_16, VAR_14, VAR_13 >> VAR_4))
  return -VAR_1;

 if (VAR_16->map_count > VAR_11)
  return -VAR_1;

 if (FUNC_7(VAR_16, VAR_13 >> VAR_4))
  return -VAR_1;


 VAR_17 = FUNC_12(VAR_16, VAR_18, VAR_12, VAR_12 + VAR_13, VAR_14,
   ((void*)0), ((void*)0), VAR_21, ((void*)0), VAR_3);
 if (VAR_17)
  goto out;




 VAR_17 = FUNC_8(VAR_16);
 if (!VAR_17) {
  FUNC_10(VAR_13 >> VAR_4);
  return -VAR_1;
 }

 FUNC_13(VAR_17);
 VAR_17->vm_start = VAR_12;
 VAR_17->vm_end = VAR_12 + VAR_13;
 VAR_17->vm_pgoff = VAR_21;
 VAR_17->vm_flags = VAR_14;
 VAR_17->vm_page_prot = FUNC_9(VAR_14);
 FUNC_11(VAR_16, VAR_17, VAR_18, VAR_19, VAR_20);
out:
 FUNC_6(VAR_17);
 VAR_16->total_vm += VAR_13 >> VAR_4;
 VAR_16->data_vm += VAR_13 >> VAR_4;
 if (VAR_14 & VAR_8)
  VAR_16->locked_vm += (VAR_13 >> VAR_4);
 VAR_17->vm_flags |= VAR_9;
 return 0;
}
