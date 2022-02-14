
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cfg80211_chan_def {int chan; } ;
struct wireless_dev {int iftype; struct cfg80211_chan_def preset_chandef; int beacon_interval; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {int dummy; } ;
struct TYPE_4__ {int features; } ;
struct cfg80211_registered_device {TYPE_2__ wiphy; TYPE_1__* ops; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_3__ {int set_ap_chanwidth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (TYPE_2__*,struct cfg80211_chan_def*,int) ;
 int FUNC_1 (struct cfg80211_registered_device*,struct wireless_dev*,struct cfg80211_chan_def*) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct cfg80211_chan_def*) ;
 int FUNC_3 (struct wireless_dev*) ;
 int FUNC_4 (struct cfg80211_registered_device*,struct genl_info*,struct cfg80211_chan_def*) ;
 int FUNC_5 (struct cfg80211_registered_device*,struct net_device*,struct cfg80211_chan_def*) ;

__attribute__((used)) static int FUNC_6(struct cfg80211_registered_device *VAR_4,
     struct net_device *VAR_5,
     struct genl_info *VAR_6)
{
 struct cfg80211_chan_def VAR_7;
 int VAR_8;
 enum nl80211_iftype VAR_9 = 129;
 struct wireless_dev *VAR_10 = ((void*)0);

 if (VAR_5)
  VAR_10 = VAR_5->ieee80211_ptr;
 if (!FUNC_3(VAR_10))
  return -VAR_2;
 if (VAR_10)
  VAR_9 = VAR_10->iftype;

 VAR_8 = FUNC_4(VAR_4, VAR_6, &VAR_7);
 if (VAR_8)
  return VAR_8;

 switch (VAR_9) {
 case 131:
 case 128:
  if (!FUNC_0(&VAR_4->wiphy, &VAR_7,
         VAR_9)) {
   VAR_8 = -VAR_1;
   break;
  }
  if (VAR_10->beacon_interval) {
   if (!VAR_5 || !VAR_4->ops->set_ap_chanwidth ||
       !(VAR_4->wiphy.features &
         VAR_3)) {
    VAR_8 = -VAR_0;
    break;
   }


   if (VAR_7.chan != VAR_10->preset_chandef.chan) {
    VAR_8 = -VAR_0;
    break;
   }
   VAR_8 = FUNC_5(VAR_4, VAR_5, &VAR_7);
   if (VAR_8)
    break;
  }
  VAR_10->preset_chandef = VAR_7;
  VAR_8 = 0;
  break;
 case 130:
  VAR_8 = FUNC_1(VAR_4, VAR_10, &VAR_7);
  break;
 case 129:
  VAR_8 = FUNC_2(VAR_4, &VAR_7);
  break;
 default:
  VAR_8 = -VAR_1;
 }

 return VAR_8;
}
