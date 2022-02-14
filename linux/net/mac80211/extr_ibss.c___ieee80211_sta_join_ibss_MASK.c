
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
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_9__ {int ibss_joined; int ibss_creator; int enable_beacon; int beacon_int; int basic_rates; int use_short_slot; scalar_t__ ssid_len; int ssid; } ;
struct TYPE_10__ {TYPE_4__ bss_conf; } ;
struct TYPE_7__ {int mtx; } ;
struct ieee80211_if_ibss {int bssid; int timer; int state; int presp; scalar_t__ ssid_len; int const* ssid; scalar_t__ fixed_channel; int userspace_handles_dfs; } ;
struct TYPE_6__ {struct ieee80211_if_ibss ibss; } ;
struct ieee80211_sub_if_data {int radar_required; int dev; TYPE_5__ vif; int flags; struct ieee80211_local* local; TYPE_2__ wdev; TYPE_1__ u; } ;
struct ieee80211_mgmt {int dummy; } ;
struct TYPE_8__ {int wiphy; } ;
struct ieee80211_local {TYPE_3__ hw; int mtx; } ;
struct ieee80211_channel {scalar_t__ band; int center_freq; } ;
struct cfg80211_inform_bss {int scan_width; struct ieee80211_channel* chan; } ;
struct cfg80211_chan_def {scalar_t__ width; int center_freq1; struct ieee80211_channel* chan; } ;
struct cfg80211_bss {int dummy; } ;
struct beacon_data {int head_len; scalar_t__ head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,struct cfg80211_chan_def*,int ) ;
 int FUNC_2 (struct cfg80211_chan_def*) ;
 int FUNC_3 (int ,int ,struct ieee80211_channel*,int ) ;
 struct cfg80211_bss* FUNC_4 (int ,struct cfg80211_inform_bss*,struct ieee80211_mgmt*,int ,int ) ;
 int FUNC_5 (int ,struct cfg80211_bss*) ;
 int FUNC_6 (int ,struct cfg80211_chan_def*,int ) ;
 int FUNC_7 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_8 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_9 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_10 (int ,int const*) ;
 int FUNC_11 (struct ieee80211_sub_if_data*,int) ;
 struct beacon_data* FUNC_12 (struct ieee80211_sub_if_data*,int const,int const,int const,int ,struct cfg80211_chan_def*,int*,int *) ;
 int FUNC_13 (struct ieee80211_sub_if_data*) ;
 int FUNC_14 (struct ieee80211_sub_if_data*,int,int) ;
 int FUNC_15 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_16 (struct ieee80211_sub_if_data*,struct cfg80211_chan_def*,int ) ;
 scalar_t__ VAR_23 ;
 int FUNC_17 (struct beacon_data*,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int const*,scalar_t__) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ,struct beacon_data*) ;
 struct beacon_data* FUNC_26 (int ,int ) ;
 int VAR_24 ;
 int FUNC_27 (scalar_t__) ;
 int FUNC_28 (struct ieee80211_sub_if_data*) ;
 int FUNC_29 (struct ieee80211_sub_if_data*,char*,...) ;
 int FUNC_30 (struct ieee80211_sub_if_data*) ;

