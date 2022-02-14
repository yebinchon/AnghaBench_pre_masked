
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_9__ {int const* addr; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; struct ieee80211_local* local; } ;
struct ieee80211_msrment_ie {int type; int token; } ;
struct TYPE_14__ {int type; int mode; int token; } ;
struct TYPE_10__ {int length; TYPE_7__ msr_elem; int element_id; int dialog_token; int action_code; } ;
struct TYPE_11__ {TYPE_3__ measurement; } ;
struct TYPE_12__ {TYPE_4__ u; int category; } ;
struct TYPE_13__ {TYPE_5__ action; } ;
struct ieee80211_mgmt {TYPE_6__ u; int frame_control; int bssid; int sa; int da; } ;
struct TYPE_8__ {scalar_t__ extra_tx_headroom; } ;
struct ieee80211_local {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_3 (int ,int const*,int ) ;
 int FUNC_4 (TYPE_7__*,int ,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 struct ieee80211_mgmt* FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_sub_if_data *VAR_7,
     struct ieee80211_msrment_ie *VAR_8,
     const u8 *VAR_9, const u8 *VAR_10,
     u8 VAR_11)
{
 struct ieee80211_local *VAR_12 = VAR_7->local;
 struct sk_buff *VAR_13;
 struct ieee80211_mgmt *VAR_14;

 VAR_13 = FUNC_1(sizeof(*VAR_14) + VAR_12->hw.extra_tx_headroom +
    sizeof(struct ieee80211_msrment_ie));
 if (!VAR_13)
  return;

 FUNC_7(VAR_13, VAR_12->hw.extra_tx_headroom);
 VAR_14 = FUNC_6(VAR_13, 24);
 FUNC_3(VAR_14->da, VAR_9, VAR_0);
 FUNC_3(VAR_14->sa, VAR_7->vif.addr, VAR_0);
 FUNC_3(VAR_14->bssid, VAR_10, VAR_0);
 VAR_14->frame_control = FUNC_0(VAR_1 |
      VAR_3);

 FUNC_5(VAR_13, 1 + sizeof(VAR_14->u.action.u.measurement));
 VAR_14->u.action.category = VAR_5;
 VAR_14->u.action.u.measurement.action_code =
    VAR_4;
 VAR_14->u.action.u.measurement.dialog_token = VAR_11;

 VAR_14->u.action.u.measurement.element_id = VAR_6;
 VAR_14->u.action.u.measurement.length =
   sizeof(struct ieee80211_msrment_ie);

 FUNC_4(&VAR_14->u.action.u.measurement.msr_elem, 0,
  sizeof(struct ieee80211_msrment_ie));
 VAR_14->u.action.u.measurement.msr_elem.token = VAR_8->token;
 VAR_14->u.action.u.measurement.msr_elem.mode |=
   VAR_2;
 VAR_14->u.action.u.measurement.msr_elem.type = VAR_8->type;

 FUNC_2(VAR_7, VAR_13);
}
