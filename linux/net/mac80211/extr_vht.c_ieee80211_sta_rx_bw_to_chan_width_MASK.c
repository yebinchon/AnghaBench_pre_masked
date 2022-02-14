
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int ht_supported; } ;
struct ieee80211_sta_vht_cap {int cap; } ;
struct TYPE_4__ {int bandwidth; TYPE_1__ ht_cap; struct ieee80211_sta_vht_cap vht_cap; } ;
struct sta_info {TYPE_2__ sta; } ;
typedef enum nl80211_chan_width { ____Placeholder_nl80211_chan_width } nl80211_chan_width ;
typedef enum ieee80211_sta_rx_bandwidth { ____Placeholder_ieee80211_sta_rx_bandwidth } ieee80211_sta_rx_bandwidth ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

enum nl80211_chan_width
FUNC_0(struct sta_info *VAR_8)
{
 enum ieee80211_sta_rx_bandwidth VAR_9 = VAR_8->sta.bandwidth;
 struct ieee80211_sta_vht_cap *VAR_10 = &VAR_8->sta.vht_cap;
 u32 VAR_11;

 switch (VAR_9) {
 case 130:
  if (!VAR_8->sta.ht_cap.ht_supported)
   return VAR_4;
  else
   return VAR_3;
 case 129:
  return VAR_5;
 case 128:
  return VAR_6;
 case 131:
  VAR_11 =
   VAR_10->cap & VAR_1;

  if (VAR_11 == VAR_0)
   return VAR_2;

  return VAR_7;
 default:
  return VAR_3;
 }
}