__attribute__((used)) static void FUNC_31(struct ieee80211_sub_if_data *VAR_25,
          const u8 *VAR_26, const int VAR_27,
          struct cfg80211_chan_def *VAR_28,
          const u32 VAR_29,
          const u16 VAR_30, u64 VAR_31,
          bool VAR_32)
{
 struct ieee80211_if_ibss *VAR_33 = &VAR_25->u.ibss;
 struct ieee80211_local *VAR_34 = VAR_25->local;
 struct ieee80211_mgmt *VAR_35;
 struct cfg80211_bss *VAR_36;
 u32 VAR_37;
 struct cfg80211_chan_def VAR_38;
 struct ieee80211_channel *VAR_39;
 struct beacon_data *VAR_40;
 struct cfg80211_inform_bss VAR_41 = {};
 bool VAR_42;
 bool VAR_43;
 int VAR_44;

 FUNC_28(VAR_25);


 FUNC_9(VAR_34, VAR_25);

 if (!FUNC_10(VAR_33->bssid, VAR_26))
  FUNC_30(VAR_25);


 if (VAR_25->vif.bss_conf.ibss_joined) {
  VAR_25->vif.bss_conf.ibss_joined = 0;
  VAR_25->vif.bss_conf.ibss_creator = 0;
  VAR_25->vif.bss_conf.enable_beacon = 0;
  FUNC_23(VAR_25->dev);
  FUNC_11(VAR_25,
       VAR_7 |
       VAR_2);
  FUNC_8(VAR_34, VAR_25);
 }

 VAR_40 = FUNC_26(VAR_33->presp,
       FUNC_18(&VAR_25->wdev.mtx));
 FUNC_0(VAR_33->presp, ((void*)0));
 if (VAR_40)
  FUNC_17(VAR_40, VAR_24);


 VAR_38 = *VAR_28;
 VAR_39 = VAR_38.chan;
 if (!FUNC_6(VAR_34->hw.wiphy, &VAR_38,
         VAR_22)) {
  if (VAR_38.width == VAR_21 ||
      VAR_38.width == VAR_18 ||
      VAR_38.width == VAR_20 ||
      VAR_38.width == VAR_19) {
   FUNC_29(VAR_25,
       "Failed to join IBSS, beacons forbidden\n");
   return;
  }
  VAR_38.width = VAR_19;
  VAR_38.center_freq1 = VAR_39->center_freq;

  if (!FUNC_6(VAR_34->hw.wiphy, &VAR_38,
          VAR_22)) {
   FUNC_29(VAR_25,
       "Failed to join IBSS, beacons forbidden\n");
   return;
  }
 }

 VAR_44 = FUNC_1(VAR_25->local->hw.wiphy,
         &VAR_38, VAR_22);
 if (VAR_44 < 0) {
  FUNC_29(VAR_25,
      "Failed to join IBSS, invalid chandef\n");
  return;
 }
 if (VAR_44 > 0 && !VAR_33->userspace_handles_dfs) {
  FUNC_29(VAR_25,
      "Failed to join IBSS, DFS channel without control program\n");
  return;
 }

 VAR_43 = VAR_44;

 FUNC_21(&VAR_34->mtx);
 if (FUNC_16(VAR_25, &VAR_38,
          VAR_33->fixed_channel ?
     VAR_12 :
     VAR_11)) {
  FUNC_29(VAR_25, "Failed to join IBSS, no channel context\n");
  FUNC_22(&VAR_34->mtx);
  return;
 }
 VAR_25->radar_required = VAR_43;
 FUNC_22(&VAR_34->mtx);

 FUNC_19(VAR_33->bssid, VAR_26, VAR_9);

 VAR_40 = FUNC_12(VAR_25, VAR_27, VAR_29,
        VAR_30, VAR_31, &VAR_38,
        &VAR_42, ((void*)0));
 if (!VAR_40)
  return;

 FUNC_25(VAR_33->presp, VAR_40);
 VAR_35 = (void *)VAR_40->head;

 VAR_25->vif.bss_conf.enable_beacon = 1;
 VAR_25->vif.bss_conf.beacon_int = VAR_27;
 VAR_25->vif.bss_conf.basic_rates = VAR_29;
 VAR_25->vif.bss_conf.ssid_len = VAR_33->ssid_len;
 FUNC_19(VAR_25->vif.bss_conf.ssid, VAR_33->ssid, VAR_33->ssid_len);
 VAR_37 = VAR_3;
 VAR_37 |= FUNC_13(VAR_25);
 VAR_37 |= VAR_4;
 VAR_37 |= VAR_1;
 VAR_37 |= VAR_2;
 VAR_37 |= VAR_0;
 VAR_37 |= VAR_6;
 VAR_37 |= VAR_7;
 VAR_37 |= VAR_8;
 VAR_25->vif.bss_conf.use_short_slot = VAR_39->band == VAR_17;
 VAR_37 |= VAR_5;


 if (VAR_39->band == VAR_16 && VAR_42)
  VAR_25->flags |= VAR_15;
 else
  VAR_25->flags &= ~VAR_15;

 FUNC_14(VAR_25, 1, 0);

 VAR_25->vif.bss_conf.ibss_joined = 1;
 VAR_25->vif.bss_conf.ibss_creator = VAR_32;

 VAR_44 = FUNC_7(VAR_34, VAR_25);
 if (VAR_44) {
  VAR_25->vif.bss_conf.ibss_joined = 0;
  VAR_25->vif.bss_conf.ibss_creator = 0;
  VAR_25->vif.bss_conf.enable_beacon = 0;
  VAR_25->vif.bss_conf.ssid_len = 0;
  FUNC_0(VAR_33->presp, ((void*)0));
  FUNC_17(VAR_40, VAR_24);
  FUNC_21(&VAR_34->mtx);
  FUNC_15(VAR_25);
  FUNC_22(&VAR_34->mtx);
  FUNC_29(VAR_25, "Failed to join IBSS, driver failure: %d\n",
      VAR_44);
  return;
 }

 FUNC_11(VAR_25, VAR_37);

 VAR_33->state = VAR_14;
 FUNC_20(&VAR_33->timer,
    FUNC_27(VAR_23 + VAR_13));

 VAR_41.chan = VAR_39;
 VAR_41.scan_width = FUNC_2(&VAR_38);
 VAR_36 = FUNC_4(VAR_34->hw.wiphy, &VAR_41, VAR_35,
          VAR_40->head_len, VAR_10);

 FUNC_5(VAR_34->hw.wiphy, VAR_36);
 FUNC_24(VAR_25->dev);
 FUNC_3(VAR_25->dev, VAR_33->bssid, VAR_39, VAR_10);
}
