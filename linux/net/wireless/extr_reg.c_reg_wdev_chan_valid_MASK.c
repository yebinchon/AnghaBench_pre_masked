
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cfg80211_chan_def {int dummy; } ;
struct wireless_dev {int iftype; TYPE_3__* current_bss; struct cfg80211_chan_def chandef; int ssid_len; int beacon_interval; int netdev; } ;
struct wiphy {int dummy; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_5__ {int channel; } ;
struct TYPE_6__ {TYPE_2__ pub; } ;
struct TYPE_4__ {int get_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cfg80211_chan_def*,int ,int ) ;
 int FUNC_2 (struct wiphy*,struct cfg80211_chan_def*,int ) ;
 int FUNC_3 (struct wiphy*,struct cfg80211_chan_def*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct cfg80211_registered_device*,struct wireless_dev*,struct cfg80211_chan_def*) ;
 int FUNC_6 (struct wireless_dev*) ;
 int FUNC_7 (struct wireless_dev*) ;
 struct cfg80211_registered_device* FUNC_8 (struct wiphy*) ;

__attribute__((used)) static bool FUNC_9(struct wiphy *VAR_2, struct wireless_dev *VAR_3)
{
 struct cfg80211_chan_def VAR_4 = {};
 struct cfg80211_registered_device *VAR_5 = FUNC_8(VAR_2);
 enum nl80211_iftype VAR_6;

 FUNC_6(VAR_3);
 VAR_6 = VAR_3->iftype;


 if (!VAR_3->netdev || !FUNC_4(VAR_3->netdev))
  goto wdev_inactive_unlock;

 switch (VAR_6) {
 case 134:
 case 129:
  if (!VAR_3->beacon_interval)
   goto wdev_inactive_unlock;
  VAR_4 = VAR_3->chandef;
  break;
 case 135:
  if (!VAR_3->ssid_len)
   goto wdev_inactive_unlock;
  VAR_4 = VAR_3->chandef;
  break;
 case 128:
 case 131:
  if (!VAR_3->current_bss ||
      !VAR_3->current_bss->pub.channel)
   goto wdev_inactive_unlock;

  if (!VAR_5->ops->get_channel ||
      FUNC_5(VAR_5, VAR_3, &VAR_4))
   FUNC_1(&VAR_4,
      VAR_3->current_bss->pub.channel,
      VAR_1);
  break;
 case 132:
 case 133:
 case 130:

  break;
 default:

  FUNC_0(1);
  break;
 }

 FUNC_7(VAR_3);

 switch (VAR_6) {
 case 134:
 case 129:
 case 135:
  return FUNC_3(VAR_2, &VAR_4, VAR_6);
 case 128:
 case 131:
  return FUNC_2(VAR_2, &VAR_4,
            VAR_0);
 default:
  break;
 }

 return 1;

wdev_inactive_unlock:
 FUNC_7(VAR_3);
 return 1;
}
