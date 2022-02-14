
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


struct txq_info {int dummy; } ;
struct tid_ampdu_tx {int pending; } ;
struct TYPE_11__ {int * tid_tx; struct tid_ampdu_tx** tid_start_tx; } ;
struct TYPE_10__ {scalar_t__* txq; } ;
struct sta_info {TYPE_5__ ampdu_mlme; int drv_deliver_wk; int * tx_filtered; int * ps_tx_buf; TYPE_4__ sta; struct ieee80211_sub_if_data* sdata; } ;
struct ps_data {int num_sta_ps; } ;
struct TYPE_12__ {scalar_t__ type; } ;
struct TYPE_8__ {struct ps_data ps; } ;
struct TYPE_9__ {TYPE_2__ mesh; } ;
struct ieee80211_sub_if_data {TYPE_6__ vif; TYPE_3__ u; TYPE_1__* bss; struct ieee80211_local* local; } ;
struct ieee80211_local {int hw; int total_ps_buffered; } ;
struct TYPE_7__ {struct ps_data ps; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sta_info*,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct ieee80211_local*,struct txq_info*) ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (struct tid_ampdu_tx*) ;
 int FUNC_8 (struct sta_info*) ;
 struct tid_ampdu_tx* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct sta_info*,int ) ;
 struct txq_info* FUNC_12 (scalar_t__) ;

__attribute__((used)) static void FUNC_13(struct sta_info *VAR_7)
{
 int VAR_8, VAR_9;
 struct tid_ampdu_tx *VAR_10;
 struct ieee80211_sub_if_data *VAR_11 = VAR_7->sdata;
 struct ieee80211_local *VAR_12 = VAR_11->local;
 struct ps_data *VAR_13;

 if (FUNC_11(VAR_7, VAR_6) ||
     FUNC_11(VAR_7, VAR_5) ||
     FUNC_11(VAR_7, VAR_4)) {
  if (VAR_7->sdata->vif.type == VAR_2 ||
      VAR_7->sdata->vif.type == VAR_3)
   VAR_13 = &VAR_11->bss->ps;
  else if (FUNC_6(&VAR_11->vif))
   VAR_13 = &VAR_11->u.mesh.ps;
  else
   return;

  FUNC_3(VAR_7, VAR_6);
  FUNC_3(VAR_7, VAR_5);
  FUNC_3(VAR_7, VAR_4);

  FUNC_1(&VAR_13->num_sta_ps);
 }

 if (VAR_7->sta.txq[0]) {
  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_7->sta.txq); VAR_9++) {
   struct txq_info *VAR_14;

   if (!VAR_7->sta.txq[VAR_9])
    continue;

   VAR_14 = FUNC_12(VAR_7->sta.txq[VAR_9]);

   FUNC_5(VAR_12, VAR_14);
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_12->total_ps_buffered -= FUNC_10(&VAR_7->ps_tx_buf[VAR_8]);
  FUNC_4(&VAR_12->hw, &VAR_7->ps_tx_buf[VAR_8]);
  FUNC_4(&VAR_12->hw, &VAR_7->tx_filtered[VAR_8]);
 }

 if (FUNC_6(&VAR_11->vif))
  FUNC_8(VAR_7);

 FUNC_2(&VAR_7->drv_deliver_wk);







 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  FUNC_7(VAR_7->ampdu_mlme.tid_start_tx[VAR_9]);
  VAR_10 = FUNC_9(VAR_7->ampdu_mlme.tid_tx[VAR_9]);
  if (!VAR_10)
   continue;
  FUNC_4(&VAR_12->hw, &VAR_10->pending);
  FUNC_7(VAR_10);
 }
}
