
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpan_dev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {struct wpan_dev* ieee802154_ptr; } ;
struct genl_info {int * attrs; struct net_device** user_ptr; } ;
struct cfg802154_registered_device {struct wpan_dev* ieee802154_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,struct wpan_dev*,int) ;

__attribute__((used)) static int
FUNC_3(struct sk_buff *VAR_3, struct genl_info *VAR_4)
{
 struct cfg802154_registered_device *VAR_5 = VAR_4->user_ptr[0];
 struct net_device *VAR_6 = VAR_4->user_ptr[1];
 struct wpan_dev *VAR_7 = VAR_6->ieee802154_ptr;
 int VAR_8;

 if (FUNC_0(VAR_6))
  return -VAR_0;

 if (!VAR_4->attrs[VAR_2])
  return -VAR_1;

 VAR_8 = FUNC_1(VAR_4->attrs[VAR_2]);

 if (VAR_8 != 0 && VAR_8 != 1)
  return -VAR_1;

 return FUNC_2(VAR_5, VAR_7, VAR_8);
}
