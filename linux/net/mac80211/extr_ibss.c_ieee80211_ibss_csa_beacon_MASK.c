
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


typedef int u64 ;
typedef int u16 ;
struct TYPE_12__ {int basic_rates; int beacon_int; } ;
struct TYPE_13__ {TYPE_5__ bss_conf; } ;
struct TYPE_11__ {int mtx; } ;
struct TYPE_14__ {int chan; } ;
struct ieee80211_if_ibss {int presp; TYPE_7__ chandef; scalar_t__ privacy; int ssid_len; int ssid; int bssid; } ;
struct TYPE_8__ {struct ieee80211_if_ibss ibss; } ;
struct ieee80211_sub_if_data {TYPE_6__ vif; TYPE_4__ wdev; TYPE_3__* local; TYPE_1__ u; } ;
struct cfg80211_csa_settings {int dummy; } ;
struct cfg80211_bss_ies {int tsf; } ;
struct cfg80211_bss {int ies; } ;
struct beacon_data {int dummy; } ;
struct TYPE_9__ {int wiphy; } ;
struct TYPE_10__ {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 struct cfg80211_bss* FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,struct cfg80211_bss*) ;
 struct beacon_data* FUNC_4 (struct ieee80211_sub_if_data*,int ,int ,int ,int ,TYPE_7__*,int *,struct cfg80211_csa_settings*) ;
 int FUNC_5 (struct beacon_data*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct beacon_data*) ;
 struct cfg80211_bss_ies* FUNC_8 (int ) ;
 struct beacon_data* FUNC_9 (int ,int ) ;
 int VAR_6 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct ieee80211_sub_if_data*) ;

int FUNC_13(struct ieee80211_sub_if_data *VAR_7,
         struct cfg80211_csa_settings *VAR_8)
{
 struct ieee80211_if_ibss *VAR_9 = &VAR_7->u.ibss;
 struct beacon_data *VAR_10, *VAR_11;
 struct cfg80211_bss *VAR_12;
 const struct cfg80211_bss_ies *VAR_13;
 u16 VAR_14 = VAR_4;
 u64 VAR_15;
 int VAR_16 = 0;

 FUNC_12(VAR_7);

 if (VAR_9->privacy)
  VAR_14 |= VAR_5;

 VAR_12 = FUNC_2(VAR_7->local->hw.wiphy, VAR_9->chandef.chan,
    VAR_9->bssid, VAR_9->ssid,
    VAR_9->ssid_len, VAR_3,
    FUNC_0(VAR_9->privacy));

 if (FUNC_1(!VAR_12)) {
  VAR_16 = -VAR_1;
  goto out;
 }

 FUNC_10();
 VAR_13 = FUNC_8(VAR_12->ies);
 VAR_15 = VAR_13->tsf;
 FUNC_11();
 FUNC_3(VAR_7->local->hw.wiphy, VAR_12);

 VAR_11 = FUNC_9(VAR_9->presp,
       FUNC_6(&VAR_7->wdev.mtx));

 VAR_10 = FUNC_4(VAR_7,
        VAR_7->vif.bss_conf.beacon_int,
        VAR_7->vif.bss_conf.basic_rates,
        VAR_14, VAR_15, &VAR_9->chandef,
        ((void*)0), VAR_8);
 if (!VAR_10) {
  VAR_16 = -VAR_2;
  goto out;
 }

 FUNC_7(VAR_9->presp, VAR_10);
 if (VAR_11)
  FUNC_5(VAR_11, VAR_6);

 return VAR_0;
 out:
 return VAR_16;
}
