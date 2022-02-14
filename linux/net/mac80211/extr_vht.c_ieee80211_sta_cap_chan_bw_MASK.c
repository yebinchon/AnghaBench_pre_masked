
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int cap; int ht_supported; } ;
struct ieee80211_sta_vht_cap {int cap; int vht_supported; } ;
struct TYPE_4__ {TYPE_1__ ht_cap; struct ieee80211_sta_vht_cap vht_cap; } ;
struct sta_info {TYPE_2__ sta; } ;
typedef enum nl80211_chan_width { ____Placeholder_nl80211_chan_width } nl80211_chan_width ;


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

enum nl80211_chan_width FUNC_0(struct sta_info *VAR_10)
{
 struct ieee80211_sta_vht_cap *VAR_11 = &VAR_10->sta.vht_cap;
 u32 VAR_12;

 if (!VAR_11->vht_supported) {
  if (!VAR_10->sta.ht_cap.ht_supported)
   return VAR_6;

  return VAR_10->sta.ht_cap.cap & VAR_0 ?
    VAR_7 : VAR_5;
 }

 VAR_12 = VAR_11->cap & VAR_3;

 if (VAR_12 == VAR_1)
  return VAR_4;
 else if (VAR_12 == VAR_2)
  return VAR_9;

 return VAR_8;
}
