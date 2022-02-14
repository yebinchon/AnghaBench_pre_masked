
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_file; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*) ;

__attribute__((used)) static inline bool FUNC_4(struct vm_area_struct *VAR_1)
{
 if (FUNC_3(VAR_1))
  return 1;
 if (!VAR_1->vm_file)
  return 0;






 return FUNC_1(FUNC_0(VAR_1->vm_file)) ||
  FUNC_2(FUNC_0(VAR_1->vm_file), VAR_0) == 0;
}
