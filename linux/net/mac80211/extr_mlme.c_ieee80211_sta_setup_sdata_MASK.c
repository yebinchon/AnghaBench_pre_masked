
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ps; } ;
struct ieee80211_if_managed {int p2p_noa_index; int * orig_teardown_skb; int * teardown_skb; int teardown_lock; int req_smps; int uapsd_max_sp_len; int uapsd_queues; int powersave; scalar_t__ flags; int tx_tspec_wk; int chswitch_timer; int conn_mon_timer; int bcn_mon_timer; int timer; int tdls_peer_del_work; int request_smps_work; int csa_connection_drop_work; int beacon_connection_loss_work; int chswitch_work; int monitor_work; } ;
struct TYPE_6__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_5__* local; TYPE_2__ wdev; TYPE_1__ u; } ;
struct TYPE_9__ {TYPE_3__* wiphy; int uapsd_max_sp_len; int uapsd_queues; } ;
struct TYPE_10__ {TYPE_4__ hw; } ;
struct TYPE_8__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;

void FUNC_4(struct ieee80211_sub_if_data *VAR_14)
{
 struct ieee80211_if_managed *VAR_15;

 VAR_15 = &VAR_14->u.mgd;
 FUNC_1(&VAR_15->monitor_work, VAR_11);
 FUNC_1(&VAR_15->chswitch_work, VAR_5);
 FUNC_1(&VAR_15->beacon_connection_loss_work,
    VAR_3);
 FUNC_1(&VAR_15->csa_connection_drop_work,
    VAR_6);
 FUNC_1(&VAR_15->request_smps_work, VAR_7);
 FUNC_0(&VAR_15->tdls_peer_del_work,
     VAR_13);
 FUNC_3(&VAR_15->timer, VAR_12, 0);
 FUNC_3(&VAR_15->bcn_mon_timer, VAR_8, 0);
 FUNC_3(&VAR_15->conn_mon_timer, VAR_9, 0);
 FUNC_3(&VAR_15->chswitch_timer, VAR_4, 0);
 FUNC_0(&VAR_15->tx_tspec_wk,
     VAR_10);

 VAR_15->flags = 0;
 VAR_15->powersave = VAR_14->wdev.ps;
 VAR_15->uapsd_queues = VAR_14->local->hw.uapsd_queues;
 VAR_15->uapsd_max_sp_len = VAR_14->local->hw.uapsd_max_sp_len;
 VAR_15->p2p_noa_index = -1;

 if (VAR_14->local->hw.wiphy->features & VAR_2)
  VAR_15->req_smps = VAR_0;
 else
  VAR_15->req_smps = VAR_1;


 FUNC_2(&VAR_15->teardown_lock);
 VAR_15->teardown_skb = ((void*)0);
 VAR_15->orig_teardown_skb = ((void*)0);
}
