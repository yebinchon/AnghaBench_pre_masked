
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int * vm_ops; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_7, struct vm_area_struct *VAR_8)
{
 if (VAR_8->vm_flags & VAR_4) {

  VAR_8->vm_flags &= ~VAR_3;

  if (VAR_8->vm_flags & VAR_5)
   return -VAR_0;
 }

 VAR_8->vm_flags |= VAR_2 | VAR_1;
 VAR_8->vm_ops = &VAR_6;

 return 0;
}
