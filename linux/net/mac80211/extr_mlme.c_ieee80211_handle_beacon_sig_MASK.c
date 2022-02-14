
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int driver_flags; } ;
struct ieee80211_sub_if_data {TYPE_3__ vif; } ;
struct ieee80211_rx_status {int signal; } ;
struct ieee80211_local {int dummy; } ;
struct ieee80211_if_managed {int flags; int last_cqm_event_signal; int count_beacon_signal; int last_ave_beacon_signal; scalar_t__ rssi_min_thold; scalar_t__ rssi_max_thold; int ave_beacon_signal; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_5__ {TYPE_1__ rssi; } ;
struct ieee80211_event {TYPE_2__ u; int type; } ;
struct ieee80211_bss_conf {int cqm_rssi_thold; int cqm_rssi_hyst; int cqm_rssi_low; int cqm_rssi_high; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct ieee80211_event*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,int ,int,int ) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_sub_if_data *VAR_9,
     struct ieee80211_if_managed *VAR_10,
     struct ieee80211_bss_conf *VAR_11,
     struct ieee80211_local *VAR_12,
     struct ieee80211_rx_status *VAR_13)
{


 if (VAR_10->flags & VAR_2) {
  VAR_10->flags &= ~VAR_2;
  FUNC_2(&VAR_10->ave_beacon_signal);
  VAR_10->last_cqm_event_signal = 0;
  VAR_10->count_beacon_signal = 1;
  VAR_10->last_ave_beacon_signal = 0;
 } else {
  VAR_10->count_beacon_signal++;
 }

 FUNC_1(&VAR_10->ave_beacon_signal, -VAR_13->signal);

 if (VAR_10->rssi_min_thold != VAR_10->rssi_max_thold &&
     VAR_10->count_beacon_signal >= VAR_1) {
  int VAR_14 = -FUNC_3(&VAR_10->ave_beacon_signal);
  int VAR_15 = VAR_10->last_ave_beacon_signal;
  struct ieee80211_event VAR_16 = {
   .type = VAR_6,
  };





  if (VAR_14 > VAR_10->rssi_max_thold &&
      (VAR_15 <= VAR_10->rssi_min_thold || VAR_15 == 0)) {
   VAR_10->last_ave_beacon_signal = VAR_14;
   VAR_16.u.rssi.data = VAR_7;
   FUNC_0(VAR_12, VAR_9, &VAR_16);
  } else if (VAR_14 < VAR_10->rssi_min_thold &&
      (VAR_15 >= VAR_10->rssi_max_thold ||
      VAR_15 == 0)) {
   VAR_10->last_ave_beacon_signal = VAR_14;
   VAR_16.u.rssi.data = VAR_8;
   FUNC_0(VAR_12, VAR_9, &VAR_16);
  }
 }

 if (VAR_11->cqm_rssi_thold &&
     VAR_10->count_beacon_signal >= VAR_1 &&
     !(VAR_9->vif.driver_flags & VAR_3)) {
  int VAR_17 = -FUNC_3(&VAR_10->ave_beacon_signal);
  int VAR_18 = VAR_10->last_cqm_event_signal;
  int VAR_19 = VAR_11->cqm_rssi_thold;
  int VAR_20 = VAR_11->cqm_rssi_hyst;

  if (VAR_17 < VAR_19 &&
      (VAR_18 == 0 || VAR_17 < VAR_18 - VAR_20)) {
   VAR_10->last_cqm_event_signal = VAR_17;
   FUNC_4(
    &VAR_9->vif,
    VAR_5,
    VAR_17, VAR_0);
  } else if (VAR_17 > VAR_19 &&
      (VAR_18 == 0 || VAR_17 > VAR_18 + VAR_20)) {
   VAR_10->last_cqm_event_signal = VAR_17;
   FUNC_4(
    &VAR_9->vif,
    VAR_4,
    VAR_17, VAR_0);
  }
 }

 if (VAR_11->cqm_rssi_low &&
     VAR_10->count_beacon_signal >= VAR_1) {
  int VAR_21 = -FUNC_3(&VAR_10->ave_beacon_signal);
  int VAR_22 = VAR_10->last_cqm_event_signal;
  int VAR_23 = VAR_11->cqm_rssi_low;
  int VAR_24 = VAR_11->cqm_rssi_high;

  if (VAR_21 < VAR_23 &&
      (VAR_22 == 0 || VAR_22 >= VAR_23)) {
   VAR_10->last_cqm_event_signal = VAR_21;
   FUNC_4(
    &VAR_9->vif,
    VAR_5,
    VAR_21, VAR_0);
  } else if (VAR_21 > VAR_24 &&
      (VAR_22 == 0 || VAR_22 <= VAR_24)) {
   VAR_10->last_cqm_event_signal = VAR_21;
   FUNC_4(
    &VAR_9->vif,
    VAR_4,
    VAR_21, VAR_0);
  }
 }
}
