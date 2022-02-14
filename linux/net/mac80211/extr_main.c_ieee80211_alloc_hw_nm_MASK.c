
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int flags; int features; int bss_priv_size; int extended_capabilities_len; int * extended_capabilities_mask; int * extended_capabilities; int * vht_capa_mod_mask; int * ht_capa_mod_mask; int retry_short; int retry_long; int privid; int mgmt_stypes; } ;
struct ieee80211_ops {scalar_t__ wake_tx_queue; int set_key; int hw_scan; scalar_t__ remain_on_channel; int unassign_vif_chanctx; int assign_vif_chanctx; int change_chanctx; int remove_chanctx; int add_chanctx; scalar_t__ sta_remove; scalar_t__ sta_add; scalar_t__ sta_state; int configure_filter; int remove_interface; int add_interface; int config; int stop; int start; int tx; } ;
struct TYPE_4__ {int units_pos; int accuracy; } ;
struct TYPE_3__ {int short_frame_max_tx_count; int long_frame_max_tx_count; } ;
struct ieee80211_hw {char* priv; int tx_sk_pacing_shift; int queues; int max_rates; int radiotap_mcs_details; int radiotap_vht_details; TYPE_2__ radiotap_timestamp; int max_mtu; int uapsd_max_sp_len; int uapsd_queues; TYPE_1__ conf; int offchannel_tx_hw_queue; void* max_tx_aggregation_subframes; void* max_rx_aggregation_subframes; scalar_t__ max_report_rates; struct wiphy* wiphy; } ;
struct ieee80211_local {int use_chanctx; int airtime_flags; struct ieee80211_hw hw; int skb_queue_tdls_chsw; int skb_queue_unreliable; int skb_queue; int tasklet; int wake_txqs_tasklet; int tx_pending_tasklet; int * agg_queue_stop; int * pending; int ack_status_frames; int ack_status_lock; int tdls_chsw_work; int sched_scan_stopped_work; int dynamic_ps_timer; int dynamic_ps_disable_work; int dynamic_ps_enable_work; int smps_mode; int reconfig_filter; int radar_detected_work; int restart_work; int scan_work; int chanctx_mtx; int chanctx_list; int * active_txq_lock; int * active_txqs; int queue_stop_reason_lock; int rx_path_lock; int filter_lock; int key_mtx; int mtx; int iflist_mtx; int mc_list; int mon_list; int interfaces; int * ext_capa; int user_power_level; struct ieee80211_ops const* ops; } ;
struct ieee80211_bss {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ieee80211_local*) ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_10 (struct ieee80211_local*) ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct ieee80211_local*) ;
 int FUNC_15 (int *,int ,unsigned long) ;
 int FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (struct wiphy*,int ) ;
 int FUNC_18 (struct wiphy*) ;
 struct wiphy* FUNC_19 (int *,int,char const*) ;
 struct ieee80211_local* FUNC_20 (struct wiphy*) ;

