
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wireless_dev {int ps; int ps_timeout; } ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {int * attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct TYPE_2__ {int set_power_mgmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,struct net_device*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_4, struct genl_info *VAR_5)
{
 struct cfg80211_registered_device *VAR_6 = VAR_5->user_ptr[0];
 struct wireless_dev *VAR_7;
 struct net_device *VAR_8 = VAR_5->user_ptr[1];
 u8 VAR_9;
 bool VAR_10;
 int VAR_11;

 if (!VAR_5->attrs[VAR_2])
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_5->attrs[VAR_2]);

 VAR_7 = VAR_8->ieee80211_ptr;

 if (!VAR_6->ops->set_power_mgmt)
  return -VAR_1;

 VAR_10 = (VAR_9 == VAR_3) ? 1 : 0;

 if (VAR_10 == VAR_7->ps)
  return 0;

 VAR_11 = FUNC_1(VAR_6, VAR_8, VAR_10, VAR_7->ps_timeout);
 if (!VAR_11)
  VAR_7->ps = VAR_10;
 return VAR_11;
}
