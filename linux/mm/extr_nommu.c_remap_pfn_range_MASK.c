
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
typedef int pgprot_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_0(struct vm_area_struct *VAR_6, unsigned long VAR_7,
  unsigned long VAR_8, unsigned long VAR_9, pgprot_t VAR_10)
{
 if (VAR_7 != (VAR_8 << VAR_1))
  return -VAR_0;

 VAR_6->vm_flags |= VAR_4 | VAR_5 | VAR_3 | VAR_2;
 return 0;
}
