
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {scalar_t__ iftype; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {struct nlattr** attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct TYPE_2__ {int set_multicast_to_unicast; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct nlattr const*) ;
 int FUNC_1 (struct net_device*,struct net_device*,int) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_4,
         struct genl_info *VAR_5)
{
 struct cfg80211_registered_device *VAR_6 = VAR_5->user_ptr[0];
 struct net_device *VAR_7 = VAR_5->user_ptr[1];
 struct wireless_dev *VAR_8 = VAR_7->ieee80211_ptr;
 const struct nlattr *VAR_9;
 bool VAR_10;

 if (!VAR_6->ops->set_multicast_to_unicast)
  return -VAR_0;

 if (VAR_8->iftype != VAR_2 &&
     VAR_8->iftype != VAR_3)
  return -VAR_0;

 VAR_9 = VAR_5->attrs[VAR_1];
 VAR_10 = FUNC_0(VAR_9);

 return FUNC_1(VAR_6, VAR_7, VAR_10);
}
