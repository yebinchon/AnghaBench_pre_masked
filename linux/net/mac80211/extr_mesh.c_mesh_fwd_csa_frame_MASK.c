
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee802_11_elems {TYPE_1__* mesh_chansw_params_ie; } ;
struct TYPE_4__ {struct ieee80211_mgmt* addr; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; struct ieee80211_local* local; } ;
struct ieee80211_mgmt {struct ieee80211_mgmt* bssid; struct ieee80211_mgmt* sa; int da; } ;
struct ieee80211_local {scalar_t__ tx_headroom; } ;
struct TYPE_3__ {int mesh_flags; int mesh_ttl; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_3 (struct ieee80211_mgmt*,struct ieee80211_mgmt*,size_t) ;
 struct ieee80211_mgmt* FUNC_4 (struct sk_buff*,size_t) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_sub_if_data *VAR_3,
          struct ieee80211_mgmt *VAR_4, size_t VAR_5,
          struct ieee802_11_elems *VAR_6)
{
 struct ieee80211_mgmt *VAR_7;
 struct sk_buff *VAR_8;
 struct ieee80211_local *VAR_9 = VAR_3->local;

 VAR_8 = FUNC_0(VAR_9->tx_headroom + VAR_5);
 if (!VAR_8)
  return -VAR_0;
 FUNC_5(VAR_8, VAR_9->tx_headroom);
 VAR_7 = FUNC_4(VAR_8, VAR_5);

 VAR_6->mesh_chansw_params_ie->mesh_ttl--;
 VAR_6->mesh_chansw_params_ie->mesh_flags &=
  ~VAR_2;

 FUNC_3(VAR_7, VAR_4, VAR_5);
 FUNC_1(VAR_7->da);
 FUNC_3(VAR_7->sa, VAR_3->vif.addr, VAR_1);
 FUNC_3(VAR_7->bssid, VAR_3->vif.addr, VAR_1);

 FUNC_2(VAR_3, VAR_8);
 return 0;
}
