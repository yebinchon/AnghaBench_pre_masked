
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct vm_area_struct*) ;
 int FUNC_1 (struct vm_area_struct*) ;
 int FUNC_2 (struct vm_area_struct*,unsigned long) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*) ;
 scalar_t__ FUNC_4 (struct vm_area_struct*) ;

bool FUNC_5(struct vm_area_struct *VAR_2)
{

 unsigned long VAR_3 = (VAR_2->vm_end & VAR_0) - VAR_1;

 if (!FUNC_2(VAR_2, VAR_3))
  return 0;
 if (FUNC_3(VAR_2))
  return FUNC_0(VAR_2);
 if (FUNC_4(VAR_2))
  return FUNC_1(VAR_2);

 return 0;
}
