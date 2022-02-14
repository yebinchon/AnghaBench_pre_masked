
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


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_8__ {int * position; int * membership; } ;
struct TYPE_10__ {int assoc; int qos; int * beacon_rate; scalar_t__ dtim_period; scalar_t__ arp_addr_cnt; TYPE_2__ mu_group; int p2p_noa_attr; } ;
struct TYPE_11__ {int mu_mimo_owner; int csa_active; TYPE_4__ bss_conf; } ;
struct ieee80211_if_managed {int have_beacon; int p2p_noa_index; int csa_waiting_bcn; int csa_ignored_same_chan; int tx_tspec_wk; int * tx_tspec; scalar_t__ flags; int chswitch_timer; int timer; int bcn_mon_timer; int conn_mon_timer; int vht_capa_mask; int vht_capa; int ht_capa_mask; int ht_capa; int bssid; int * associated; } ;
struct TYPE_9__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int csa_block_tx; int encrypt_headroom; TYPE_5__ vif; TYPE_3__ u; int ap_power_level; struct ieee80211_local* local; int dev; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_12__ {TYPE_1__ conf; } ;
struct ieee80211_local {int mtx; int dynamic_ps_enable_work; int dynamic_ps_timer; TYPE_6__ hw; int * ps_sdata; } ;


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
 int VAR_11 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_8 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int) ;
 scalar_t__ FUNC_9 (TYPE_6__*,int ) ;
 int FUNC_10 (struct ieee80211_local*,int ) ;
 int FUNC_11 (struct ieee80211_local*,int ) ;
 int FUNC_12 (struct ieee80211_sub_if_data*) ;
 int FUNC_13 (struct ieee80211_sub_if_data*) ;
 int FUNC_14 (struct ieee80211_sub_if_data*,int ,int ,int ,int ,int,int *) ;
 int FUNC_15 (struct ieee80211_sub_if_data*,int,int) ;
 int FUNC_16 (struct ieee80211_sub_if_data*) ;
 int FUNC_17 (struct ieee80211_sub_if_data*) ;
 int FUNC_18 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ) ;
 int FUNC_19 (int *,int ,int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (struct ieee80211_sub_if_data*) ;
 int FUNC_24 (struct ieee80211_sub_if_data*) ;
 int FUNC_25 () ;

__attribute__((used)) static void FUNC_26(struct ieee80211_sub_if_data *VAR_12,
       u16 VAR_13, u16 VAR_14, bool VAR_15,
       u8 *VAR_16)
{
 struct ieee80211_if_managed *VAR_17 = &VAR_12->u.mgd;
 struct ieee80211_local *VAR_18 = VAR_12->local;
 u32 VAR_19 = 0;

 FUNC_23(VAR_12);

 if (FUNC_1(VAR_15 && !VAR_16))
  return;

 if (FUNC_0(!VAR_17->associated))
  return;

 FUNC_16(VAR_12);

 VAR_17->associated = ((void*)0);
 FUNC_22(VAR_12->dev);






 if (VAR_18->hw.conf.flags & VAR_8) {
  VAR_18->hw.conf.flags &= ~VAR_8;
  FUNC_10(VAR_18, VAR_7);
 }
 VAR_18->ps_sdata = ((void*)0);


 FUNC_12(VAR_12);


 FUNC_25();







 if (VAR_15)
  FUNC_8(VAR_18, VAR_12, 1);


 if (VAR_15 || VAR_16) {






  if (FUNC_9(&VAR_18->hw, VAR_6) &&
      !VAR_17->have_beacon)
   FUNC_5(VAR_12->local, VAR_12, 0);

  FUNC_14(VAR_12, VAR_17->bssid,
            VAR_17->bssid, VAR_13, VAR_14,
            VAR_15, VAR_16);
 }


 if (VAR_15)
  FUNC_8(VAR_18, VAR_12, 0);


 FUNC_6(VAR_17->bssid);


 FUNC_24(VAR_12);


 VAR_19 |= FUNC_13(VAR_12);

 FUNC_11(VAR_18, 0);
 VAR_19 |= VAR_1;
 VAR_12->vif.bss_conf.assoc = 0;

 VAR_17->p2p_noa_index = -1;
 FUNC_19(&VAR_12->vif.bss_conf.p2p_noa_attr, 0,
        sizeof(VAR_12->vif.bss_conf.p2p_noa_attr));


 FUNC_19(&VAR_17->ht_capa, 0, sizeof(VAR_17->ht_capa));
 FUNC_19(&VAR_17->ht_capa_mask, 0, sizeof(VAR_17->ht_capa_mask));
 FUNC_19(&VAR_17->vht_capa, 0, sizeof(VAR_17->vht_capa));
 FUNC_19(&VAR_17->vht_capa_mask, 0, sizeof(VAR_17->vht_capa_mask));


 FUNC_19(VAR_12->vif.bss_conf.mu_group.membership, 0,
        sizeof(VAR_12->vif.bss_conf.mu_group.membership));
 FUNC_19(VAR_12->vif.bss_conf.mu_group.position, 0,
        sizeof(VAR_12->vif.bss_conf.mu_group.position));
 VAR_19 |= VAR_4;
 VAR_12->vif.mu_mimo_owner = 0;

 VAR_12->ap_power_level = VAR_11;

 FUNC_4(&VAR_18->dynamic_ps_timer);
 FUNC_3(&VAR_18->dynamic_ps_enable_work);


 if (VAR_12->vif.bss_conf.arp_addr_cnt)
  VAR_19 |= VAR_0;

 VAR_12->vif.bss_conf.qos = 0;
 VAR_19 |= VAR_5;


 VAR_19 |= VAR_2 | VAR_3;
 FUNC_7(VAR_12, VAR_19);


 FUNC_15(VAR_12, 0, 0);

 FUNC_4(&VAR_12->u.mgd.conn_mon_timer);
 FUNC_4(&VAR_12->u.mgd.bcn_mon_timer);
 FUNC_4(&VAR_12->u.mgd.timer);
 FUNC_4(&VAR_12->u.mgd.chswitch_timer);

 VAR_12->vif.bss_conf.dtim_period = 0;
 VAR_12->vif.bss_conf.beacon_rate = ((void*)0);

 VAR_17->have_beacon = 0;

 VAR_17->flags = 0;
 FUNC_20(&VAR_18->mtx);
 FUNC_17(VAR_12);

 VAR_12->vif.csa_active = 0;
 VAR_17->csa_waiting_bcn = 0;
 VAR_17->csa_ignored_same_chan = 0;
 if (VAR_12->csa_block_tx) {
  FUNC_18(VAR_18, VAR_12,
       VAR_10);
  VAR_12->csa_block_tx = 0;
 }
 FUNC_21(&VAR_18->mtx);


 FUNC_19(VAR_17->tx_tspec, 0, sizeof(VAR_17->tx_tspec));
 FUNC_2(&VAR_17->tx_tspec_wk);

 VAR_12->encrypt_headroom = VAR_9;
}
