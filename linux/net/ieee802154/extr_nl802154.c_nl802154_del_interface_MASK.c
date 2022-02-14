
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpan_dev {int netdev; TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct genl_info {struct wpan_dev** user_ptr; } ;
struct cfg802154_registered_device {int netdev; TYPE_1__* ops; } ;
struct TYPE_2__ {int del_virtual_intf; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpan_dev*,struct wpan_dev*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_1, struct genl_info *VAR_2)
{
 struct cfg802154_registered_device *VAR_3 = VAR_2->user_ptr[0];
 struct wpan_dev *VAR_4 = VAR_2->user_ptr[1];

 if (!VAR_3->ops->del_virtual_intf)
  return -VAR_0;







 if (!VAR_4->netdev)
  VAR_2->user_ptr[1] = ((void*)0);

 return FUNC_0(VAR_3, VAR_4);
}
