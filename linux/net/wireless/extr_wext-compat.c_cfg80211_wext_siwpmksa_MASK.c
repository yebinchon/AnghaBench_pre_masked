
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wireless_dev {scalar_t__ iftype; int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int dummy; } ;
struct TYPE_3__ {int sa_data; } ;
struct iw_pmksa {int cmd; int pmkid; TYPE_1__ bssid; } ;
struct cfg80211_registered_device {TYPE_2__* ops; } ;
struct cfg80211_pmksa {int pmkid; int bssid; } ;
struct TYPE_4__ {int flush_pmksa; int del_pmksa; int set_pmksa; } ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int FUNC_0 (struct cfg80211_pmksa*,int ,int) ;
 int FUNC_1 (struct cfg80211_registered_device*,struct net_device*,struct cfg80211_pmksa*) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct net_device*) ;
 int FUNC_3 (struct cfg80211_registered_device*,struct net_device*,struct cfg80211_pmksa*) ;
 struct cfg80211_registered_device* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3,
      struct iw_request_info *VAR_4,
      struct iw_point *VAR_5, char *VAR_6)
{
 struct wireless_dev *VAR_7 = VAR_3->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_8 = FUNC_4(VAR_7->wiphy);
 struct cfg80211_pmksa VAR_9;
 struct iw_pmksa *VAR_10 = (struct iw_pmksa *)VAR_6;

 FUNC_0(&VAR_9, 0, sizeof(struct cfg80211_pmksa));

 if (VAR_7->iftype != VAR_2)
  return -VAR_0;

 VAR_9.bssid = VAR_10->bssid.sa_data;
 VAR_9.pmkid = VAR_10->pmkid;

 switch (VAR_10->cmd) {
 case 130:
  if (!VAR_8->ops->set_pmksa)
   return -VAR_1;

  return FUNC_3(VAR_8, VAR_3, &VAR_9);

 case 128:
  if (!VAR_8->ops->del_pmksa)
   return -VAR_1;

  return FUNC_1(VAR_8, VAR_3, &VAR_9);

 case 129:
  if (!VAR_8->ops->flush_pmksa)
   return -VAR_1;

  return FUNC_2(VAR_8, VAR_3);

 default:
  return -VAR_1;
 }
}
