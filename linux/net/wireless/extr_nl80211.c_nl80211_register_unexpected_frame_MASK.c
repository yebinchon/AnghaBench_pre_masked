
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {scalar_t__ iftype; scalar_t__ ap_unexpected_nlportid; } ;
struct sk_buff {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {scalar_t__ snd_portid; struct net_device** user_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(struct sk_buff *VAR_4,
          struct genl_info *VAR_5)
{
 struct net_device *VAR_6 = VAR_5->user_ptr[1];
 struct wireless_dev *VAR_7 = VAR_6->ieee80211_ptr;

 if (VAR_7->iftype != VAR_2 &&
     VAR_7->iftype != VAR_3)
  return -VAR_1;

 if (VAR_7->ap_unexpected_nlportid)
  return -VAR_0;

 VAR_7->ap_unexpected_nlportid = VAR_5->snd_portid;
 return 0;
}
