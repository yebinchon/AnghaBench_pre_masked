
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


struct sk_buff {int dummy; } ;
struct TYPE_11__ {int bssid; } ;
struct TYPE_12__ {TYPE_3__ mgd; } ;
struct TYPE_10__ {int addr; } ;
struct ieee80211_sub_if_data {TYPE_4__ u; TYPE_2__ vif; struct ieee80211_local* local; } ;
struct TYPE_13__ {int trans_id; int action; } ;
struct TYPE_14__ {TYPE_5__ sa_query; } ;
struct TYPE_15__ {TYPE_6__ u; int category; } ;
struct TYPE_16__ {TYPE_7__ action; } ;
struct ieee80211_mgmt {TYPE_8__ u; int frame_control; int bssid; int sa; int da; } ;
struct TYPE_9__ {scalar_t__ extra_tx_headroom; } ;
struct ieee80211_local {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*,int) ;
 struct ieee80211_mgmt* FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_sub_if_data *VAR_6,
        struct ieee80211_mgmt *VAR_7,
        size_t VAR_8)
{
 struct ieee80211_local *VAR_9 = VAR_6->local;
 struct sk_buff *VAR_10;
 struct ieee80211_mgmt *VAR_11;

 if (!FUNC_2(VAR_7->da, VAR_6->vif.addr)) {

  return;
 }

 if (!FUNC_2(VAR_7->sa, VAR_6->u.mgd.bssid) ||
     !FUNC_2(VAR_7->bssid, VAR_6->u.mgd.bssid)) {

  return;
 }

 if (VAR_8 < 24 + 1 + sizeof(VAR_11->u.action.u.sa_query)) {

  return;
 }

 VAR_10 = FUNC_1(sizeof(*VAR_11) + VAR_9->hw.extra_tx_headroom);
 if (VAR_10 == ((void*)0))
  return;

 FUNC_7(VAR_10, VAR_9->hw.extra_tx_headroom);
 VAR_11 = FUNC_6(VAR_10, 24);
 FUNC_4(VAR_11->da, VAR_7->sa, VAR_0);
 FUNC_4(VAR_11->sa, VAR_6->vif.addr, VAR_0);
 FUNC_4(VAR_11->bssid, VAR_6->u.mgd.bssid, VAR_0);
 VAR_11->frame_control = FUNC_0(VAR_1 |
       VAR_2);
 FUNC_5(VAR_10, 1 + sizeof(VAR_11->u.action.u.sa_query));
 VAR_11->u.action.category = VAR_4;
 VAR_11->u.action.u.sa_query.action = VAR_3;
 FUNC_4(VAR_11->u.action.u.sa_query.trans_id,
        VAR_7->u.action.u.sa_query.trans_id,
        VAR_5);

 FUNC_3(VAR_6, VAR_10);
}
