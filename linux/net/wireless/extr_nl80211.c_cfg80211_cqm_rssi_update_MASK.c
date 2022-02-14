
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct wireless_dev {TYPE_4__* cqm_config; TYPE_3__* current_bss; } ;
struct station_info {int filled; scalar_t__ rx_beacon_signal_avg; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
typedef scalar_t__ s8 ;
typedef scalar_t__ s32 ;
struct TYPE_8__ {scalar_t__ last_rssi_event_value; scalar_t__ rssi_hyst; int n_rssi_thresholds; scalar_t__* rssi_thresholds; } ;
struct TYPE_6__ {int * bssid; } ;
struct TYPE_7__ {TYPE_2__ pub; } ;
struct TYPE_5__ {scalar_t__ get_station; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct net_device*,int *,struct station_info*) ;
 int FUNC_3 (struct cfg80211_registered_device*,struct net_device*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct cfg80211_registered_device *VAR_3,
        struct net_device *VAR_4)
{
 struct wireless_dev *VAR_5 = VAR_4->ieee80211_ptr;
 s32 VAR_6, VAR_7, VAR_8;
 u32 VAR_9;
 int VAR_10, VAR_11, VAR_12;
 int VAR_13;


 if (!VAR_5->cqm_config)
  return FUNC_3(VAR_3, VAR_4, 0, 0);







 if (!VAR_5->cqm_config->last_rssi_event_value && VAR_5->current_bss &&
     VAR_3->ops->get_station) {
  struct station_info VAR_14 = {};
  u8 *VAR_15;

  VAR_15 = VAR_5->current_bss->pub.bssid;

  VAR_13 = FUNC_2(VAR_3, VAR_4, VAR_15, &VAR_14);
  if (VAR_13)
   return VAR_13;

  if (VAR_14.filled & FUNC_0(VAR_0))
   VAR_5->cqm_config->last_rssi_event_value =
    (s8) VAR_14.rx_beacon_signal_avg;
 }

 VAR_6 = VAR_5->cqm_config->last_rssi_event_value;
 VAR_9 = VAR_5->cqm_config->rssi_hyst;
 VAR_11 = VAR_5->cqm_config->n_rssi_thresholds;

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  VAR_10 = FUNC_1(VAR_10, VAR_11);
  if (VAR_6 < VAR_5->cqm_config->rssi_thresholds[VAR_10])
   break;
 }

 VAR_12 = VAR_10 - 1;
 if (VAR_12 >= 0) {
  VAR_12 = FUNC_1(VAR_12, VAR_11);
  VAR_7 = VAR_5->cqm_config->rssi_thresholds[VAR_12] - VAR_9;
 } else {
  VAR_7 = VAR_2;
 }
 if (VAR_10 < VAR_11) {
  VAR_10 = FUNC_1(VAR_10, VAR_11);
  VAR_8 = VAR_5->cqm_config->rssi_thresholds[VAR_10] + VAR_9 - 1;
 } else {
  VAR_8 = VAR_1;
 }

 return FUNC_3(VAR_3, VAR_4, VAR_7, VAR_8);
}
