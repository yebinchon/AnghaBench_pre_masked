
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int csa_active; } ;
struct ieee80211_if_managed {int csa_waiting_bcn; int associated; } ;
struct TYPE_4__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int csa_block_tx; TYPE_3__ vif; TYPE_1__ u; struct ieee80211_local* local; } ;
struct TYPE_5__ {int wiphy; } ;
struct ieee80211_local {int mtx; TYPE_2__ hw; } ;
typedef int frame_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int *,int,int,int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int ,int ,int,int *) ;
 int FUNC_3 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ieee80211_sub_if_data*) ;
 int FUNC_7 (struct ieee80211_sub_if_data*) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_sub_if_data *VAR_4)
{
 struct ieee80211_local *VAR_5 = VAR_4->local;
 struct ieee80211_if_managed *VAR_6 = &VAR_4->u.mgd;
 u8 VAR_7[VAR_0];
 bool VAR_8;

 FUNC_6(VAR_4);
 if (!VAR_6->associated) {
  FUNC_7(VAR_4);
  return;
 }

 VAR_8 = !VAR_4->csa_block_tx;




 FUNC_0(VAR_5->hw.wiphy, VAR_6->associated);

 FUNC_2(VAR_4, VAR_2,
          VAR_3,
          VAR_8, VAR_7);
 FUNC_4(&VAR_5->mtx);
 VAR_4->vif.csa_active = 0;
 VAR_6->csa_waiting_bcn = 0;
 if (VAR_4->csa_block_tx) {
  FUNC_3(VAR_5, VAR_4,
       VAR_1);
  VAR_4->csa_block_tx = 0;
 }
 FUNC_5(&VAR_5->mtx);

 FUNC_1(VAR_4, VAR_7, sizeof(VAR_7), VAR_8,
        VAR_3);

 FUNC_7(VAR_4);
}
