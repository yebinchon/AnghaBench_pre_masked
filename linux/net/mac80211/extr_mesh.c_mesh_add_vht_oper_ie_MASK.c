
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_vht_operation {int dummy; } ;
struct ieee80211_sta_vht_cap {int vht_supported; } ;
struct ieee80211_supported_band {struct ieee80211_sta_vht_cap vht_cap; } ;
struct TYPE_12__ {scalar_t__ width; } ;
struct TYPE_10__ {TYPE_6__ chandef; } ;
struct TYPE_11__ {TYPE_4__ bss_conf; int chanctx_conf; } ;
struct ieee80211_sub_if_data {TYPE_5__ vif; struct ieee80211_local* local; } ;
struct TYPE_9__ {TYPE_2__* wiphy; } ;
struct ieee80211_local {TYPE_3__ hw; } ;
struct ieee80211_channel {size_t band; } ;
struct TYPE_7__ {struct ieee80211_channel* chan; } ;
struct ieee80211_chanctx_conf {TYPE_1__ def; } ;
struct TYPE_8__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,struct ieee80211_sta_vht_cap*,TYPE_6__*) ;
 struct ieee80211_chanctx_conf* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int * FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;

int FUNC_7(struct ieee80211_sub_if_data *VAR_5,
    struct sk_buff *VAR_6)
{
 struct ieee80211_local *VAR_7 = VAR_5->local;
 struct ieee80211_chanctx_conf *VAR_8;
 struct ieee80211_channel *VAR_9;
 struct ieee80211_supported_band *VAR_10;
 struct ieee80211_sta_vht_cap *VAR_11;
 u8 *VAR_12;

 FUNC_3();
 VAR_8 = FUNC_2(VAR_5->vif.chanctx_conf);
 if (FUNC_0(!VAR_8)) {
  FUNC_4();
  return -VAR_0;
 }
 VAR_9 = VAR_8->def.chan;
 FUNC_4();

 VAR_10 = VAR_7->hw.wiphy->bands[VAR_9->band];
 VAR_11 = &VAR_10->vht_cap;

 if (!VAR_11->vht_supported ||
     VAR_5->vif.bss_conf.chandef.width == VAR_3 ||
     VAR_5->vif.bss_conf.chandef.width == VAR_4 ||
     VAR_5->vif.bss_conf.chandef.width == VAR_2)
  return 0;

 if (FUNC_6(VAR_6) < 2 + sizeof(struct ieee80211_vht_operation))
  return -VAR_1;

 VAR_12 = FUNC_5(VAR_6, 2 + sizeof(struct ieee80211_vht_operation));
 FUNC_1(VAR_12, VAR_11,
        &VAR_5->vif.bss_conf.chandef);

 return 0;
}
