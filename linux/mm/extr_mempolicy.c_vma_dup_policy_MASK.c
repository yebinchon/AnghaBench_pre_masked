
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mempolicy* vm_policy; } ;
struct mempolicy {int dummy; } ;


 scalar_t__ FUNC_0 (struct mempolicy*) ;
 int FUNC_1 (struct mempolicy*) ;
 struct mempolicy* FUNC_2 (int ) ;
 int FUNC_3 (struct vm_area_struct*) ;

int FUNC_4(struct vm_area_struct *VAR_0, struct vm_area_struct *VAR_1)
{
 struct mempolicy *VAR_2 = FUNC_2(FUNC_3(VAR_0));

 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);
 VAR_1->vm_policy = VAR_2;
 return 0;
}
