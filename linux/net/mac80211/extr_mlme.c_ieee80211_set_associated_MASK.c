
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int index; } ;
struct ieee80211_bss_conf {int beacon_int; int dtim_period; int assoc; scalar_t__ arp_addr_cnt; scalar_t__ cqm_rssi_thold; int * beacon_rate; TYPE_1__ p2p_noa_attr; int assoc_capability; } ;
struct TYPE_8__ {int driver_flags; scalar_t__ p2p; struct ieee80211_bss_conf bss_conf; } ;
struct TYPE_6__ {scalar_t__ dtim_period; scalar_t__ have_beacon; int p2p_noa_index; int flags; int bssid; struct cfg80211_bss* associated; int beacon_timeout; } ;
struct TYPE_7__ {TYPE_2__ mgd; } ;
struct ieee80211_sub_if_data {int dev; TYPE_4__ vif; TYPE_3__ u; struct ieee80211_local* local; } ;
struct ieee80211_local {int iflist_mtx; } ;
struct ieee80211_bss {int * beacon_rate; int erp_value; int has_erp_value; } ;
struct cfg80211_bss_ies {int len; int data; } ;
struct cfg80211_bss {int ies; int bssid; scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int ,int *,int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,int ,int ,int ) ;
 int FUNC_4 (struct ieee80211_local*,int) ;
 int FUNC_5 (struct ieee80211_local*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*) ;
 int FUNC_7 (struct ieee80211_sub_if_data*) ;
 int FUNC_8 (struct ieee80211_sub_if_data*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 struct cfg80211_bss_ies* FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(struct ieee80211_sub_if_data *VAR_11,
         struct cfg80211_bss *VAR_12,
         u32 VAR_13)
{
 struct ieee80211_bss *VAR_14 = (void *)VAR_12->priv;
 struct ieee80211_local *VAR_15 = VAR_11->local;
 struct ieee80211_bss_conf *VAR_16 = &VAR_11->vif.bss_conf;

 VAR_13 |= VAR_1;
 VAR_13 |= FUNC_3(VAR_11,
  VAR_16->assoc_capability, VAR_14->has_erp_value, VAR_14->erp_value);

 VAR_11->u.mgd.beacon_timeout = FUNC_17(FUNC_9(
  VAR_10 * VAR_16->beacon_int));

 VAR_11->u.mgd.associated = VAR_12;
 FUNC_10(VAR_11->u.mgd.bssid, VAR_12->bssid, VAR_5);

 FUNC_2(VAR_11);

 VAR_11->u.mgd.flags |= VAR_7;

 if (VAR_11->vif.p2p ||
     VAR_11->vif.driver_flags & VAR_8) {
  const struct cfg80211_bss_ies *VAR_17;

  FUNC_15();
  VAR_17 = FUNC_14(VAR_12->ies);
  if (VAR_17) {
   int VAR_18;

   VAR_18 = FUNC_0(
     VAR_17->data, VAR_17->len,
     VAR_6,
     (u8 *) &VAR_16->p2p_noa_attr,
     sizeof(VAR_16->p2p_noa_attr));
   if (VAR_18 >= 2) {
    VAR_11->u.mgd.p2p_noa_index =
     VAR_16->p2p_noa_attr.index;
    VAR_13 |= VAR_4;
   }
  }
  FUNC_16();
 }


 FUNC_8(VAR_11);

 FUNC_4(VAR_15, 1);

 if (VAR_11->u.mgd.have_beacon) {






  VAR_16->dtim_period = VAR_11->u.mgd.dtim_period ?: 1;
  VAR_16->beacon_rate = VAR_14->beacon_rate;
  VAR_13 |= VAR_2;
 } else {
  VAR_16->beacon_rate = ((void*)0);
  VAR_16->dtim_period = 0;
 }

 VAR_16->assoc = 1;


 if (VAR_11->vif.driver_flags & VAR_9 &&
     VAR_16->cqm_rssi_thold)
  VAR_13 |= VAR_3;


 if (VAR_16->arp_addr_cnt)
  VAR_13 |= VAR_0;

 FUNC_1(VAR_11, VAR_13);

 FUNC_11(&VAR_15->iflist_mtx);
 FUNC_5(VAR_15);
 FUNC_12(&VAR_15->iflist_mtx);

 FUNC_7(VAR_11);
 FUNC_6(VAR_11);

 FUNC_13(VAR_11->dev);
}
