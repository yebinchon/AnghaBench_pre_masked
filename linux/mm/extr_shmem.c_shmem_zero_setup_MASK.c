
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_end; int vm_start; int vm_flags; int * vm_ops; struct file* vm_file; } ;
struct file {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct vm_area_struct*,int ) ;
 struct file* FUNC_5 (char*,int,int ) ;
 int VAR_2 ;

int FUNC_6(struct vm_area_struct *VAR_3)
{
 struct file *VAR_4;
 loff_t VAR_5 = VAR_3->vm_end - VAR_3->vm_start;







 VAR_4 = FUNC_5("dev/zero", VAR_5, VAR_3->vm_flags);
 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);

 if (VAR_3->vm_file)
  FUNC_3(VAR_3->vm_file);
 VAR_3->vm_file = VAR_4;
 VAR_3->vm_ops = &VAR_2;

 if (FUNC_0(VAR_0) &&
   ((VAR_3->vm_start + ~VAR_1) & VAR_1) <
   (VAR_3->vm_end & VAR_1)) {
  FUNC_4(VAR_3, VAR_3->vm_flags);
 }

 return 0;
}
