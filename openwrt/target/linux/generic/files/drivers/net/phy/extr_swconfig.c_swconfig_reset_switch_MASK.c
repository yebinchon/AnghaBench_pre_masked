
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switch_val {int dummy; } ;
struct switch_dev {TYPE_1__* ops; } ;
struct switch_attr {int dummy; } ;
struct TYPE_2__ {int (* reset_switch ) (struct switch_dev*) ;} ;


 int FUNC_0 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_1(struct switch_dev *VAR_0, const struct switch_attr *VAR_1,
   struct switch_val *VAR_2)
{

 if (!VAR_0->ops->reset_switch)
  return 0;

 return VAR_0->ops->reset_switch(VAR_0);
}
