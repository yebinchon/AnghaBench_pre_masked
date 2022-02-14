
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sta_info {int cur_max_bandwidth; struct ieee80211_sub_if_data* sdata; } ;
struct TYPE_4__ {int width; } ;
struct TYPE_5__ {TYPE_1__ chandef; } ;
struct TYPE_6__ {TYPE_2__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_3__ vif; } ;
typedef enum nl80211_chan_width { ____Placeholder_nl80211_chan_width } nl80211_chan_width ;
typedef enum ieee80211_sta_rx_bandwidth { ____Placeholder_ieee80211_sta_rx_bandwidth } ieee80211_sta_rx_bandwidth ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sta_info*) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct sta_info*,int ) ;

enum ieee80211_sta_rx_bandwidth FUNC_4(struct sta_info *VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 = VAR_2->sdata;
 enum ieee80211_sta_rx_bandwidth VAR_4;
 enum nl80211_chan_width VAR_5 = VAR_3->vif.bss_conf.chandef.width;

 VAR_4 = FUNC_1(VAR_2);
 VAR_4 = FUNC_2(VAR_4, VAR_2->cur_max_bandwidth);






 if (FUNC_3(VAR_2, VAR_0) &&
     FUNC_3(VAR_2, VAR_1))
  return VAR_4;

 VAR_4 = FUNC_2(VAR_4, FUNC_0(VAR_5));

 return VAR_4;
}
