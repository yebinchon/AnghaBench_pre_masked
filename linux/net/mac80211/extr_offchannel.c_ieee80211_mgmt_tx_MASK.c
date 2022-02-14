
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_16__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct sta_info {int dummy; } ;
struct sk_buff {int dev; } ;
struct TYPE_18__ {int beacon; int mesh_id_len; } ;
struct TYPE_17__ {int presp; } ;
struct TYPE_31__ {int beacon; } ;
struct TYPE_29__ {TYPE_6__* associated; } ;
struct TYPE_19__ {TYPE_11__ mesh; TYPE_10__ ibss; TYPE_9__ ap; TYPE_7__ mgd; } ;
struct TYPE_23__ {int ibss_joined; } ;
struct TYPE_20__ {int type; scalar_t__ csa_active; int chanctx_conf; TYPE_1__ bss_conf; } ;
struct ieee80211_sub_if_data {int dev; TYPE_12__ u; TYPE_13__ vif; TYPE_2__* bss; struct ieee80211_local* local; } ;
struct TYPE_25__ {int category; } ;
struct TYPE_26__ {TYPE_3__ action; } ;
struct ieee80211_mgmt {int bssid; int da; TYPE_4__ u; int frame_control; } ;
struct TYPE_21__ {int offchannel_tx_hw_queue; scalar_t__ extra_tx_headroom; } ;
struct ieee80211_local {int mtx; TYPE_14__ hw; TYPE_5__* ops; } ;
struct TYPE_30__ {scalar_t__ chan; } ;
struct ieee80211_chanctx_conf {TYPE_8__ def; } ;
struct cfg80211_mgmt_tx_params {scalar_t__ chan; int n_csa_offsets; size_t* csa_offsets; int wait; scalar_t__ dont_wait_for_ack; scalar_t__ len; scalar_t__ buf; scalar_t__ offchan; scalar_t__ no_cck; } ;
struct beacon_data {int csa_current_counter; } ;
struct TYPE_28__ {int bssid; } ;
struct TYPE_27__ {int remain_on_channel; } ;
struct TYPE_24__ {int beacon; } ;
struct TYPE_22__ {int flags; int hw_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_16__* FUNC_0 (struct sk_buff*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct ieee80211_sub_if_data* FUNC_1 (struct wireless_dev*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ieee80211_local*,struct sk_buff*,int*,int ) ;
 int FUNC_4 (TYPE_14__*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (TYPE_14__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211_local*,struct ieee80211_sub_if_data*,scalar_t__,int ,int*,struct sk_buff*,int ) ;
 int FUNC_8 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 scalar_t__ FUNC_9 (TYPE_13__*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 void* FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (struct ieee80211_sub_if_data*) ;
 int FUNC_19 (struct ieee80211_sub_if_data*) ;
 int * FUNC_20 (struct sk_buff*,scalar_t__,scalar_t__) ;
 int FUNC_21 (struct sk_buff*,scalar_t__) ;
 struct sta_info* FUNC_22 (struct ieee80211_sub_if_data*,int ) ;

int FUNC_23(struct wiphy *VAR_18, struct wireless_dev *VAR_19,
        struct cfg80211_mgmt_tx_params *VAR_20, u64 *VAR_21)
{
 struct ieee80211_sub_if_data *VAR_22 = FUNC_1(VAR_19);
 struct ieee80211_local *VAR_23 = VAR_22->local;
 struct sk_buff *VAR_24;
 struct sta_info *VAR_25;
 const struct ieee80211_mgmt *VAR_26 = (void *)VAR_20->buf;
 bool VAR_27 = 0;
 u32 VAR_28;
 int VAR_29;
 u8 *VAR_30;

 if (VAR_20->dont_wait_for_ack)
  VAR_28 = VAR_8;
 else
  VAR_28 = VAR_12 |
   VAR_10;

 if (VAR_20->no_cck)
  VAR_28 |= VAR_9;

 switch (VAR_22->vif.type) {
 case 136:
  if (!VAR_22->vif.bss_conf.ibss_joined)
   VAR_27 = 1;
 case 135:
 case 134:
 case 129:
  if (VAR_22->vif.type != 136 &&
      !FUNC_9(&VAR_22->vif) &&
      !FUNC_14(VAR_22->bss->beacon))
   VAR_27 = 1;
  if (!FUNC_6(VAR_26->frame_control) ||
      VAR_26->u.action.category == VAR_15 ||
      VAR_26->u.action.category == VAR_16 ||
      VAR_26->u.action.category == VAR_17)
   break;
  FUNC_16();
  VAR_25 = FUNC_22(VAR_22, VAR_26->da);
  FUNC_17();
  if (!VAR_25)
   return -VAR_2;
  break;
 case 128:
 case 131:
  FUNC_18(VAR_22);
  if (!VAR_22->u.mgd.associated ||
      (VAR_20->offchan && VAR_20->wait &&
       VAR_23->ops->remain_on_channel &&
       FUNC_11(VAR_22->u.mgd.associated->bssid,
       VAR_26->bssid, VAR_5)))
   VAR_27 = 1;
  FUNC_19(VAR_22);
  break;
 case 130:
  VAR_27 = 1;
  break;
 case 132:
 default:
  return -VAR_4;
 }




 if (VAR_27 && !VAR_20->chan)
  return -VAR_1;

 FUNC_12(&VAR_23->mtx);


 if (!VAR_27) {
  struct ieee80211_chanctx_conf *VAR_31;

  FUNC_16();
  VAR_31 = FUNC_15(VAR_22->vif.chanctx_conf);

  if (VAR_31) {
   VAR_27 = VAR_20->chan &&
           (VAR_20->chan !=
     VAR_31->def.chan);
  } else if (!VAR_20->chan) {
   VAR_29 = -VAR_1;
   FUNC_17();
   goto out_unlock;
  } else {
   VAR_27 = 1;
  }
  FUNC_17();
 }

 if (VAR_27 && !VAR_20->offchan) {
  VAR_29 = -VAR_0;
  goto out_unlock;
 }

 VAR_24 = FUNC_2(VAR_23->hw.extra_tx_headroom + VAR_20->len);
 if (!VAR_24) {
  VAR_29 = -VAR_3;
  goto out_unlock;
 }
 FUNC_21(VAR_24, VAR_23->hw.extra_tx_headroom);

 VAR_30 = FUNC_20(VAR_24, VAR_20->buf, VAR_20->len);


 if (VAR_22->vif.csa_active &&
     (VAR_22->vif.type == 135 ||
      VAR_22->vif.type == 133 ||
      VAR_22->vif.type == 136) &&
     VAR_20->n_csa_offsets) {
  int VAR_32;
  struct beacon_data *VAR_33 = ((void*)0);

  FUNC_16();

  if (VAR_22->vif.type == 135)
   VAR_33 = FUNC_15(VAR_22->u.ap.beacon);
  else if (VAR_22->vif.type == 136)
   VAR_33 = FUNC_15(VAR_22->u.ibss.presp);
  else if (FUNC_9(&VAR_22->vif))
   VAR_33 = FUNC_15(VAR_22->u.mesh.beacon);

  if (VAR_33)
   for (VAR_32 = 0; VAR_32 < VAR_20->n_csa_offsets; VAR_32++)
    VAR_30[VAR_20->csa_offsets[VAR_32]] =
     VAR_33->csa_current_counter;

  FUNC_17();
 }

 FUNC_0(VAR_24)->flags = VAR_28;

 VAR_24->dev = VAR_22->dev;

 if (!VAR_20->dont_wait_for_ack) {



  VAR_29 = FUNC_3(VAR_23, VAR_24, VAR_21, VAR_6);
  if (VAR_29) {
   FUNC_10(VAR_24);
   goto out_unlock;
  }
 } else {





  *VAR_21 = 0xffffffff;
 }

 if (!VAR_27) {
  FUNC_8(VAR_22, VAR_24);
  VAR_29 = 0;
  goto out_unlock;
 }

 FUNC_0(VAR_24)->flags |= VAR_11 |
     VAR_13;
 if (FUNC_5(&VAR_23->hw, VAR_14))
  FUNC_0(VAR_24)->hw_queue =
   VAR_23->hw.offchannel_tx_hw_queue;


 VAR_29 = FUNC_7(VAR_23, VAR_22, VAR_20->chan,
           VAR_20->wait, VAR_21, VAR_24,
           VAR_7);
 if (VAR_29)
  FUNC_4(&VAR_23->hw, VAR_24);
 out_unlock:
 FUNC_13(&VAR_23->mtx);
 return VAR_29;
}
