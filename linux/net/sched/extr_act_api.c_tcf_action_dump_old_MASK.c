
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_action {TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int (* dump ) (struct sk_buff*,struct tc_action*,int,int) ;} ;


 int FUNC_0 (struct sk_buff*,struct tc_action*,int,int) ;

int
FUNC_1(struct sk_buff *VAR_0, struct tc_action *VAR_1, int VAR_2, int VAR_3)
{
 return VAR_1->ops->dump(VAR_0, VAR_1, VAR_2, VAR_3);
}
