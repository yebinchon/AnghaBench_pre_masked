
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct ieee80211_vht_operation {int dummy; } ;
struct ieee80211_vht_cap {int dummy; } ;
struct ieee80211_tdls_lnkie {int dummy; } ;
struct ieee80211_tdls_data {int dummy; } ;
struct ieee80211_sub_if_data {int dev; struct ieee80211_local* local; } ;
struct ieee80211_mgmt {int dummy; } ;
struct TYPE_2__ {int wiphy; scalar_t__ extra_tx_headroom; } ;
struct ieee80211_local {TYPE_1__ hw; } ;
struct ieee80211_ht_operation {int dummy; } ;
struct ieee80211_ht_cap {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int const*,int ,int ,int ,struct sk_buff*) ;
 int FUNC_2 (int ,int ,int const*,int ,int ,int ,struct sk_buff*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct sk_buff*,int const*,int ,int ,int,int const*,size_t,int ,struct cfg80211_chan_def*) ;
 scalar_t__ FUNC_4 (int,int) ;
 struct sk_buff* FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static struct sk_buff *
FUNC_7(struct ieee80211_sub_if_data *VAR_1,
          const u8 *VAR_2, u8 VAR_3,
          u8 VAR_4, u16 VAR_5,
          bool VAR_6, const u8 *VAR_7,
          size_t VAR_8, u8 VAR_9,
          struct cfg80211_chan_def *VAR_10)
{
 struct ieee80211_local *VAR_11 = VAR_1->local;
 struct sk_buff *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_5(VAR_1->dev,
          VAR_11->hw.extra_tx_headroom +
          FUNC_4(sizeof(struct ieee80211_mgmt),
       sizeof(struct ieee80211_tdls_data)) +
          50 +
          10 +
          26 +
          2 + FUNC_4(sizeof(struct ieee80211_ht_cap),
           sizeof(struct ieee80211_ht_operation)) +
          2 + FUNC_4(sizeof(struct ieee80211_vht_cap),
           sizeof(struct ieee80211_vht_operation)) +
          50 +
          3 +
          4 +
          4 +
          VAR_8 +
          sizeof(struct ieee80211_tdls_lnkie));
 if (!VAR_12)
  return ((void*)0);

 FUNC_6(VAR_12, VAR_11->hw.extra_tx_headroom);

 switch (VAR_3) {
 case 130:
 case 129:
 case 131:
 case 128:
 case 132:
 case 134:
 case 133:
  VAR_13 = FUNC_2(VAR_11->hw.wiphy,
           VAR_1->dev, VAR_2,
           VAR_3, VAR_4,
           VAR_5, VAR_12);
  break;
 case 135:
  VAR_13 = FUNC_1(VAR_11->hw.wiphy, VAR_1->dev,
       VAR_2, VAR_3,
       VAR_4, VAR_5,
       VAR_12);
  break;
 default:
  VAR_13 = -VAR_0;
  break;
 }

 if (VAR_13 < 0)
  goto fail;

 FUNC_3(VAR_1, VAR_12, VAR_2, VAR_3, VAR_5,
          VAR_6, VAR_7, VAR_8, VAR_9,
          VAR_10);
 return VAR_12;

fail:
 FUNC_0(VAR_12);
 return ((void*)0);
}
