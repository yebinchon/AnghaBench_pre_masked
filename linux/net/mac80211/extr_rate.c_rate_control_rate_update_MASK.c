
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_sta {int dummy; } ;
struct sta_info {struct ieee80211_sta sta; TYPE_3__* sdata; int rate_ctrl_lock; void* rate_ctrl_priv; } ;
struct rate_control_ref {int priv; TYPE_2__* ops; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_local {struct rate_control_ref* rate_ctrl; } ;
struct ieee80211_chanctx_conf {int def; } ;
struct TYPE_4__ {int chanctx_conf; } ;
struct TYPE_6__ {TYPE_1__ vif; } ;
struct TYPE_5__ {int (* rate_update ) (int ,struct ieee80211_supported_band*,int *,struct ieee80211_sta*,void*,int ) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_local*,TYPE_3__*,struct ieee80211_sta*,int ) ;
 struct ieee80211_chanctx_conf* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct ieee80211_supported_band*,int *,struct ieee80211_sta*,void*,int ) ;

void FUNC_8(struct ieee80211_local *VAR_0,
        struct ieee80211_supported_band *VAR_1,
        struct sta_info *VAR_2, u32 VAR_3)
{
 struct rate_control_ref *VAR_4 = VAR_0->rate_ctrl;
 struct ieee80211_sta *VAR_5 = &VAR_2->sta;
 void *VAR_6 = VAR_2->rate_ctrl_priv;
 struct ieee80211_chanctx_conf *VAR_7;

 if (VAR_4 && VAR_4->ops->rate_update) {
  FUNC_3();

  VAR_7 = FUNC_2(VAR_2->sdata->vif.chanctx_conf);
  if (FUNC_0(!VAR_7)) {
   FUNC_4();
   return;
  }

  FUNC_5(&VAR_2->rate_ctrl_lock);
  VAR_4->ops->rate_update(VAR_4->priv, VAR_1, &VAR_7->def,
          VAR_5, VAR_6, VAR_3);
  FUNC_6(&VAR_2->rate_ctrl_lock);
  FUNC_4();
 }
 FUNC_1(VAR_0, VAR_2->sdata, &VAR_2->sta, VAR_3);
}
