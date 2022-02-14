
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int csa_active; } ;
struct ieee80211_sub_if_data {int csa_block_tx; TYPE_1__ vif; struct ieee80211_local* local; } ;
struct ieee80211_local {int mtx; int chanctx_mtx; TYPE_2__* ops; } ;
struct TYPE_4__ {int abort_channel_switch; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211_sub_if_data *VAR_1)
{
 struct ieee80211_local *VAR_2 = VAR_1->local;

 if (!VAR_2->ops->abort_channel_switch)
  return;

 FUNC_3(&VAR_2->mtx);

 FUNC_3(&VAR_2->chanctx_mtx);
 FUNC_1(VAR_1);
 FUNC_4(&VAR_2->chanctx_mtx);

 if (VAR_1->csa_block_tx)
  FUNC_2(VAR_2, VAR_1,
       VAR_0);

 VAR_1->csa_block_tx = 0;
 VAR_1->vif.csa_active = 0;

 FUNC_4(&VAR_2->mtx);

 FUNC_0(VAR_1);
}
