
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_10__ {void** supp_rates; } ;
struct sta_info {TYPE_3__ sta; } ;
struct ieee80211_supported_band {int dummy; } ;
struct TYPE_12__ {int sync_dtim_count; int sync_device_ts; int sync_tsf; int beacon_int; void* basic_rates; } ;
struct TYPE_13__ {TYPE_5__ bss_conf; } ;
struct ieee80211_if_managed {int bssid; int assoc_data; int auth_data; } ;
struct TYPE_8__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_6__ vif; struct ieee80211_local* local; int flags; TYPE_1__ u; } ;
struct TYPE_14__ {TYPE_2__* wiphy; } ;
struct ieee80211_local {scalar_t__ scanning; TYPE_7__ hw; scalar_t__ in_reconfig; } ;
struct ieee80211_bss {int device_ts_presp; int device_ts_beacon; int supp_rates_len; int supp_rates; } ;
struct cfg80211_bss_ies {int tsf; } ;
struct cfg80211_bss {int bssid; int proberesp_ies; int beacon_ies; int beacon_interval; TYPE_4__* channel; scalar_t__ priv; } ;
struct TYPE_11__ {size_t band; } ;
struct TYPE_9__ {struct ieee80211_supported_band** bands; } ;


 void* FUNC_0 (int) ;
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
 size_t VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_5 (struct cfg80211_bss_ies const*,int *,int *) ;
 int FUNC_6 (struct ieee80211_supported_band*,int ,int ,void**,void**,int*,int*,int*,int) ;
 int FUNC_7 (TYPE_7__*,int ) ;
 int FUNC_8 (struct ieee80211_sub_if_data*,struct cfg80211_bss*) ;
 int FUNC_9 (struct ieee80211_local*) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (int ,int ,int ) ;
 struct cfg80211_bss_ies* FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct ieee80211_sub_if_data*,char*,...) ;
 struct sta_info* FUNC_16 (struct ieee80211_sub_if_data*,int ,int ) ;
 int FUNC_17 (struct ieee80211_local*,struct sta_info*) ;
 int FUNC_18 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_19 (struct sta_info*) ;
 int FUNC_20 (struct sta_info*,int ) ;

__attribute__((used)) static int FUNC_21(struct ieee80211_sub_if_data *VAR_13,
         struct cfg80211_bss *VAR_14, bool VAR_15,
         bool VAR_16)
{
 struct ieee80211_local *VAR_17 = VAR_13->local;
 struct ieee80211_if_managed *VAR_18 = &VAR_13->u.mgd;
 struct ieee80211_bss *VAR_19 = (void *)VAR_14->priv;
 struct sta_info *VAR_20 = ((void*)0);
 struct ieee80211_supported_band *VAR_21;
 bool VAR_22 = 0;
 int VAR_23;

 VAR_21 = VAR_17->hw.wiphy->bands[VAR_14->channel->band];

 if (FUNC_1(!VAR_18->auth_data && !VAR_18->assoc_data))
  return -VAR_4;


 if (VAR_17->in_reconfig)
  return -VAR_3;

 if (VAR_15) {
  FUNC_13();
  VAR_22 = FUNC_18(VAR_13, VAR_14->bssid);
  FUNC_14();
 }

 if (!VAR_22) {
  VAR_20 = FUNC_16(VAR_13, VAR_14->bssid, VAR_7);
  if (!VAR_20)
   return -VAR_5;
 }
 if (VAR_20) {
  u32 VAR_24 = 0, VAR_25 = 0;
  bool VAR_26;
  int VAR_27 = VAR_10, VAR_28 = -1;
  const struct cfg80211_bss_ies *VAR_29;
  int VAR_30 = FUNC_10(&VAR_13->vif);

  FUNC_6(VAR_21, VAR_19->supp_rates,
        VAR_19->supp_rates_len,
        &VAR_24, &VAR_25,
        &VAR_26,
        &VAR_27, &VAR_28,
        VAR_30);
  if (!VAR_25 && VAR_28 >= 0) {
   FUNC_15(VAR_13,
       "No basic rates, using min rate instead\n");
   VAR_25 = FUNC_0(VAR_28);
  }

  if (VAR_24)
   VAR_20->sta.supp_rates[VAR_14->channel->band] = VAR_24;
  else
   FUNC_15(VAR_13,
       "No rates found, keeping mandatory only\n");

  VAR_13->vif.bss_conf.basic_rates = VAR_25;


  if (VAR_14->channel->band == VAR_11 &&
      VAR_26)
   VAR_13->flags |= VAR_8;
  else
   VAR_13->flags &= ~VAR_8;

  FUNC_11(VAR_18->bssid, VAR_14->bssid, VAR_6);


  VAR_13->vif.bss_conf.beacon_int = VAR_14->beacon_interval;
  FUNC_13();
  VAR_29 = FUNC_12(VAR_14->beacon_ies);
  if (VAR_29) {
   VAR_13->vif.bss_conf.sync_tsf = VAR_29->tsf;
   VAR_13->vif.bss_conf.sync_device_ts =
    VAR_19->device_ts_beacon;

   FUNC_5(VAR_29,
        &VAR_13->vif.bss_conf.sync_dtim_count,
        ((void*)0));
  } else if (!FUNC_7(&VAR_13->local->hw,
            VAR_12)) {
   VAR_29 = FUNC_12(VAR_14->proberesp_ies);

   VAR_13->vif.bss_conf.sync_tsf = VAR_29->tsf;
   VAR_13->vif.bss_conf.sync_device_ts =
    VAR_19->device_ts_presp;
   VAR_13->vif.bss_conf.sync_dtim_count = 0;
  } else {
   VAR_13->vif.bss_conf.sync_tsf = 0;
   VAR_13->vif.bss_conf.sync_device_ts = 0;
   VAR_13->vif.bss_conf.sync_dtim_count = 0;
  }
  FUNC_14();
 }

 if (VAR_20 || VAR_16) {
  VAR_23 = FUNC_8(VAR_13, VAR_14);
  if (VAR_23) {
   if (VAR_20)
    FUNC_17(VAR_17, VAR_20);
   return -VAR_4;
  }
 }

 if (VAR_20) {




  FUNC_4(VAR_13,
   VAR_2 | VAR_0 |
   VAR_1);

  if (VAR_15)
   FUNC_20(VAR_20, VAR_9);

  VAR_23 = FUNC_19(VAR_20);
  VAR_20 = ((void*)0);
  if (VAR_23) {
   FUNC_15(VAR_13,
       "failed to insert STA entry for the AP (error %d)\n",
       VAR_23);
   return VAR_23;
  }
 } else
  FUNC_2(!FUNC_3(VAR_18->bssid, VAR_14->bssid));


 if (VAR_17->scanning)
  FUNC_9(VAR_17);

 return 0;
}
