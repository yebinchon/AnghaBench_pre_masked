
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; unsigned long vm_start; unsigned long vm_end; struct mm_struct* vm_mm; } ;
struct mm_struct {unsigned long locked_vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mm_struct*,unsigned long,unsigned long) ;
 int FUNC_2 (struct mm_struct*,int,unsigned long) ;
 unsigned long FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct mm_struct*,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct vm_area_struct *VAR_8,
        unsigned long VAR_9, unsigned long VAR_10)
{
 struct mm_struct *VAR_11 = VAR_8->vm_mm;
 unsigned long VAR_12;


 if (!FUNC_2(VAR_11, VAR_8->vm_flags, VAR_10))
  return -VAR_2;


 if (VAR_9 > FUNC_3(VAR_5))
  return -VAR_2;


 if (VAR_8->vm_flags & VAR_7) {
  unsigned long VAR_13;
  unsigned long VAR_14;
  VAR_13 = VAR_11->locked_vm + VAR_10;
  VAR_14 = FUNC_3(VAR_4);
  VAR_14 >>= VAR_3;
  if (VAR_13 > VAR_14 && !FUNC_0(VAR_0))
   return -VAR_2;
 }


 VAR_12 = (VAR_8->vm_flags & VAR_6) ? VAR_8->vm_start :
   VAR_8->vm_end - VAR_9;
 if (FUNC_1(VAR_8->vm_mm, VAR_12, VAR_9))
  return -VAR_1;





 if (FUNC_4(VAR_11, VAR_10))
  return -VAR_2;

 return 0;
}
