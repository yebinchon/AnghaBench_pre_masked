
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


struct ieee80211_sta {int dummy; } ;
struct sta_info {int rate_ctrl_lock; TYPE_2__* sdata; void* rate_ctrl_priv; struct ieee80211_sta sta; struct rate_control_ref* rate_ctrl; } ;
struct rate_control_ref {int priv; TYPE_6__* ops; } ;
struct ieee80211_supported_band {int dummy; } ;
struct TYPE_11__ {TYPE_3__* wiphy; } ;
struct ieee80211_local {TYPE_4__ hw; } ;
struct TYPE_14__ {TYPE_5__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_7__ def; } ;
struct TYPE_13__ {int (* rate_init ) (int ,struct ieee80211_supported_band*,TYPE_7__*,struct ieee80211_sta*,void*) ;} ;
struct TYPE_12__ {size_t band; } ;
struct TYPE_10__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_8__ {int chanctx_conf; } ;
struct TYPE_9__ {TYPE_1__ vif; struct ieee80211_local* local; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sta_info*) ;
 struct ieee80211_chanctx_conf* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct sta_info*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,struct ieee80211_supported_band*,TYPE_7__*,struct ieee80211_sta*,void*) ;

void FUNC_9(struct sta_info *VAR_1)
{
 struct ieee80211_local *VAR_2 = VAR_1->sdata->local;
 struct rate_control_ref *VAR_3 = VAR_1->rate_ctrl;
 struct ieee80211_sta *VAR_4 = &VAR_1->sta;
 void *VAR_5 = VAR_1->rate_ctrl_priv;
 struct ieee80211_supported_band *VAR_6;
 struct ieee80211_chanctx_conf *VAR_7;

 FUNC_1(VAR_1);

 if (!VAR_3)
  return;

 FUNC_3();

 VAR_7 = FUNC_2(VAR_1->sdata->vif.chanctx_conf);
 if (FUNC_0(!VAR_7)) {
  FUNC_4();
  return;
 }

 VAR_6 = VAR_2->hw.wiphy->bands[VAR_7->def.chan->band];

 FUNC_6(&VAR_1->rate_ctrl_lock);
 VAR_3->ops->rate_init(VAR_3->priv, VAR_6, &VAR_7->def, VAR_4,
       VAR_5);
 FUNC_7(&VAR_1->rate_ctrl_lock);
 FUNC_4();
 FUNC_5(VAR_1, VAR_0);
}
