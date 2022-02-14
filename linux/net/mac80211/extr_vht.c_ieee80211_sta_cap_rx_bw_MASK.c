
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int cap; } ;
struct ieee80211_sta_vht_cap {int cap; int vht_supported; } ;
struct TYPE_4__ {TYPE_1__ ht_cap; struct ieee80211_sta_vht_cap vht_cap; } ;
struct sta_info {TYPE_2__ sta; } ;
typedef enum ieee80211_sta_rx_bandwidth { ____Placeholder_ieee80211_sta_rx_bandwidth } ieee80211_sta_rx_bandwidth ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

enum ieee80211_sta_rx_bandwidth FUNC_0(struct sta_info *VAR_9)
{
 struct ieee80211_sta_vht_cap *VAR_10 = &VAR_9->sta.vht_cap;
 u32 VAR_11;

 if (!VAR_10->vht_supported)
  return VAR_9->sta.ht_cap.cap & VAR_0 ?
    VAR_3 :
    VAR_2;

 VAR_11 = VAR_10->cap & VAR_8;

 if (VAR_11 == VAR_6 ||
     VAR_11 == VAR_7)
  return VAR_1;






 if (VAR_10->cap & VAR_5)
  return VAR_1;

 return VAR_4;
}
