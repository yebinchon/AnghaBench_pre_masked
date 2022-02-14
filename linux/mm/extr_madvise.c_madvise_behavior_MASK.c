
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_flags; unsigned long vm_start; unsigned long vm_end; int vm_userfaultfd_ctx; int vm_file; int anon_vma; scalar_t__ vm_pgoff; struct mm_struct* vm_mm; } ;
struct mm_struct {scalar_t__ map_count; } ;
typedef scalar_t__ pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 int FUNC_0 (struct mm_struct*,struct vm_area_struct*,unsigned long,int) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long*,int) ;
 int FUNC_2 (struct vm_area_struct*) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,unsigned long,int,unsigned long*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_4 (int) ;
 struct vm_area_struct* FUNC_5 (struct mm_struct*,struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_6 (struct vm_area_struct*) ;

__attribute__((used)) static long FUNC_7(struct vm_area_struct *VAR_13,
       struct vm_area_struct **VAR_14,
       unsigned long VAR_15, unsigned long VAR_16, int VAR_17)
{
 struct mm_struct *VAR_18 = VAR_13->vm_mm;
 int VAR_19 = 0;
 pgoff_t VAR_20;
 unsigned long VAR_21 = VAR_13->vm_flags;

 switch (VAR_17) {
 case 132:
  VAR_21 = VAR_21 & ~VAR_7 & ~VAR_8;
  break;
 case 130:
  VAR_21 = (VAR_21 & ~VAR_7) | VAR_8;
  break;
 case 131:
  VAR_21 = (VAR_21 & ~VAR_8) | VAR_7;
  break;
 case 137:
  VAR_21 |= VAR_4;
  break;
 case 139:
  if (VAR_13->vm_flags & VAR_6) {
   VAR_19 = -VAR_1;
   goto out;
  }
  VAR_21 &= ~VAR_4;
  break;
 case 128:

  if (VAR_13->vm_file || VAR_13->vm_flags & VAR_9) {
   VAR_19 = -VAR_1;
   goto out;
  }
  VAR_21 |= VAR_11;
  break;
 case 135:
  VAR_21 &= ~VAR_11;
  break;
 case 138:
  VAR_21 |= VAR_5;
  break;
 case 140:
  if (!FUNC_2(VAR_13) && VAR_21 & VAR_10) {
   VAR_19 = -VAR_1;
   goto out;
  }
  VAR_21 &= ~VAR_5;
  break;
 case 134:
 case 129:
  VAR_19 = FUNC_3(VAR_13, VAR_15, VAR_16, VAR_17, &VAR_21);
  if (VAR_19)
   goto out_convert_errno;
  break;
 case 136:
 case 133:
  VAR_19 = FUNC_1(VAR_13, &VAR_21, VAR_17);
  if (VAR_19)
   goto out_convert_errno;
  break;
 }

 if (VAR_21 == VAR_13->vm_flags) {
  *VAR_14 = VAR_13;
  goto out;
 }

 VAR_20 = VAR_13->vm_pgoff + ((VAR_15 - VAR_13->vm_start) >> VAR_3);
 *VAR_14 = FUNC_5(VAR_18, *VAR_14, VAR_15, VAR_16, VAR_21, VAR_13->anon_vma,
     VAR_13->vm_file, VAR_20, FUNC_6(VAR_13),
     VAR_13->vm_userfaultfd_ctx);
 if (*VAR_14) {
  VAR_13 = *VAR_14;
  goto success;
 }

 *VAR_14 = VAR_13;

 if (VAR_15 != VAR_13->vm_start) {
  if (FUNC_4(VAR_18->map_count >= VAR_12)) {
   VAR_19 = -VAR_2;
   goto out;
  }
  VAR_19 = FUNC_0(VAR_18, VAR_13, VAR_15, 1);
  if (VAR_19)
   goto out_convert_errno;
 }

 if (VAR_16 != VAR_13->vm_end) {
  if (FUNC_4(VAR_18->map_count >= VAR_12)) {
   VAR_19 = -VAR_2;
   goto out;
  }
  VAR_19 = FUNC_0(VAR_18, VAR_13, VAR_16, 0);
  if (VAR_19)
   goto out_convert_errno;
 }

success:



 VAR_13->vm_flags = VAR_21;

out_convert_errno:




 if (VAR_19 == -VAR_2)
  VAR_19 = -VAR_0;
out:
 return VAR_19;
}
