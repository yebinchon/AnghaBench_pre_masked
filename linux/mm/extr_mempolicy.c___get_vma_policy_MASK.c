
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct mempolicy* vm_policy; TYPE_1__* vm_ops; } ;
struct mempolicy {int dummy; } ;
struct TYPE_2__ {struct mempolicy* (* get_policy ) (struct vm_area_struct*,unsigned long) ;} ;


 int FUNC_0 (struct mempolicy*) ;
 scalar_t__ FUNC_1 (struct mempolicy*) ;
 struct mempolicy* FUNC_2 (struct vm_area_struct*,unsigned long) ;

struct mempolicy *FUNC_3(struct vm_area_struct *VAR_0,
      unsigned long VAR_1)
{
 struct mempolicy *VAR_2 = ((void*)0);

 if (VAR_0) {
  if (VAR_0->vm_ops && VAR_0->vm_ops->get_policy) {
   VAR_2 = VAR_0->vm_ops->get_policy(VAR_0, VAR_1);
  } else if (VAR_0->vm_policy) {
   VAR_2 = VAR_0->vm_policy;







   if (FUNC_1(VAR_2))
    FUNC_0(VAR_2);
  }
 }

 return VAR_2;
}
