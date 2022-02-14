
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wireless_dev {scalar_t__ iftype; } ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {int * attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct TYPE_2__ {int set_wds_peer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,struct net_device*,int const*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 struct cfg80211_registered_device *VAR_7 = VAR_6->user_ptr[0];
 struct net_device *VAR_8 = VAR_6->user_ptr[1];
 struct wireless_dev *VAR_9 = VAR_8->ieee80211_ptr;
 const u8 *VAR_10;

 if (!VAR_6->attrs[VAR_3])
  return -VAR_1;

 if (FUNC_0(VAR_8))
  return -VAR_0;

 if (!VAR_7->ops->set_wds_peer)
  return -VAR_2;

 if (VAR_9->iftype != VAR_4)
  return -VAR_2;

 VAR_10 = FUNC_1(VAR_6->attrs[VAR_3]);
 return FUNC_2(VAR_7, VAR_8, VAR_10);
}
