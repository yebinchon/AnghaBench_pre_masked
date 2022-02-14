
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ht_supported; } ;
struct ieee80211_sta {int bandwidth; TYPE_1__ ht_cap; } ;
typedef enum nl80211_chan_width { ____Placeholder_nl80211_chan_width } nl80211_chan_width ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

enum nl80211_chan_width FUNC_1(struct ieee80211_sta *VAR_5)
{
 switch (VAR_5->bandwidth) {
 case 130:
  if (VAR_5->ht_cap.ht_supported)
   return VAR_1;
  else
   return VAR_2;
 case 129:
  return VAR_3;
 case 128:
  return VAR_4;
 case 131:
  return VAR_0;
 default:
  FUNC_0(1);
  return VAR_1;
 }
}
