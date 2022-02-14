
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wiphy {struct ieee80211_supported_band** bands; } ;
struct net_device {int ieee80211_ptr; } ;
struct ieee80211_supported_band {int dummy; } ;
struct TYPE_7__ {TYPE_1__* chan; } ;
struct TYPE_8__ {int basic_rates; TYPE_2__ chandef; } ;
struct TYPE_9__ {TYPE_3__ bss_conf; int chanctx_conf; } ;
struct ieee80211_sub_if_data {int* rc_rateidx_mask; int** rc_rateidx_mcs_mask; int** rc_rateidx_vht_mcs_mask; int* rc_has_mcs_mask; int* rc_has_vht_mcs_mask; TYPE_4__ vif; } ;
struct ieee80211_local {int hw; } ;
struct cfg80211_bitrate_mask {TYPE_5__* control; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_10__ {int legacy; int vht_mcs; int ht_mcs; } ;
struct TYPE_6__ {int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct cfg80211_bitrate_mask const*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 int FUNC_4 (int*,int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 struct ieee80211_local* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct wiphy *VAR_6,
          struct net_device *VAR_7,
          const u8 *VAR_8,
          const struct cfg80211_bitrate_mask *VAR_9)
{
 struct ieee80211_sub_if_data *VAR_10 = FUNC_0(VAR_7);
 struct ieee80211_local *VAR_11 = FUNC_6(VAR_7->ieee80211_ptr);
 int VAR_12, VAR_13;

 if (!FUNC_3(VAR_10))
  return -VAR_1;







 if (FUNC_5(VAR_10->vif.chanctx_conf) &&
     VAR_10->vif.bss_conf.chandef.chan) {
  u32 VAR_14 = VAR_10->vif.bss_conf.basic_rates;
  enum nl80211_band VAR_15 = VAR_10->vif.bss_conf.chandef.chan->band;

  if (!(VAR_9->control[VAR_15].legacy & VAR_14))
   return -VAR_0;
 }

 if (FUNC_2(&VAR_11->hw, VAR_2)) {
  VAR_13 = FUNC_1(VAR_11, VAR_10, VAR_9);
  if (VAR_13)
   return VAR_13;
 }

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  struct ieee80211_supported_band *VAR_16 = VAR_6->bands[VAR_12];
  int VAR_17;

  VAR_10->rc_rateidx_mask[VAR_12] = VAR_9->control[VAR_12].legacy;
  FUNC_4(VAR_10->rc_rateidx_mcs_mask[VAR_12], VAR_9->control[VAR_12].ht_mcs,
         sizeof(VAR_9->control[VAR_12].ht_mcs));
  FUNC_4(VAR_10->rc_rateidx_vht_mcs_mask[VAR_12],
         VAR_9->control[VAR_12].vht_mcs,
         sizeof(VAR_9->control[VAR_12].vht_mcs));

  VAR_10->rc_has_mcs_mask[VAR_12] = 0;
  VAR_10->rc_has_vht_mcs_mask[VAR_12] = 0;
  if (!VAR_16)
   continue;

  for (VAR_17 = 0; VAR_17 < VAR_3; VAR_17++) {
   if (~VAR_10->rc_rateidx_mcs_mask[VAR_12][VAR_17]) {
    VAR_10->rc_has_mcs_mask[VAR_12] = 1;
    break;
   }
  }

  for (VAR_17 = 0; VAR_17 < VAR_4; VAR_17++) {
   if (~VAR_10->rc_rateidx_vht_mcs_mask[VAR_12][VAR_17]) {
    VAR_10->rc_has_vht_mcs_mask[VAR_12] = 1;
    break;
   }
  }
 }

 return 0;
}
