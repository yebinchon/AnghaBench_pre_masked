
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_flags; unsigned long vm_start; unsigned long vm_end; int vm_page_prot; int vm_userfaultfd_ctx; int vm_file; int anon_vma; scalar_t__ vm_pgoff; struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
typedef int pgprot_t ;
typedef scalar_t__ pgoff_t ;
struct TYPE_2__ {int mm; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 int FUNC_0 (unsigned long) ;
 unsigned long VAR_12 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,unsigned long,int ,int,int ) ;
 TYPE_1__* VAR_13 ;
 scalar_t__ FUNC_3 (struct mm_struct*,unsigned long,long) ;
 int FUNC_4 (struct vm_area_struct*) ;
 int FUNC_5 (struct vm_area_struct*,unsigned long,unsigned long,int *) ;
 int VAR_14 ;
 scalar_t__ FUNC_6 (struct mm_struct*,unsigned long) ;
 int FUNC_7 (struct mm_struct*,struct vm_area_struct*,unsigned long,int) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (struct mm_struct*,unsigned long,long) ;
 int FUNC_10 (unsigned long) ;
 struct vm_area_struct* FUNC_11 (struct mm_struct*,struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_12 (struct vm_area_struct*) ;
 int FUNC_13 (struct vm_area_struct*) ;
 int FUNC_14 (struct vm_area_struct*,int ) ;
 int FUNC_15 (int ,unsigned long,unsigned long,int *,int *) ;

int
FUNC_16(struct vm_area_struct *VAR_15, struct vm_area_struct **VAR_16,
 unsigned long VAR_17, unsigned long VAR_18, unsigned long VAR_19)
{
 struct mm_struct *VAR_20 = VAR_15->vm_mm;
 unsigned long VAR_21 = VAR_15->vm_flags;
 long VAR_22 = (VAR_18 - VAR_17) >> VAR_1;
 unsigned long VAR_23 = 0;
 pgoff_t VAR_24;
 int VAR_25;
 int VAR_26 = 0;

 if (VAR_19 == VAR_21) {
  *VAR_16 = VAR_15;
  return 0;
 }






 if (FUNC_1() &&
     (VAR_15->vm_flags & (VAR_8|VAR_6)) &&
     (VAR_19 & (VAR_9|VAR_12|VAR_3)) == 0) {
  pgprot_t VAR_27 = FUNC_8(VAR_19);

  VAR_25 = FUNC_15(VAR_13->mm, VAR_17, VAR_18,
    &VAR_14, &VAR_27);
  if (VAR_25)
   return VAR_25;
 }







 if (VAR_19 & VAR_12) {

  if (!FUNC_3(VAR_20, VAR_19, VAR_22) &&
    FUNC_3(VAR_20, VAR_21, VAR_22))
   return -VAR_0;
  if (!(VAR_21 & (VAR_2|VAR_12|VAR_4|
      VAR_10|VAR_7))) {
   VAR_23 = VAR_22;
   if (FUNC_6(VAR_20, VAR_23))
    return -VAR_0;
   VAR_19 |= VAR_2;
  }
 }




 VAR_24 = VAR_15->vm_pgoff + ((VAR_17 - VAR_15->vm_start) >> VAR_1);
 *VAR_16 = FUNC_11(VAR_20, *VAR_16, VAR_17, VAR_18, VAR_19,
      VAR_15->anon_vma, VAR_15->vm_file, VAR_24, FUNC_12(VAR_15),
      VAR_15->vm_userfaultfd_ctx);
 if (*VAR_16) {
  VAR_15 = *VAR_16;
  FUNC_0((VAR_15->vm_flags ^ VAR_19) & ~VAR_11);
  goto success;
 }

 *VAR_16 = VAR_15;

 if (VAR_17 != VAR_15->vm_start) {
  VAR_25 = FUNC_7(VAR_20, VAR_15, VAR_17, 1);
  if (VAR_25)
   goto fail;
 }

 if (VAR_18 != VAR_15->vm_end) {
  VAR_25 = FUNC_7(VAR_20, VAR_15, VAR_18, 0);
  if (VAR_25)
   goto fail;
 }

success:




 VAR_15->vm_flags = VAR_19;
 VAR_26 = FUNC_14(VAR_15, VAR_15->vm_page_prot);
 FUNC_13(VAR_15);

 FUNC_2(VAR_15, VAR_17, VAR_18, VAR_15->vm_page_prot,
     VAR_26, 0);





 if ((VAR_21 & (VAR_12 | VAR_10 | VAR_5)) == VAR_5 &&
   (VAR_19 & VAR_12)) {
  FUNC_5(VAR_15, VAR_17, VAR_18, ((void*)0));
 }

 FUNC_9(VAR_20, VAR_21, -VAR_22);
 FUNC_9(VAR_20, VAR_19, VAR_22);
 FUNC_4(VAR_15);
 return 0;

fail:
 FUNC_10(VAR_23);
 return VAR_25;
}
