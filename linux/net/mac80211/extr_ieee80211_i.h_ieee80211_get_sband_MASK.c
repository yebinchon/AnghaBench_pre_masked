
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ieee80211_supported_band {int dummy; } ;
struct TYPE_6__ {int chanctx_conf; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; struct ieee80211_local* local; } ;
struct TYPE_9__ {TYPE_5__* wiphy; } ;
struct ieee80211_local {TYPE_4__ hw; } ;
struct TYPE_8__ {TYPE_2__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_3__ def; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_10__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_7__ {int band; } ;


 scalar_t__ FUNC_0 (int) ;
 struct ieee80211_chanctx_conf* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static inline struct ieee80211_supported_band *
FUNC_4(struct ieee80211_sub_if_data *VAR_0)
{
 struct ieee80211_local *VAR_1 = VAR_0->local;
 struct ieee80211_chanctx_conf *VAR_2;
 enum nl80211_band VAR_3;

 FUNC_2();
 VAR_2 = FUNC_1(VAR_0->vif.chanctx_conf);

 if (FUNC_0(!VAR_2)) {
  FUNC_3();
  return ((void*)0);
 }

 VAR_3 = VAR_2->def.chan->band;
 FUNC_3();

 return VAR_1->hw.wiphy->bands[VAR_3];
}
