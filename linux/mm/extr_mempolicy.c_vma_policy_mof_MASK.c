
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct mempolicy* vm_policy; int vm_start; TYPE_1__* vm_ops; } ;
struct mempolicy {int flags; } ;
struct TYPE_2__ {struct mempolicy* (* get_policy ) (struct vm_area_struct*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct mempolicy* FUNC_0 (int ) ;
 int FUNC_1 (struct mempolicy*) ;
 struct mempolicy* FUNC_2 (struct vm_area_struct*,int ) ;

bool FUNC_3(struct vm_area_struct *VAR_2)
{
 struct mempolicy *VAR_3;

 if (VAR_2->vm_ops && VAR_2->vm_ops->get_policy) {
  bool VAR_4 = 0;

  VAR_3 = VAR_2->vm_ops->get_policy(VAR_2, VAR_2->vm_start);
  if (VAR_3 && (VAR_3->flags & VAR_0))
   VAR_4 = 1;
  FUNC_1(VAR_3);

  return VAR_4;
 }

 VAR_3 = VAR_2->vm_policy;
 if (!VAR_3)
  VAR_3 = FUNC_0(VAR_1);

 return VAR_3->flags & VAR_0;
}
