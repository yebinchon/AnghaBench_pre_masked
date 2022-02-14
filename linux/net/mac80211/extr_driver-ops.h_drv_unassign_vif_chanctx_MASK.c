
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct ieee80211_chanctx {int conf; int driver_present; } ;
struct TYPE_2__ {int (* unassign_vif_chanctx ) (int *,int *,int *) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (struct ieee80211_local*) ;
 int FUNC_5 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct ieee80211_chanctx*) ;

__attribute__((used)) static inline void FUNC_6(struct ieee80211_local *VAR_0,
         struct ieee80211_sub_if_data *VAR_1,
         struct ieee80211_chanctx *VAR_2)
{
 FUNC_2();

 if (!FUNC_1(VAR_1))
  return;

 FUNC_5(VAR_0, VAR_1, VAR_2);
 if (VAR_0->ops->unassign_vif_chanctx) {
  FUNC_0(!VAR_2->driver_present);
  VAR_0->ops->unassign_vif_chanctx(&VAR_0->hw,
       &VAR_1->vif,
       &VAR_2->conf);
 }
 FUNC_4(VAR_0);
}
