
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; int vm_flags; unsigned long vm_end; scalar_t__ vm_pgoff; } ;
struct mm_struct {unsigned long locked_vm; } ;
struct TYPE_2__ {int pid; int comm; struct mm_struct* mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vm_area_struct* FUNC_0 (int ) ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_13 ;
 struct vm_area_struct* FUNC_2 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*) ;
 int FUNC_4 (struct mm_struct*,int,unsigned long) ;
 int FUNC_5 (char*,int ,int ) ;
 unsigned long FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct mm_struct*,unsigned long) ;

__attribute__((used)) static struct vm_area_struct *FUNC_8(unsigned long VAR_14,
 unsigned long VAR_15, unsigned long VAR_16, unsigned long *VAR_17)
{
 struct mm_struct *VAR_18 = VAR_13->mm;
 struct vm_area_struct *VAR_19 = FUNC_2(VAR_18, VAR_14);
 unsigned long VAR_20;

 if (!VAR_19 || VAR_19->vm_start > VAR_14)
  return FUNC_0(-VAR_2);
 if (!VAR_15 && !(VAR_19->vm_flags & (VAR_12 | VAR_10))) {
  FUNC_5("%s (%d): attempted to duplicate a private mapping with mremap.  This is not supported.\n", VAR_13->comm, VAR_13->pid);
  return FUNC_0(-VAR_3);
 }

 if (FUNC_3(VAR_19))
  return FUNC_0(-VAR_3);


 if (VAR_15 > VAR_19->vm_end - VAR_14)
  return FUNC_0(-VAR_2);

 if (VAR_16 == VAR_15)
  return VAR_19;


 VAR_20 = (VAR_14 - VAR_19->vm_start) >> VAR_5;
 VAR_20 += VAR_19->vm_pgoff;
 if (VAR_20 + (VAR_16 >> VAR_5) < VAR_20)
  return FUNC_0(-VAR_3);

 if (VAR_19->vm_flags & (VAR_8 | VAR_11))
  return FUNC_0(-VAR_2);

 if (VAR_19->vm_flags & VAR_9) {
  unsigned long VAR_21, VAR_22;
  VAR_21 = VAR_18->locked_vm << VAR_5;
  VAR_22 = FUNC_6(VAR_6);
  VAR_21 += VAR_16 - VAR_15;
  if (VAR_21 > VAR_22 && !FUNC_1(VAR_0))
   return FUNC_0(-VAR_1);
 }

 if (!FUNC_4(VAR_18, VAR_19->vm_flags,
    (VAR_16 - VAR_15) >> VAR_5))
  return FUNC_0(-VAR_4);

 if (VAR_19->vm_flags & VAR_7) {
  unsigned long VAR_23 = (VAR_16 - VAR_15) >> VAR_5;
  if (FUNC_7(VAR_18, VAR_23))
   return FUNC_0(-VAR_4);
  *VAR_17 = VAR_23;
 }

 return VAR_19;
}
