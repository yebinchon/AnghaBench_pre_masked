
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u16 ;
struct tid_ampdu_tx {scalar_t__ dialog_token; int buf_size; int amsdu; int last_tx; scalar_t__ timeout; int session_timer; int state; int addba_resp_timer; } ;
struct TYPE_15__ {int mtx; scalar_t__* addba_req_num; } ;
struct TYPE_10__ {int addr; struct ieee80211_txq** txq; } ;
struct sta_info {TYPE_7__ ampdu_mlme; TYPE_2__ sta; int sdata; } ;
struct ieee80211_txq {int dummy; } ;
struct TYPE_11__ {scalar_t__ dialog_token; int timeout; int status; int capab; } ;
struct TYPE_12__ {TYPE_3__ addba_resp; } ;
struct TYPE_13__ {TYPE_4__ u; } ;
struct TYPE_14__ {TYPE_5__ action; } ;
struct ieee80211_mgmt {TYPE_6__ u; } ;
struct TYPE_9__ {int max_tx_aggregation_subframes; } ;
struct ieee80211_local {TYPE_1__ hw; } ;
struct TYPE_16__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct sta_info*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (struct ieee80211_local*,struct sta_info*,int) ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct tid_ampdu_tx* FUNC_10 (struct sta_info*,int) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 TYPE_8__* FUNC_14 (struct ieee80211_txq*) ;

void FUNC_15(struct ieee80211_local *VAR_11,
      struct sta_info *VAR_12,
      struct ieee80211_mgmt *VAR_13,
      size_t VAR_14)
{
 struct tid_ampdu_tx *VAR_15;
 struct ieee80211_txq *VAR_16;
 u16 VAR_17, VAR_18, VAR_19;
 bool VAR_20;

 VAR_17 = FUNC_5(VAR_13->u.action.u.addba_resp.capab);
 VAR_20 = VAR_17 & VAR_5;
 VAR_18 = (VAR_17 & VAR_7) >> 2;
 VAR_19 = (VAR_17 & VAR_6) >> 6;
 VAR_19 = FUNC_6(VAR_19, VAR_11->hw.max_tx_aggregation_subframes);

 VAR_16 = VAR_12->sta.txq[VAR_18];
 if (!VAR_20 && VAR_16)
  FUNC_11(VAR_8, &FUNC_14(VAR_16)->flags);

 FUNC_8(&VAR_12->ampdu_mlme.mtx);

 VAR_15 = FUNC_10(VAR_12, VAR_18);
 if (!VAR_15)
  goto out;

 if (VAR_13->u.action.u.addba_resp.dialog_token != VAR_15->dialog_token) {
  FUNC_3(VAR_12->sdata, "wrong addBA response token, %pM tid %d\n",
         VAR_12->sta.addr, VAR_18);
  goto out;
 }

 FUNC_2(&VAR_15->addba_resp_timer);

 FUNC_3(VAR_12->sdata, "switched off addBA timer for %pM tid %d\n",
        VAR_12->sta.addr, VAR_18);






 if (FUNC_13(VAR_4, &VAR_15->state) ||
     FUNC_13(VAR_3, &VAR_15->state)) {
  FUNC_3(VAR_12->sdata,
         "got addBA resp for %pM tid %d but we already gave up\n",
         VAR_12->sta.addr, VAR_18);
  goto out;
 }







 if (FUNC_5(VAR_13->u.action.u.addba_resp.status)
   == VAR_9 && VAR_19) {
  if (FUNC_12(VAR_2,
         &VAR_15->state)) {

   goto out;
  }

  VAR_15->buf_size = VAR_19;
  VAR_15->amsdu = VAR_20;

  if (FUNC_13(VAR_1, &VAR_15->state))
   FUNC_4(VAR_11, VAR_12, VAR_18);

  VAR_12->ampdu_mlme.addba_req_num[VAR_18] = 0;

  VAR_15->timeout =
   FUNC_5(VAR_13->u.action.u.addba_resp.timeout);

  if (VAR_15->timeout) {
   FUNC_7(&VAR_15->session_timer,
      FUNC_0(VAR_15->timeout));
   VAR_15->last_tx = VAR_10;
  }

 } else {
  FUNC_1(VAR_12, VAR_18, VAR_0);
 }

 out:
 FUNC_9(&VAR_12->ampdu_mlme.mtx);
}
