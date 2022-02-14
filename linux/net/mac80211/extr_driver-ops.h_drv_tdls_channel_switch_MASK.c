
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct cfg80211_chan_def {int dummy; } ;
struct TYPE_2__ {int (* tdls_channel_switch ) (int *,int *,struct ieee80211_sta*,int ,struct cfg80211_chan_def*,struct sk_buff*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,struct ieee80211_sta*,int ,struct cfg80211_chan_def*,struct sk_buff*,int ) ;
 int FUNC_3 (struct ieee80211_local*,int) ;
 int FUNC_4 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct ieee80211_sta*,int ,struct cfg80211_chan_def*) ;

__attribute__((used)) static inline int
FUNC_5(struct ieee80211_local *VAR_2,
   struct ieee80211_sub_if_data *VAR_3,
   struct ieee80211_sta *VAR_4, u8 VAR_5,
   struct cfg80211_chan_def *VAR_6,
   struct sk_buff *VAR_7, u32 VAR_8)
{
 int VAR_9;

 FUNC_1();
 if (!FUNC_0(VAR_3))
  return -VAR_0;

 if (!VAR_2->ops->tdls_channel_switch)
  return -VAR_1;

 FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 VAR_9 = VAR_2->ops->tdls_channel_switch(&VAR_2->hw, &VAR_3->vif, VAR_4,
           VAR_5, VAR_6, VAR_7,
           VAR_8);
 FUNC_3(VAR_2, VAR_9);
 return VAR_9;
}
