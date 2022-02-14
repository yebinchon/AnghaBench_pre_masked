
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_userfaultfd_ctx {int dummy; } ;
struct vm_area_struct {int vm_flags; unsigned long vm_start; scalar_t__ vm_pgoff; int vm_file; } ;
struct mm_struct {int map_count; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_1 (struct vm_area_struct*) ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 unsigned long FUNC_2 (struct mm_struct*,unsigned long,unsigned long,struct list_head*) ;
 unsigned long FUNC_3 (int ,unsigned long,unsigned long,scalar_t__,unsigned long) ;
 unsigned long FUNC_4 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,unsigned long,int*,struct vm_userfaultfd_ctx*,struct list_head*) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 int VAR_8 ;
 int FUNC_6 (unsigned long) ;
 struct vm_area_struct* FUNC_7 (unsigned long,unsigned long,unsigned long,unsigned long*) ;

__attribute__((used)) static unsigned long FUNC_8(unsigned long VAR_9, unsigned long VAR_10,
  unsigned long VAR_11, unsigned long VAR_12, bool *VAR_13,
  struct vm_userfaultfd_ctx *VAR_14,
  struct list_head *VAR_15,
  struct list_head *VAR_16)
{
 struct mm_struct *VAR_17 = VAR_7->mm;
 struct vm_area_struct *VAR_18;
 unsigned long VAR_19 = -VAR_0;
 unsigned long VAR_20 = 0;
 unsigned long VAR_21;

 if (FUNC_5(VAR_11))
  goto out;

 if (VAR_12 > VAR_5 || VAR_11 > VAR_5 - VAR_12)
  goto out;


 if (VAR_9 + VAR_10 > VAR_11 && VAR_11 + VAR_12 > VAR_9)
  goto out;
 if ((VAR_17->map_count + 2) >= VAR_8 - 3)
  return -VAR_1;

 VAR_19 = FUNC_2(VAR_17, VAR_11, VAR_12, VAR_15);
 if (VAR_19)
  goto out;

 if (VAR_10 >= VAR_12) {
  VAR_19 = FUNC_2(VAR_17, VAR_9+VAR_12, VAR_10 - VAR_12, VAR_16);
  if (VAR_19 && VAR_10 != VAR_12)
   goto out;
  VAR_10 = VAR_12;
 }

 VAR_18 = FUNC_7(VAR_9, VAR_10, VAR_12, &VAR_20);
 if (FUNC_0(VAR_18)) {
  VAR_19 = FUNC_1(VAR_18);
  goto out;
 }

 VAR_21 = VAR_2;
 if (VAR_18->vm_flags & VAR_6)
  VAR_21 |= VAR_3;

 VAR_19 = FUNC_3(VAR_18->vm_file, VAR_11, VAR_12, VAR_18->vm_pgoff +
    ((VAR_9 - VAR_18->vm_start) >> VAR_4),
    VAR_21);
 if (FUNC_5(VAR_19))
  goto out1;

 VAR_19 = FUNC_4(VAR_18, VAR_9, VAR_10, VAR_12, VAR_11, VAR_13, VAR_14,
         VAR_16);
 if (!(FUNC_5(VAR_19)))
  goto out;
out1:
 FUNC_6(VAR_20);

out:
 return VAR_19;
}
