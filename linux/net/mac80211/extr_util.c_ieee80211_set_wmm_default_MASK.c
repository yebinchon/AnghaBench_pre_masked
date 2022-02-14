
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


struct ieee80211_tx_queue_params {int cw_max; int cw_min; int txop; int aifs; int uapsd; } ;
struct TYPE_11__ {int qos; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_5__ bss_conf; int chanctx_conf; } ;
struct ieee80211_sub_if_data {int flags; TYPE_6__ vif; struct ieee80211_tx_queue_params* tx_conf; struct ieee80211_local* local; } ;
struct TYPE_8__ {int queues; } ;
struct ieee80211_local {TYPE_2__ hw; TYPE_1__* ops; } ;
struct TYPE_10__ {TYPE_3__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_4__ def; } ;
typedef int qparam ;
struct TYPE_9__ {scalar_t__ band; } ;
struct TYPE_7__ {int conf_tx; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int,struct ieee80211_tx_queue_params*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct ieee80211_tx_queue_params*,int) ;
 int FUNC_3 (struct ieee80211_tx_queue_params*,int ,int) ;
 struct ieee80211_chanctx_conf* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void FUNC_7(struct ieee80211_sub_if_data *VAR_8,
          bool VAR_9, bool VAR_10)
{
 struct ieee80211_local *VAR_11 = VAR_8->local;
 struct ieee80211_tx_queue_params VAR_12;
 struct ieee80211_chanctx_conf *VAR_13;
 int VAR_14;
 bool VAR_15;
 bool VAR_16;
 int VAR_17, VAR_18;

 if (!VAR_11->ops->conf_tx)
  return;

 if (VAR_11->hw.queues < VAR_1)
  return;

 FUNC_3(&VAR_12, 0, sizeof(VAR_12));

 FUNC_5();
 VAR_13 = FUNC_4(VAR_8->vif.chanctx_conf);
 VAR_15 = (VAR_13 &&
     VAR_13->def.chan->band == VAR_3) &&
   !(VAR_8->flags & VAR_2);
 FUNC_6();

 VAR_16 = (VAR_8->vif.type == VAR_6);


 VAR_18 = 1023;
 if (VAR_15)
  VAR_17 = 31;
 else
  VAR_17 = 15;


 VAR_12.cw_max = VAR_18;
 VAR_12.cw_min = VAR_17;
 VAR_12.txop = 0;
 VAR_12.aifs = 2;

 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {

  if (VAR_10) {
   switch (VAR_14) {
   case 130:
    VAR_12.cw_max = VAR_18;
    VAR_12.cw_min = VAR_17;
    VAR_12.txop = 0;
    if (VAR_16)
     VAR_12.aifs = 9;
    else
     VAR_12.aifs = 7;
    break;

   default:
   case 131:
    VAR_12.cw_max = VAR_18;
    VAR_12.cw_min = VAR_17;
    VAR_12.txop = 0;
    if (VAR_16)
     VAR_12.aifs = 6;
    else
     VAR_12.aifs = 3;
    break;
   case 129:
    VAR_12.cw_max = VAR_17;
    VAR_12.cw_min = (VAR_17 + 1) / 2 - 1;
    if (VAR_16)
     VAR_12.txop = 0;
    else if (VAR_15)
     VAR_12.txop = 6016/32;
    else
     VAR_12.txop = 3008/32;

    if (VAR_16)
     VAR_12.aifs = 3;
    else
     VAR_12.aifs = 2;
    break;
   case 128:
    VAR_12.cw_max = (VAR_17 + 1) / 2 - 1;
    VAR_12.cw_min = (VAR_17 + 1) / 4 - 1;
    if (VAR_16)
     VAR_12.txop = 0;
    else if (VAR_15)
     VAR_12.txop = 3264/32;
    else
     VAR_12.txop = 1504/32;
    VAR_12.aifs = 2;
    break;
   }
  }
  FUNC_2(VAR_8, &VAR_12, VAR_14);

  VAR_12.uapsd = 0;

  VAR_8->tx_conf[VAR_14] = VAR_12;
  FUNC_0(VAR_11, VAR_8, VAR_14, &VAR_12);
 }

 if (VAR_8->vif.type != VAR_4 &&
     VAR_8->vif.type != VAR_7 &&
     VAR_8->vif.type != VAR_5) {
  VAR_8->vif.bss_conf.qos = VAR_10;
  if (VAR_9)
   FUNC_1(VAR_8,
        VAR_0);
 }
}
