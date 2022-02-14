
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
typedef int pfn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct vm_area_struct *VAR_1, pfn_t VAR_2)
{

 if (VAR_1->vm_flags & VAR_0)
  return 1;
 if (FUNC_1(VAR_2))
  return 1;
 if (FUNC_2(VAR_2))
  return 1;
 if (FUNC_0(FUNC_3(VAR_2)))
  return 1;
 return 0;
}
