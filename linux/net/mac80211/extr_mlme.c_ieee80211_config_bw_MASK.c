
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_15__ {int bandwidth; } ;
struct sta_info {int cur_max_bandwidth; TYPE_7__ sta; } ;
struct ieee80211_vht_operation {int dummy; } ;
struct ieee80211_supported_band {int dummy; } ;
struct TYPE_16__ {struct ieee80211_channel* chan; } ;
struct TYPE_12__ {scalar_t__ ht_operation_mode; TYPE_8__ chandef; } ;
struct TYPE_13__ {TYPE_4__ bss_conf; } ;
struct ieee80211_if_managed {int flags; int bssid; } ;
struct TYPE_9__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_5__ vif; TYPE_1__ u; struct ieee80211_local* local; } ;
struct TYPE_11__ {TYPE_2__* wiphy; } ;
struct ieee80211_local {TYPE_3__ hw; } ;
struct ieee80211_ht_operation {int operation_mode; } ;
struct ieee80211_ht_cap {int dummy; } ;
struct ieee80211_he_operation {int dummy; } ;
struct ieee80211_channel {size_t band; } ;
struct cfg80211_chan_def {int width; int center_freq2; int center_freq1; TYPE_6__* chan; } ;
typedef enum ieee80211_sta_rx_bandwidth { ____Placeholder_ieee80211_sta_rx_bandwidth } ieee80211_sta_rx_bandwidth ;
struct TYPE_14__ {int center_freq; } ;
struct TYPE_10__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;






 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct cfg80211_chan_def*,TYPE_8__*) ;
 int FUNC_2 (struct cfg80211_chan_def*) ;
 int FUNC_3 (struct cfg80211_chan_def*) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,struct ieee80211_supported_band*,struct ieee80211_channel*,struct ieee80211_ht_operation const*,struct ieee80211_vht_operation const*,struct ieee80211_he_operation const*,struct cfg80211_chan_def*,int) ;
 int FUNC_5 (struct ieee80211_supported_band*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,struct cfg80211_chan_def*,int*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct ieee80211_local*,struct ieee80211_supported_band*,struct sta_info*,int ) ;
 int FUNC_9 (struct ieee80211_sub_if_data*,char*,int ,...) ;

__attribute__((used)) static int FUNC_10(struct ieee80211_sub_if_data *VAR_13,
          struct sta_info *VAR_14,
          const struct ieee80211_ht_cap *VAR_15,
          const struct ieee80211_ht_operation *VAR_16,
          const struct ieee80211_vht_operation *VAR_17,
          const struct ieee80211_he_operation *VAR_18,
          const u8 *VAR_19, u32 *VAR_20)
{
 struct ieee80211_local *VAR_21 = VAR_13->local;
 struct ieee80211_if_managed *VAR_22 = &VAR_13->u.mgd;
 struct ieee80211_channel *VAR_23 = VAR_13->vif.bss_conf.chandef.chan;
 struct ieee80211_supported_band *VAR_24 =
  VAR_21->hw.wiphy->bands[VAR_23->band];
 struct cfg80211_chan_def VAR_25;
 u16 VAR_26;
 u32 VAR_27;
 enum ieee80211_sta_rx_bandwidth VAR_28;
 int VAR_29;


 if (VAR_22->flags & VAR_7 || !VAR_16)
  return 0;


 if (VAR_22->flags & VAR_8)
  VAR_17 = ((void*)0);


 if (VAR_22->flags & VAR_6 ||
     !FUNC_5(VAR_24))
  VAR_18 = ((void*)0);

 if (FUNC_0(!VAR_14))
  return -VAR_1;





 VAR_26 = FUNC_7(VAR_16->operation_mode);
 if (VAR_13->vif.bss_conf.ht_operation_mode != VAR_26) {
  *VAR_20 |= VAR_0;
  VAR_13->vif.bss_conf.ht_operation_mode = VAR_26;
 }


 VAR_27 = FUNC_4(VAR_13, VAR_24, VAR_23,
          VAR_16, VAR_17, VAR_18,
          &VAR_25, 1);
 if (VAR_22->flags & VAR_5 &&
     VAR_25.width == 128)
  VAR_27 |= FUNC_3(&VAR_25);
 if (VAR_22->flags & VAR_3 &&
     VAR_25.width == 133)
  VAR_27 |= FUNC_3(&VAR_25);
 if (VAR_22->flags & VAR_4 &&
     VAR_25.width > 132)
  VAR_27 |= FUNC_3(&VAR_25);

 if (FUNC_1(&VAR_25, &VAR_13->vif.bss_conf.chandef))
  return 0;

 FUNC_9(VAR_13,
     "AP %pM changed bandwidth, new config is %d MHz, width %d (%d/%d MHz)\n",
     VAR_22->bssid, VAR_25.chan->center_freq, VAR_25.width,
     VAR_25.center_freq1, VAR_25.center_freq2);

 if (VAR_27 != (VAR_22->flags & (VAR_7 |
          VAR_8 |
          VAR_4 |
          VAR_5 |
          VAR_3)) ||
     !FUNC_2(&VAR_25)) {
  FUNC_9(VAR_13,
      "AP %pM changed bandwidth in a way we can't support - disconnect\n",
      VAR_22->bssid);
  return -VAR_1;
 }

 switch (VAR_25.width) {
 case 131:
 case 132:
  VAR_28 = VAR_10;
  break;
 case 130:
  VAR_28 = VAR_11;
  break;
 case 129:
  VAR_28 = VAR_12;
  break;
 case 128:
 case 133:
  VAR_28 = VAR_9;
  break;
 default:
  return -VAR_1;
 }

 if (VAR_28 > VAR_14->cur_max_bandwidth)
  VAR_28 = VAR_14->cur_max_bandwidth;

 if (VAR_28 < VAR_14->sta.bandwidth) {
  VAR_14->sta.bandwidth = VAR_28;
  FUNC_8(VAR_21, VAR_24, VAR_14,
      VAR_2);
 }

 VAR_29 = FUNC_6(VAR_13, &VAR_25, VAR_20);
 if (VAR_29) {
  FUNC_9(VAR_13,
      "AP %pM changed bandwidth to incompatible one - disconnect\n",
      VAR_22->bssid);
  return VAR_29;
 }

 if (VAR_28 > VAR_14->sta.bandwidth) {
  VAR_14->sta.bandwidth = VAR_28;
  FUNC_8(VAR_21, VAR_24, VAR_14,
      VAR_2);
 }

 return 0;
}
