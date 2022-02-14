
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct tid_ampdu_rx {int timeout; int ssn; int head_seq_num; int buf_size; int auto_seq; int started; int tid; int last_rx; int session_timer; struct sta_info* sta; scalar_t__ reorder_buf_filtered; scalar_t__ stored_mpdu_num; struct tid_ampdu_rx* reorder_time; struct tid_ampdu_rx* reorder_buf; int reorder_timer; int reorder_lock; } ;
struct TYPE_9__ {int cap; int ht_supported; } ;
struct TYPE_8__ {scalar_t__ has_he; } ;
struct TYPE_11__ {int max_rx_aggregation_subframes; int addr; TYPE_2__ ht_cap; TYPE_1__ he_cap; } ;
struct TYPE_10__ {scalar_t__* tid_rx_token; int unexpected_agg; int agg_session_valid; int * tid_rx; int mtx; } ;
struct sta_info {TYPE_4__ sta; TYPE_3__ ampdu_mlme; TYPE_5__* sdata; } ;
struct sk_buff_head {int dummy; } ;
struct ieee80211_local {int hw; } ;
struct ieee80211_ampdu_params {int tid; int amsdu; int timeout; int ssn; int buf_size; int action; TYPE_4__* sta; } ;
struct ieee80211_addba_ext_ie {int dummy; } ;
struct TYPE_12__ {struct ieee80211_local* local; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct sta_info*,int,int ,int ,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct tid_ampdu_rx*) ;
 int FUNC_5 (struct ieee80211_local*,TYPE_5__*,struct ieee80211_ampdu_params*) ;
 int FUNC_6 (TYPE_5__*,char*,int,int,...) ;
 int FUNC_7 (TYPE_5__*,char*,int ,int,...) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int FUNC_9 (struct sta_info*,int ,int,scalar_t__,int,int,int,int,struct ieee80211_addba_ext_ie const*) ;
 int VAR_15 ;
 void* FUNC_10 (int,int,int ) ;
 int FUNC_11 (struct tid_ampdu_rx*) ;
 struct tid_ampdu_rx* FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int ,struct tid_ampdu_rx*) ;
 struct tid_ampdu_rx* FUNC_16 (int ) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (int *) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_20 (int,int ) ;
 scalar_t__ FUNC_21 (struct sta_info*,int ) ;
 int FUNC_22 (int *,int ,int ) ;

