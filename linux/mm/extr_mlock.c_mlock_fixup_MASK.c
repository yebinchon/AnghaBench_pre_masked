
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_flags_t ;
struct vm_area_struct {int vm_flags; unsigned long vm_start; unsigned long vm_end; int vm_userfaultfd_ctx; int vm_file; int anon_vma; scalar_t__ vm_pgoff; struct mm_struct* vm_mm; } ;
struct mm_struct {int locked_vm; } ;
typedef scalar_t__ pgoff_t ;
struct TYPE_2__ {int mm; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 struct vm_area_struct* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*) ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_3 (struct mm_struct*,struct vm_area_struct*,unsigned long,int) ;
 scalar_t__ FUNC_4 (struct vm_area_struct*) ;
 struct vm_area_struct* FUNC_5 (struct mm_struct*,struct vm_area_struct*,unsigned long,unsigned long,int,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_6 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_7(struct vm_area_struct *VAR_4, struct vm_area_struct **VAR_5,
 unsigned long VAR_6, unsigned long VAR_7, vm_flags_t VAR_8)
{
 struct mm_struct *VAR_9 = VAR_4->vm_mm;
 pgoff_t VAR_10;
 int VAR_11;
 int VAR_12 = 0;
 int VAR_13 = !!(VAR_8 & VAR_1);
 vm_flags_t VAR_14 = VAR_4->vm_flags;

 if (VAR_8 == VAR_4->vm_flags || (VAR_4->vm_flags & VAR_2) ||
     FUNC_1(VAR_4) || VAR_4 == FUNC_0(VAR_3->mm) ||
     FUNC_4(VAR_4))

  goto out;

 VAR_10 = VAR_4->vm_pgoff + ((VAR_6 - VAR_4->vm_start) >> VAR_0);
 *VAR_5 = FUNC_5(VAR_9, *VAR_5, VAR_6, VAR_7, VAR_8, VAR_4->anon_vma,
     VAR_4->vm_file, VAR_10, FUNC_6(VAR_4),
     VAR_4->vm_userfaultfd_ctx);
 if (*VAR_5) {
  VAR_4 = *VAR_5;
  goto success;
 }

 if (VAR_6 != VAR_4->vm_start) {
  VAR_12 = FUNC_3(VAR_9, VAR_4, VAR_6, 1);
  if (VAR_12)
   goto out;
 }

 if (VAR_7 != VAR_4->vm_end) {
  VAR_12 = FUNC_3(VAR_9, VAR_4, VAR_7, 0);
  if (VAR_12)
   goto out;
 }

success:



 VAR_11 = (VAR_7 - VAR_6) >> VAR_0;
 if (!VAR_13)
  VAR_11 = -VAR_11;
 else if (VAR_14 & VAR_1)
  VAR_11 = 0;
 VAR_9->locked_vm += VAR_11;







 if (VAR_13)
  VAR_4->vm_flags = VAR_8;
 else
  FUNC_2(VAR_4, VAR_6, VAR_7);

out:
 *VAR_5 = VAR_4;
 return VAR_12;
}
