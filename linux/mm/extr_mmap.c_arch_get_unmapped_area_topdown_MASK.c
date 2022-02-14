
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_unmapped_area_info {unsigned long length; unsigned long high_limit; int low_limit; scalar_t__ flags; scalar_t__ align_mask; } ;
struct vm_area_struct {int dummy; } ;
struct mm_struct {int mmap_base; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_2 (unsigned long,int ) ;
 unsigned long FUNC_3 (unsigned long) ;
 TYPE_1__* VAR_5 ;
 struct vm_area_struct* FUNC_4 (struct mm_struct*,unsigned long,struct vm_area_struct**) ;
 int FUNC_5 (int ,unsigned long const) ;
 unsigned long const VAR_6 ;
 scalar_t__ FUNC_6 (unsigned long) ;
 unsigned long FUNC_7 (struct vm_area_struct*) ;
 unsigned long FUNC_8 (struct vm_area_struct*) ;
 unsigned long FUNC_9 (struct vm_unmapped_area_info*) ;

unsigned long
FUNC_10(struct file *VAR_7, unsigned long VAR_8,
     unsigned long VAR_9, unsigned long VAR_10,
     unsigned long VAR_11)
{
 struct vm_area_struct *VAR_12, *VAR_13;
 struct mm_struct *VAR_14 = VAR_5->mm;
 struct vm_unmapped_area_info VAR_15;
 const unsigned long VAR_16 = FUNC_3(VAR_8);


 if (VAR_9 > VAR_16 - VAR_6)
  return -VAR_0;

 if (VAR_11 & VAR_1)
  return VAR_8;


 if (VAR_8) {
  VAR_8 = FUNC_0(VAR_8);
  VAR_12 = FUNC_4(VAR_14, VAR_8, &VAR_13);
  if (VAR_16 - VAR_9 >= VAR_8 && VAR_8 >= VAR_6 &&
    (!VAR_12 || VAR_8 + VAR_9 <= FUNC_8(VAR_12)) &&
    (!VAR_13 || VAR_8 >= FUNC_7(VAR_13)))
   return VAR_8;
 }

 VAR_15.flags = VAR_4;
 VAR_15.length = VAR_9;
 VAR_15.low_limit = FUNC_5(VAR_2, VAR_6);
 VAR_15.high_limit = FUNC_2(VAR_8, VAR_14->mmap_base);
 VAR_15.align_mask = 0;
 VAR_8 = FUNC_9(&VAR_15);







 if (FUNC_6(VAR_8)) {
  FUNC_1(VAR_8 != -VAR_0);
  VAR_15.flags = 0;
  VAR_15.low_limit = VAR_3;
  VAR_15.high_limit = VAR_16;
  VAR_8 = FUNC_9(&VAR_15);
 }

 return VAR_8;
}
