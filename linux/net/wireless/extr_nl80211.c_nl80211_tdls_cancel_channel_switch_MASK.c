
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wireless_dev {int iftype; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int features; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; TYPE_2__ wiphy; TYPE_1__* ops; } ;
struct genl_info {int * attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {struct wireless_dev* ieee80211_ptr; TYPE_2__ wiphy; TYPE_1__* ops; } ;
struct TYPE_3__ {int tdls_cancel_channel_switch; int tdls_channel_switch; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,struct net_device*,int const*) ;
 int FUNC_2 (struct wireless_dev*) ;
 int FUNC_3 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4,
           struct genl_info *VAR_5)
{
 struct cfg80211_registered_device *VAR_6 = VAR_5->user_ptr[0];
 struct net_device *VAR_7 = VAR_5->user_ptr[1];
 struct wireless_dev *VAR_8 = VAR_7->ieee80211_ptr;
 const u8 *VAR_9;

 if (!VAR_6->ops->tdls_channel_switch ||
     !VAR_6->ops->tdls_cancel_channel_switch ||
     !(VAR_6->wiphy.features & VAR_3))
  return -VAR_1;

 switch (VAR_7->ieee80211_ptr->iftype) {
 case 128:
 case 129:
  break;
 default:
  return -VAR_1;
 }

 if (!VAR_5->attrs[VAR_2])
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_5->attrs[VAR_2]);

 FUNC_2(VAR_8);
 FUNC_1(VAR_6, VAR_7, VAR_9);
 FUNC_3(VAR_8);

 return 0;
}
