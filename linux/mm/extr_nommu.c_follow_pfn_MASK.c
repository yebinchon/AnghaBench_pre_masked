
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(struct vm_area_struct *VAR_4, unsigned long VAR_5,
 unsigned long *VAR_6)
{
 if (!(VAR_4->vm_flags & (VAR_2 | VAR_3)))
  return -VAR_0;

 *VAR_6 = VAR_5 >> VAR_1;
 return 0;
}
