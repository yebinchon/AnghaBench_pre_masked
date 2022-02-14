
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_22__ {scalar_t__ has_he; } ;
struct TYPE_12__ {TYPE_9__ he_cap; } ;
struct sta_info {TYPE_10__ sta; struct ieee80211_sub_if_data* sdata; } ;
struct sk_buff {int dummy; } ;
struct TYPE_16__ {int * bssid; } ;
struct TYPE_14__ {int * bssid; } ;
struct TYPE_17__ {TYPE_3__ ibss; TYPE_1__ mgd; } ;
struct TYPE_15__ {scalar_t__ type; int * addr; } ;
struct ieee80211_sub_if_data {TYPE_4__ u; TYPE_2__ vif; struct ieee80211_local* local; } ;
struct TYPE_18__ {void* status; void* timeout; void* capab; int dialog_token; int action_code; } ;
struct TYPE_19__ {TYPE_5__ addba_resp; } ;
struct TYPE_20__ {TYPE_6__ u; int category; } ;
struct TYPE_21__ {TYPE_7__ action; } ;
struct ieee80211_mgmt {TYPE_8__ u; void* frame_control; int bssid; int sa; int da; } ;
struct TYPE_13__ {scalar_t__ extra_tx_headroom; } ;
struct ieee80211_local {TYPE_11__ hw; } ;
struct ieee80211_addba_ext_ie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct sk_buff*,struct ieee80211_addba_ext_ie const*) ;
 int FUNC_3 (TYPE_11__*,int ) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 struct ieee80211_mgmt* FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct sta_info *VAR_11, u8 *VAR_12, u16 VAR_13,
          u8 VAR_14, u16 VAR_15, u16 VAR_16,
          u16 VAR_17, u16 VAR_18,
          const struct ieee80211_addba_ext_ie *VAR_19)
{
 struct ieee80211_sub_if_data *VAR_20 = VAR_11->sdata;
 struct ieee80211_local *VAR_21 = VAR_20->local;
 struct sk_buff *VAR_22;
 struct ieee80211_mgmt *VAR_23;
 bool VAR_24 = FUNC_3(&VAR_21->hw, VAR_8);
 u16 VAR_25;

 VAR_22 = FUNC_1(sizeof(*VAR_23) +
      2 + sizeof(struct ieee80211_addba_ext_ie) +
      VAR_21->hw.extra_tx_headroom);
 if (!VAR_22)
  return;

 FUNC_8(VAR_22, VAR_21->hw.extra_tx_headroom);
 VAR_23 = FUNC_7(VAR_22, 24);
 FUNC_5(VAR_23->da, VAR_12, VAR_0);
 FUNC_5(VAR_23->sa, VAR_20->vif.addr, VAR_0);
 if (VAR_20->vif.type == VAR_4 ||
     VAR_20->vif.type == VAR_5 ||
     VAR_20->vif.type == VAR_6)
  FUNC_5(VAR_23->bssid, VAR_20->vif.addr, VAR_0);
 else if (VAR_20->vif.type == VAR_7)
  FUNC_5(VAR_23->bssid, VAR_20->u.mgd.bssid, VAR_0);
 else if (VAR_20->vif.type == VAR_3)
  FUNC_5(VAR_23->bssid, VAR_20->u.ibss.bssid, VAR_0);

 VAR_23->frame_control = FUNC_0(VAR_1 |
       VAR_2);

 FUNC_6(VAR_22, 1 + sizeof(VAR_23->u.action.u.addba_resp));
 VAR_23->u.action.category = VAR_10;
 VAR_23->u.action.u.addba_resp.action_code = VAR_9;
 VAR_23->u.action.u.addba_resp.dialog_token = VAR_14;

 VAR_25 = (u16)(VAR_24 << 0);
 VAR_25 |= (u16)(VAR_16 << 1);
 VAR_25 |= (u16)(VAR_13 << 2);
 VAR_25 |= (u16)(VAR_17 << 6);

 VAR_23->u.action.u.addba_resp.capab = FUNC_0(VAR_25);
 VAR_23->u.action.u.addba_resp.timeout = FUNC_0(VAR_18);
 VAR_23->u.action.u.addba_resp.status = FUNC_0(VAR_15);

 if (VAR_11->sta.he_cap.has_he && VAR_19)
  FUNC_2(VAR_20, VAR_22, VAR_19);

 FUNC_4(VAR_20, VAR_22);
}