struct ieee80211_hw *FUNC_21(size_t VAR_57,
        const struct ieee80211_ops *VAR_58,
        const char *VAR_59)
{
 struct ieee80211_local *VAR_60;
 int VAR_61, VAR_62;
 struct wiphy *VAR_63;
 bool VAR_64;

 if (FUNC_5(!VAR_58->tx || !VAR_58->start || !VAR_58->stop || !VAR_58->config ||
      !VAR_58->add_interface || !VAR_58->remove_interface ||
      !VAR_58->configure_filter))
  return ((void*)0);

 if (FUNC_5(VAR_58->sta_state && (VAR_58->sta_add || VAR_58->sta_remove)))
  return ((void*)0);


 VAR_62 = !!VAR_58->add_chanctx + !!VAR_58->remove_chanctx +
     !!VAR_58->change_chanctx + !!VAR_58->assign_vif_chanctx +
     !!VAR_58->unassign_vif_chanctx;
 if (FUNC_5(VAR_62 != 0 && VAR_62 != 5))
  return ((void*)0);
 VAR_64 = VAR_62 == 5;
 VAR_61 = FUNC_0(sizeof(*VAR_60), VAR_16) + VAR_57;

 VAR_63 = FUNC_19(&VAR_53, VAR_61, VAR_59);

 if (!VAR_63)
  return ((void*)0);

 VAR_63->mgmt_stypes = VAR_40;

 VAR_63->privid = VAR_56;

 VAR_63->flags |= VAR_36 |
   VAR_32 |
   VAR_33 |
   VAR_38 |
   VAR_37;

 if (VAR_58->remain_on_channel)
  VAR_63->flags |= VAR_34;

 VAR_63->features |= VAR_29 |
      VAR_28 |
      VAR_25 |
      VAR_31 |
      VAR_27 |
      VAR_30 |
      VAR_24;
 FUNC_17(VAR_63, VAR_18);
 FUNC_17(VAR_63,
         VAR_17);

 if (!VAR_58->hw_scan) {
  VAR_63->features |= VAR_26 |
       VAR_23;





  FUNC_17(VAR_63,
          VAR_21);
  FUNC_17(VAR_63,
          VAR_20);
 }

 if (!VAR_58->set_key)
  VAR_63->flags |= VAR_35;

 if (VAR_58->wake_tx_queue)
  FUNC_17(VAR_63, VAR_22);

 FUNC_17(VAR_63, VAR_19);

 VAR_63->bss_priv_size = sizeof(struct ieee80211_bss);

 VAR_60 = FUNC_20(VAR_63);

 if (FUNC_14(VAR_60))
  goto err_free;

 VAR_60->hw.wiphy = VAR_63;

 VAR_60->hw.priv = (char *)VAR_60 + FUNC_0(sizeof(*VAR_60), VAR_16);

 VAR_60->ops = VAR_58;
 VAR_60->use_chanctx = VAR_64;
 VAR_60->hw.tx_sk_pacing_shift = 7;


 VAR_60->hw.queues = 1;
 VAR_60->hw.max_rates = 1;
 VAR_60->hw.max_report_rates = 0;
 VAR_60->hw.max_rx_aggregation_subframes = VAR_5;
 VAR_60->hw.max_tx_aggregation_subframes = VAR_5;
 VAR_60->hw.offchannel_tx_hw_queue = VAR_4;
 VAR_60->hw.conf.long_frame_max_tx_count = VAR_63->retry_long;
 VAR_60->hw.conf.short_frame_max_tx_count = VAR_63->retry_short;
 VAR_60->hw.radiotap_mcs_details = VAR_11 |
      VAR_10 |
      VAR_9;
 VAR_60->hw.radiotap_vht_details = VAR_13 |
      VAR_12;
 VAR_60->hw.uapsd_queues = VAR_3;
 VAR_60->hw.uapsd_max_sp_len = VAR_2;
 VAR_60->hw.max_mtu = VAR_6;
 VAR_60->user_power_level = VAR_15;
 VAR_63->ht_capa_mod_mask = &VAR_54;
 VAR_63->vht_capa_mod_mask = &VAR_55;

 VAR_60->ext_capa[7] = VAR_39;

 VAR_63->extended_capabilities = VAR_60->ext_capa;
 VAR_63->extended_capabilities_mask = VAR_60->ext_capa;
 VAR_63->extended_capabilities_len =
  FUNC_1(VAR_60->ext_capa);

 FUNC_3(&VAR_60->interfaces);
 FUNC_3(&VAR_60->mon_list);

 FUNC_6(&VAR_60->mc_list);

 FUNC_11(&VAR_60->iflist_mtx);
 FUNC_11(&VAR_60->mtx);

 FUNC_11(&VAR_60->key_mtx);
 FUNC_13(&VAR_60->filter_lock);
 FUNC_13(&VAR_60->rx_path_lock);
 FUNC_13(&VAR_60->queue_stop_reason_lock);

 for (VAR_62 = 0; VAR_62 < VAR_8; VAR_62++) {
  FUNC_3(&VAR_60->active_txqs[VAR_62]);
  FUNC_13(&VAR_60->active_txq_lock[VAR_62]);
 }
 VAR_60->airtime_flags = VAR_1 | VAR_0;

 FUNC_3(&VAR_60->chanctx_list);
 FUNC_11(&VAR_60->chanctx_mtx);

 FUNC_2(&VAR_60->scan_work, VAR_47);

 FUNC_4(&VAR_60->restart_work, VAR_46);

 FUNC_4(&VAR_60->radar_detected_work,
    VAR_41);

 FUNC_4(&VAR_60->reconfig_filter, VAR_45);
 VAR_60->smps_mode = VAR_14;

 FUNC_4(&VAR_60->dynamic_ps_enable_work,
    VAR_43);
 FUNC_4(&VAR_60->dynamic_ps_disable_work,
    VAR_42);
 FUNC_16(&VAR_60->dynamic_ps_timer, VAR_44, 0);

 FUNC_4(&VAR_60->sched_scan_stopped_work,
    VAR_48);

 FUNC_4(&VAR_60->tdls_chsw_work, VAR_50);

 FUNC_13(&VAR_60->ack_status_lock);
 FUNC_8(&VAR_60->ack_status_frames);

 for (VAR_62 = 0; VAR_62 < VAR_7; VAR_62++) {
  FUNC_12(&VAR_60->pending[VAR_62]);
  FUNC_7(&VAR_60->agg_queue_stop[VAR_62], 0);
 }
 FUNC_15(&VAR_60->tx_pending_tasklet, VAR_51,
       (unsigned long)VAR_60);

 if (VAR_58->wake_tx_queue)
  FUNC_15(&VAR_60->wake_txqs_tasklet, VAR_52,
        (unsigned long)VAR_60);

 FUNC_15(&VAR_60->tasklet,
       VAR_49,
       (unsigned long) VAR_60);

 FUNC_12(&VAR_60->skb_queue);
 FUNC_12(&VAR_60->skb_queue_unreliable);
 FUNC_12(&VAR_60->skb_queue_tdls_chsw);

 FUNC_9(VAR_60);

 FUNC_10(VAR_60);

 VAR_60->hw.radiotap_timestamp.units_pos = -1;
 VAR_60->hw.radiotap_timestamp.accuracy = -1;

 return &VAR_60->hw;
 err_free:
 FUNC_18(VAR_63);
 return ((void*)0);
}
