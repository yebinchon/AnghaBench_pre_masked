
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_2__* ops; TYPE_1__* ieee80211_ptr; } ;
struct genl_info {int * attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_2__* ops; TYPE_1__* ieee80211_ptr; } ;
typedef int mcast_rate ;
struct TYPE_4__ {int set_mcast_rate; } ;
struct TYPE_3__ {scalar_t__ iftype; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct net_device*,int*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*,struct net_device*,int*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_7, struct genl_info *VAR_8)
{
 struct cfg80211_registered_device *VAR_9 = VAR_8->user_ptr[0];
 struct net_device *VAR_10 = VAR_8->user_ptr[1];
 int VAR_11[VAR_6];
 u32 VAR_12;
 int VAR_13;

 if (VAR_10->ieee80211_ptr->iftype != VAR_3 &&
     VAR_10->ieee80211_ptr->iftype != VAR_4 &&
     VAR_10->ieee80211_ptr->iftype != VAR_5)
  return -VAR_1;

 if (!VAR_9->ops->set_mcast_rate)
  return -VAR_1;

 FUNC_0(VAR_11, 0, sizeof(VAR_11));

 if (!VAR_8->attrs[VAR_2])
  return -VAR_0;

 VAR_12 = FUNC_2(VAR_8->attrs[VAR_2]);
 if (!FUNC_1(VAR_9, VAR_11, VAR_12))
  return -VAR_0;

 VAR_13 = FUNC_3(VAR_9, VAR_10, VAR_11);

 return VAR_13;
}
