
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* ops; } ;
struct genl_info {struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct cfg80211_bitrate_mask {int dummy; } ;
struct TYPE_2__ {int set_bitrate_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct genl_info*,struct cfg80211_bitrate_mask*) ;
 int FUNC_1 (struct net_device*,struct net_device*,int *,struct cfg80211_bitrate_mask*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1,
           struct genl_info *VAR_2)
{
 struct cfg80211_bitrate_mask VAR_3;
 struct cfg80211_registered_device *VAR_4 = VAR_2->user_ptr[0];
 struct net_device *VAR_5 = VAR_2->user_ptr[1];
 int VAR_6;

 if (!VAR_4->ops->set_bitrate_mask)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_2, &VAR_3);
 if (VAR_6)
  return VAR_6;

 return FUNC_1(VAR_4, VAR_5, ((void*)0), &VAR_3);
}
