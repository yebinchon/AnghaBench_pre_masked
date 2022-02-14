
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_8__ {size_t rts_cts_rate_idx; } ;
struct ieee80211_tx_info {size_t band; int flags; TYPE_3__ control; } ;
struct ieee80211_supported_band {int band; struct ieee80211_rate* bitrates; } ;
struct TYPE_9__ {int use_short_preamble; } ;
struct TYPE_10__ {TYPE_4__ bss_conf; } ;
struct ieee80211_sub_if_data {int flags; TYPE_5__ vif; } ;
struct ieee80211_rate {int flags; int bitrate; } ;
struct TYPE_7__ {TYPE_1__* wiphy; } ;
struct ieee80211_local {TYPE_2__ hw; } ;
struct ieee80211_hw {int dummy; } ;
typedef int __le16 ;
struct TYPE_6__ {struct ieee80211_supported_band** bands; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 struct ieee80211_local* FUNC_2 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_3 (int ,int,int,int,int,int) ;
 int FUNC_4 (struct ieee80211_vif*) ;
 struct ieee80211_sub_if_data* FUNC_5 (struct ieee80211_vif*) ;

__le16 FUNC_6(struct ieee80211_hw *VAR_3,
        struct ieee80211_vif *VAR_4,
        size_t VAR_5,
        const struct ieee80211_tx_info *VAR_6)
{
 struct ieee80211_local *VAR_7 = FUNC_2(VAR_3);
 struct ieee80211_rate *VAR_8;
 struct ieee80211_sub_if_data *VAR_9;
 bool VAR_10;
 int VAR_11, VAR_12 = 0, VAR_13;
 u16 VAR_14;
 struct ieee80211_supported_band *VAR_15;

 VAR_15 = VAR_7->hw.wiphy->bands[VAR_6->band];

 VAR_10 = 0;

 VAR_8 = &VAR_15->bitrates[VAR_6->control.rts_cts_rate_idx];
 VAR_11 = 0;
 if (VAR_4) {
  VAR_9 = FUNC_5(VAR_4);
  VAR_10 = VAR_9->vif.bss_conf.use_short_preamble;
  if (VAR_9->flags & VAR_1)
   VAR_11 = VAR_8->flags & VAR_0;
  VAR_12 = FUNC_4(VAR_4);
 }

 VAR_13 = FUNC_0(VAR_8->bitrate, 1 << VAR_12);


 VAR_14 = FUNC_3(VAR_15->band, VAR_5, VAR_13,
           VAR_11, VAR_10, VAR_12);
 if (!(VAR_6->flags & VAR_2)) {

  VAR_14 += FUNC_3(VAR_15->band, 10, VAR_13,
      VAR_11, VAR_10, VAR_12);
 }

 return FUNC_1(VAR_14);
}