void FUNC_23(struct sta_info *VAR_18,
          u8 VAR_19, u16 VAR_20,
          u16 VAR_21, u16 VAR_22, u16 VAR_23,
          u16 VAR_24, bool VAR_25, bool VAR_26,
          const struct ieee80211_addba_ext_ie *VAR_27)
{
 struct ieee80211_local *VAR_28 = VAR_18->sdata->local;
 struct tid_ampdu_rx *VAR_29;
 struct ieee80211_ampdu_params VAR_30 = {
  .sta = &VAR_18->sta,
  .action = VAR_2,
  .tid = VAR_23,
  .amsdu = 0,
  .timeout = VAR_20,
  .ssn = VAR_21,
 };
 int VAR_31, VAR_32 = -VAR_0;
 u16 VAR_33 = VAR_11;
 u16 VAR_34;

 if (VAR_23 >= VAR_3) {
  FUNC_6(VAR_18->sdata,
         "STA %pM requests BA session on unsupported tid %d\n",
         VAR_18->sta.addr, VAR_23);
  goto end;
 }

 if (!VAR_18->sta.ht_cap.ht_supported) {
  FUNC_6(VAR_18->sdata,
         "STA %pM erroneously requests BA session on tid %d w/o QoS\n",
         VAR_18->sta.addr, VAR_23);

  goto end;
 }

 if (FUNC_21(VAR_18, VAR_14)) {
  FUNC_6(VAR_18->sdata,
         "Suspend in progress - Denying ADDBA request (%pM tid %d)\n",
         VAR_18->sta.addr, VAR_23);
  goto end;
 }

 if (VAR_18->sta.he_cap.has_he)
  VAR_34 = VAR_5;
 else
  VAR_34 = VAR_6;





 if (((VAR_22 != 1) &&
      (!(VAR_18->sta.ht_cap.cap & VAR_4))) ||
     (VAR_24 > VAR_34)) {
  VAR_33 = VAR_10;
  FUNC_7(VAR_18->sdata,
       "AddBA Req with bad params from %pM on tid %u. policy %d, buffer size %d\n",
       VAR_18->sta.addr, VAR_23, VAR_22, VAR_24);
  goto end;
 }

 if (VAR_24 == 0)
  VAR_24 = VAR_34;


 if (VAR_24 > VAR_18->sta.max_rx_aggregation_subframes)
  VAR_24 = VAR_18->sta.max_rx_aggregation_subframes;
 VAR_30.buf_size = VAR_24;

 FUNC_6(VAR_18->sdata, "AddBA Req buf_size=%d for %pM\n",
        VAR_24, VAR_18->sta.addr);


 FUNC_13(&VAR_18->ampdu_mlme.mtx);

 if (FUNC_20(VAR_23, VAR_18->ampdu_mlme.agg_session_valid)) {
  if (VAR_18->ampdu_mlme.tid_rx_token[VAR_23] == VAR_19) {
   struct tid_ampdu_rx *VAR_35;

   FUNC_7(VAR_18->sdata,
        "updated AddBA Req from %pM on tid %u\n",
        VAR_18->sta.addr, VAR_23);





   FUNC_17();
   VAR_35 = FUNC_16(VAR_18->ampdu_mlme.tid_rx[VAR_23]);
   if (VAR_35 && VAR_35->timeout == VAR_20)
    VAR_33 = VAR_12;
   else
    VAR_33 = VAR_11;
   FUNC_18();
   goto end;
  }

  FUNC_7(VAR_18->sdata,
       "unexpected AddBA Req from %pM on tid %u\n",
       VAR_18->sta.addr, VAR_23);


  FUNC_1(VAR_18, VAR_23, VAR_9,
      VAR_13,
      0);
 }

 if (FUNC_8(&VAR_28->hw, VAR_7)) {
  VAR_32 = FUNC_5(VAR_28, VAR_18->sdata, &VAR_30);
  FUNC_6(VAR_18->sdata,
         "Rx A-MPDU request on %pM tid %d result %d\n",
         VAR_18->sta.addr, VAR_23, VAR_32);
  if (!VAR_32)
   VAR_33 = VAR_12;
  goto end;
 }


 VAR_29 = FUNC_12(sizeof(*VAR_29), VAR_1);
 if (!VAR_29)
  goto end;

 FUNC_19(&VAR_29->reorder_lock);


 FUNC_22(&VAR_29->session_timer,
      VAR_17, VAR_8);


 FUNC_22(&VAR_29->reorder_timer,
      VAR_16, 0);


 VAR_29->reorder_buf =
  FUNC_10(VAR_24, sizeof(struct sk_buff_head), VAR_1);
 VAR_29->reorder_time =
  FUNC_10(VAR_24, sizeof(unsigned long), VAR_1);
 if (!VAR_29->reorder_buf || !VAR_29->reorder_time) {
  FUNC_11(VAR_29->reorder_buf);
  FUNC_11(VAR_29->reorder_time);
  FUNC_11(VAR_29);
  goto end;
 }

 for (VAR_31 = 0; VAR_31 < VAR_24; VAR_31++)
  FUNC_4(&VAR_29->reorder_buf[VAR_31]);

 VAR_32 = FUNC_5(VAR_28, VAR_18->sdata, &VAR_30);
 FUNC_6(VAR_18->sdata, "Rx A-MPDU request on %pM tid %d result %d\n",
        VAR_18->sta.addr, VAR_23, VAR_32);
 if (VAR_32) {
  FUNC_11(VAR_29->reorder_buf);
  FUNC_11(VAR_29->reorder_time);
  FUNC_11(VAR_29);
  goto end;
 }


 VAR_29->ssn = VAR_21;
 VAR_29->head_seq_num = VAR_21;
 VAR_29->buf_size = VAR_24;
 VAR_29->timeout = VAR_20;
 VAR_29->stored_mpdu_num = 0;
 VAR_29->auto_seq = VAR_26;
 VAR_29->started = 0;
 VAR_29->reorder_buf_filtered = 0;
 VAR_29->tid = VAR_23;
 VAR_29->sta = VAR_18;
 VAR_33 = VAR_12;


 FUNC_15(VAR_18->ampdu_mlme.tid_rx[VAR_23], VAR_29);

 if (VAR_20) {
  FUNC_14(&VAR_29->session_timer, FUNC_0(VAR_20));
  VAR_29->last_rx = VAR_15;
 }

end:
 if (VAR_33 == VAR_12) {
  FUNC_3(VAR_23, VAR_18->ampdu_mlme.agg_session_valid);
  FUNC_2(VAR_23, VAR_18->ampdu_mlme.unexpected_agg);
  VAR_18->ampdu_mlme.tid_rx_token[VAR_23] = VAR_19;
 }

 if (VAR_25)
  FUNC_9(VAR_18, VAR_18->sta.addr, VAR_23,
       VAR_19, VAR_33, 1, VAR_24,
       VAR_20, VAR_27);
}
