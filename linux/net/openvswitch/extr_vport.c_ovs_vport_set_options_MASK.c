
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vport {TYPE_1__* ops; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int (* set_options ) (struct vport*,struct nlattr*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct vport*,struct nlattr*) ;

int FUNC_1(struct vport *VAR_1, struct nlattr *VAR_2)
{
 if (!VAR_1->ops->set_options)
  return -VAR_0;
 return VAR_1->ops->set_options(VAR_1, VAR_2);
}
