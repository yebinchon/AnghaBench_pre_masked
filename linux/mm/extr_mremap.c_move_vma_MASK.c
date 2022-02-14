
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_userfaultfd_ctx {int dummy; } ;
struct vm_area_struct {unsigned long vm_flags; unsigned long vm_pgoff; unsigned long vm_start; unsigned long vm_end; TYPE_2__* vm_next; TYPE_1__* vm_ops; struct mm_struct* vm_mm; } ;
struct mm_struct {int map_count; unsigned long hiwater_vm; unsigned long locked_vm; } ;
struct list_head {int dummy; } ;
struct TYPE_4__ {unsigned long vm_flags; } ;
struct TYPE_3__ {int (* mremap ) (struct vm_area_struct*) ;} ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mm_struct*,unsigned long,unsigned long,unsigned long,unsigned long) ;
 struct vm_area_struct* FUNC_1 (struct vm_area_struct**,unsigned long,unsigned long,unsigned long,int*) ;
 scalar_t__ FUNC_2 (struct mm_struct*,unsigned long,unsigned long,struct list_head*) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,unsigned long,int ,unsigned long*) ;
 unsigned long FUNC_4 (struct vm_area_struct*,unsigned long,struct vm_area_struct*,unsigned long,unsigned long,int) ;
 int FUNC_5 (struct vm_area_struct*,struct vm_userfaultfd_ctx*) ;
 int FUNC_6 (struct vm_area_struct*) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct vm_area_struct*) ;
 int FUNC_9 (struct mm_struct*,unsigned long,unsigned long) ;
 int FUNC_10 (unsigned long) ;

__attribute__((used)) static unsigned long FUNC_11(struct vm_area_struct *VAR_7,
  unsigned long VAR_8, unsigned long VAR_9,
  unsigned long VAR_10, unsigned long VAR_11,
  bool *VAR_12, struct vm_userfaultfd_ctx *VAR_13,
  struct list_head *VAR_14)
{
 struct mm_struct *VAR_15 = VAR_7->vm_mm;
 struct vm_area_struct *VAR_16;
 unsigned long VAR_17 = VAR_7->vm_flags;
 unsigned long VAR_18;
 unsigned long VAR_19;
 unsigned long VAR_20 = 0;
 unsigned long VAR_21;
 int VAR_22 = 0;
 int VAR_23;
 bool VAR_24;





 if (VAR_15->map_count >= VAR_6 - 3)
  return -VAR_0;
 VAR_23 = FUNC_3(VAR_7, VAR_8, VAR_8 + VAR_9,
      VAR_1, &VAR_17);
 if (VAR_23)
  return VAR_23;

 VAR_18 = VAR_7->vm_pgoff + ((VAR_8 - VAR_7->vm_start) >> VAR_2);
 VAR_16 = FUNC_1(&VAR_7, VAR_11, VAR_10, VAR_18,
      &VAR_24);
 if (!VAR_16)
  return -VAR_0;

 VAR_19 = FUNC_4(VAR_7, VAR_8, VAR_16, VAR_11, VAR_9,
         VAR_24);
 if (VAR_19 < VAR_9) {
  VAR_23 = -VAR_0;
 } else if (VAR_7->vm_ops && VAR_7->vm_ops->mremap) {
  VAR_23 = VAR_7->vm_ops->mremap(VAR_16);
 }

 if (FUNC_7(VAR_23)) {





  FUNC_4(VAR_16, VAR_11, VAR_7, VAR_8, VAR_19,
     1);
  VAR_7 = VAR_16;
  VAR_9 = VAR_10;
  VAR_8 = VAR_11;
  VAR_11 = VAR_23;
 } else {
  FUNC_5(VAR_16, VAR_13);
  FUNC_0(VAR_15, VAR_8, VAR_8 + VAR_9,
      VAR_11, VAR_11 + VAR_10);
 }


 if (VAR_17 & VAR_3) {
  VAR_7->vm_flags &= ~VAR_3;
  VAR_20 = VAR_7->vm_end - VAR_7->vm_start - VAR_9;
  if (VAR_8 > VAR_7->vm_start &&
      VAR_8 + VAR_9 < VAR_7->vm_end)
   VAR_22 = 1;
 }
 VAR_21 = VAR_15->hiwater_vm;
 FUNC_9(VAR_15, VAR_7->vm_flags, VAR_10 >> VAR_2);


 if (FUNC_7(VAR_7->vm_flags & VAR_5))
  FUNC_8(VAR_7);

 if (FUNC_2(VAR_15, VAR_8, VAR_9, VAR_14) < 0) {

  FUNC_10(VAR_20 >> VAR_2);
  VAR_20 = 0;
 }
 VAR_15->hiwater_vm = VAR_21;


 if (VAR_20) {
  VAR_7->vm_flags |= VAR_3;
  if (VAR_22)
   VAR_7->vm_next->vm_flags |= VAR_3;
 }

 if (VAR_17 & VAR_4) {
  VAR_15->locked_vm += VAR_10 >> VAR_2;
  *VAR_12 = 1;
 }

 return VAR_11;
}
