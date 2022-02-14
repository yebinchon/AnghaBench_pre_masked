
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int iftype; struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cfg80211_chan_def {TYPE_1__* chan; } ;
struct net_device {int propagate_radar_detect_wk; struct cfg80211_chan_def radar_chandef; struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {struct net_device** user_ptr; } ;
struct cfg80211_registered_device {int propagate_radar_detect_wk; struct cfg80211_chan_def radar_chandef; struct wireless_dev* ieee80211_ptr; } ;
typedef enum nl80211_dfs_regions { ____Placeholder_nl80211_dfs_regions } nl80211_dfs_regions ;
struct TYPE_2__ {scalar_t__ dfs_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct genl_info*,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct wiphy*,struct cfg80211_chan_def*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct wiphy*,struct cfg80211_chan_def*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (struct net_device*,struct genl_info*,struct cfg80211_chan_def*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct wiphy*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_4,
       struct genl_info *VAR_5)
{
 struct cfg80211_registered_device *VAR_6 = VAR_5->user_ptr[0];
 struct net_device *VAR_7 = VAR_5->user_ptr[1];
 struct wireless_dev *VAR_8 = VAR_7->ieee80211_ptr;
 struct wiphy *VAR_9 = VAR_8->wiphy;
 struct cfg80211_chan_def VAR_10;
 enum nl80211_dfs_regions VAR_11;
 int VAR_12;

 VAR_11 = FUNC_6(VAR_9);
 if (VAR_11 == VAR_2) {
  FUNC_0(VAR_5,
     "DFS Region is not set. Unexpected Radar indication");
  return -VAR_0;
 }

 VAR_12 = FUNC_4(VAR_6, VAR_5, &VAR_10);
 if (VAR_12) {
  FUNC_0(VAR_5, "Unable to extract chandef info");
  return VAR_12;
 }

 VAR_12 = FUNC_1(VAR_9, &VAR_10, VAR_8->iftype);
 if (VAR_12 < 0) {
  FUNC_0(VAR_5, "chandef is invalid");
  return VAR_12;
 }

 if (VAR_12 == 0) {
  FUNC_0(VAR_5,
     "Unexpected Radar indication for chandef/iftype");
  return -VAR_0;
 }




 if (VAR_10.chan->dfs_state == VAR_1)
  return 0;

 FUNC_3(VAR_9, &VAR_10, VAR_1);

 FUNC_2(VAR_6);

 VAR_6->radar_chandef = VAR_10;


 FUNC_5(VAR_3, &VAR_6->propagate_radar_detect_wk);

 return 0;
}
