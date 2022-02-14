
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*,int ) ;

__attribute__((used)) static bool FUNC_1(struct vm_area_struct *VAR_3, long VAR_4)
{
 if (VAR_3->vm_flags & VAR_2) {
  if (VAR_3->vm_flags & VAR_1 && VAR_4 == 0)
   return 1;
  else
   return 0;
 }


 if (VAR_3->vm_flags & VAR_1) {







  if (VAR_4)
   return 0;
  else
   return 1;
 }





 if (FUNC_0(VAR_3, VAR_0)) {
  if (VAR_4)
   return 0;
  else
   return 1;
 }

 return 0;
}
