
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct vm_area_struct *VAR_2, bool VAR_3)
{
 if (FUNC_0(!(VAR_2->vm_flags & VAR_0)))
  return 0;

 if (VAR_3 && (FUNC_0(!(VAR_2->vm_flags & VAR_1))))
  return 0;

 return 1;
}
