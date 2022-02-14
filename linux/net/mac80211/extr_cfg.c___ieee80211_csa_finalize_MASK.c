
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int chandef; } ;
struct TYPE_4__ {int csa_active; TYPE_1__ bss_conf; } ;
struct ieee80211_sub_if_data {int csa_block_tx; int csa_chandef; int dev; TYPE_2__ vif; scalar_t__ reserved_ready; scalar_t__ reserved_chanctx; struct ieee80211_local* local; } ;
struct ieee80211_local {int chanctx_mtx; int mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,int *) ;
 int FUNC_5 (struct ieee80211_sub_if_data*) ;
 int FUNC_6 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ieee80211_sub_if_data*) ;

__attribute__((used)) static int FUNC_9(struct ieee80211_sub_if_data *VAR_2)
{
 struct ieee80211_local *VAR_3 = VAR_2->local;
 u32 VAR_4 = 0;
 int VAR_5;

 FUNC_8(VAR_2);
 FUNC_7(&VAR_3->mtx);
 FUNC_7(&VAR_3->chanctx_mtx);
 if (VAR_2->reserved_chanctx) {





  if (VAR_2->reserved_ready)
   return 0;

  return FUNC_5(VAR_2);
 }

 if (!FUNC_1(&VAR_2->vif.bss_conf.chandef,
     &VAR_2->csa_chandef))
  return -VAR_0;

 VAR_2->vif.csa_active = 0;

 VAR_5 = FUNC_4(VAR_2, &VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_3(VAR_2, VAR_4);

 if (VAR_2->csa_block_tx) {
  FUNC_6(VAR_3, VAR_2,
       VAR_1);
  VAR_2->csa_block_tx = 0;
 }

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5)
  return VAR_5;

 FUNC_0(VAR_2->dev, &VAR_2->csa_chandef);

 return 0;
}
