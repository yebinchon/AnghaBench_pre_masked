
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

bool FUNC_0(struct vm_area_struct *VAR_3)
{
 int VAR_4 = VAR_3->vm_flags & (VAR_0 | VAR_1);

 if (!VAR_4)
  return 0;

 if ((VAR_3->vm_flags & VAR_2) ==
      VAR_2)
  return 1;

 return 0;
}
