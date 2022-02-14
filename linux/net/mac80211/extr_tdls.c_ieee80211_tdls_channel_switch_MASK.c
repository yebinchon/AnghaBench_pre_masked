
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wiphy {int dummy; } ;
struct sta_info {int sta; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int sta_mtx; } ;
struct cfg80211_chan_def {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int *,int ,struct cfg80211_chan_def*,struct sk_buff*,int ) ;
 struct sk_buff* FUNC_3 (struct sta_info*,int ,struct cfg80211_chan_def*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sta_info*,int ) ;
 struct sta_info* FUNC_7 (struct ieee80211_sub_if_data*,int const*) ;
 int FUNC_8 (struct ieee80211_sub_if_data*,char*,int const*) ;
 int FUNC_9 (struct sta_info*,int ) ;

int
FUNC_10(struct wiphy *VAR_4, struct net_device *VAR_5,
         const u8 *VAR_6, u8 VAR_7,
         struct cfg80211_chan_def *VAR_8)
{
 struct ieee80211_sub_if_data *VAR_9 = FUNC_0(VAR_5);
 struct ieee80211_local *VAR_10 = VAR_9->local;
 struct sta_info *VAR_11;
 struct sk_buff *VAR_12 = ((void*)0);
 u32 VAR_13;
 int VAR_14;

 FUNC_4(&VAR_10->sta_mtx);
 VAR_11 = FUNC_7(VAR_9, VAR_6);
 if (!VAR_11) {
  FUNC_8(VAR_9,
    "Invalid TDLS peer %pM for channel switch request\n",
    VAR_6);
  VAR_14 = -VAR_0;
  goto out;
 }

 if (!FUNC_9(VAR_11, VAR_2)) {
  FUNC_8(VAR_9, "TDLS channel switch unsupported by %pM\n",
    VAR_6);
  VAR_14 = -VAR_1;
  goto out;
 }

 VAR_12 = FUNC_3(VAR_11, VAR_7, VAR_8,
         &VAR_13);
 if (!VAR_12) {
  VAR_14 = -VAR_0;
  goto out;
 }

 VAR_14 = FUNC_2(VAR_10, VAR_9, &VAR_11->sta, VAR_7,
          VAR_8, VAR_12, VAR_13);
 if (!VAR_14)
  FUNC_6(VAR_11, VAR_3);

out:
 FUNC_5(&VAR_10->sta_mtx);
 FUNC_1(VAR_12);
 return VAR_14;
}
