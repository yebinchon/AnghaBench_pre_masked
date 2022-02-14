
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpan_dev {scalar_t__ iftype; struct net_device* lowpan_dev; } ;
struct sk_buff {int dummy; } ;
struct net_device {struct wpan_dev* ieee802154_ptr; } ;
struct genl_info {int * attrs; struct net_device** user_ptr; } ;
struct cfg802154_registered_device {struct wpan_dev* ieee802154_ptr; } ;
typedef scalar_t__ __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*,struct wpan_dev*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 struct cfg802154_registered_device *VAR_7 = VAR_6->user_ptr[0];
 struct net_device *VAR_8 = VAR_6->user_ptr[1];
 struct wpan_dev *VAR_9 = VAR_8->ieee802154_ptr;
 __le16 VAR_10;


 if (FUNC_1(VAR_8))
  return -VAR_0;

 if (VAR_9->lowpan_dev) {
  if (FUNC_1(VAR_9->lowpan_dev))
   return -VAR_0;
 }


 if (VAR_9->iftype == VAR_4 ||
     !VAR_6->attrs[VAR_3])
  return -VAR_1;

 VAR_10 = FUNC_2(VAR_6->attrs[VAR_3]);
 if (VAR_10 == FUNC_0(VAR_2))
  return -VAR_1;

 return FUNC_3(VAR_7, VAR_9, VAR_10);
}
