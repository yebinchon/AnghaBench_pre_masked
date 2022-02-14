
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg80211_chan_def {int dummy; } ;
struct wireless_dev {int cac_started; unsigned int cac_time_ms; int cac_start_time; struct cfg80211_chan_def chandef; int iftype; struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int wiphy; TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {struct net_device** user_ptr; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
typedef enum nl80211_dfs_regions { ____Placeholder_nl80211_dfs_regions } nl80211_dfs_regions ;
struct TYPE_2__ {int start_radar_detection; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (int *,struct cfg80211_chan_def*) ;
 int FUNC_2 (struct wiphy*,struct cfg80211_chan_def*,int ) ;
 int FUNC_3 (struct wiphy*,struct cfg80211_chan_def*) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,struct genl_info*,struct cfg80211_chan_def*) ;
 int FUNC_6 (struct net_device*,struct net_device*,struct cfg80211_chan_def*,unsigned int) ;
 int FUNC_7 (struct wiphy*) ;
 scalar_t__ FUNC_8 (struct wiphy*,int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_7,
      struct genl_info *VAR_8)
{
 struct cfg80211_registered_device *VAR_9 = VAR_8->user_ptr[0];
 struct net_device *VAR_10 = VAR_8->user_ptr[1];
 struct wireless_dev *VAR_11 = VAR_10->ieee80211_ptr;
 struct wiphy *VAR_12 = VAR_11->wiphy;
 struct cfg80211_chan_def VAR_13;
 enum nl80211_dfs_regions VAR_14;
 unsigned int VAR_15;
 int VAR_16;

 VAR_14 = FUNC_7(VAR_12);
 if (VAR_14 == VAR_4)
  return -VAR_1;

 VAR_16 = FUNC_5(VAR_9, VAR_8, &VAR_13);
 if (VAR_16)
  return VAR_16;

 if (FUNC_4(VAR_10))
  return -VAR_0;

 if (VAR_11->cac_started)
  return -VAR_0;

 VAR_16 = FUNC_2(VAR_12, &VAR_13, VAR_11->iftype);
 if (VAR_16 < 0)
  return VAR_16;

 if (VAR_16 == 0)
  return -VAR_1;

 if (!FUNC_3(VAR_12, &VAR_13))
  return -VAR_1;


 if (FUNC_8(VAR_12, VAR_5))
  return -VAR_2;

 if (!VAR_9->ops->start_radar_detection)
  return -VAR_2;

 VAR_15 = FUNC_1(&VAR_9->wiphy, &VAR_13);
 if (FUNC_0(!VAR_15))
  VAR_15 = VAR_3;

 VAR_16 = FUNC_6(VAR_9, VAR_10, &VAR_13, VAR_15);
 if (!VAR_16) {
  VAR_11->chandef = VAR_13;
  VAR_11->cac_started = 1;
  VAR_11->cac_start_time = VAR_6;
  VAR_11->cac_time_ms = VAR_15;
 }
 return VAR_16;
}
