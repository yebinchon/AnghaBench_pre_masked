
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int beacon_rate; } ;
struct TYPE_5__ {TYPE_1__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; struct ieee80211_local* local; } ;
struct ieee80211_rx_status {int freq; } ;
struct ieee80211_mgmt {int dummy; } ;
struct TYPE_6__ {int wiphy; } ;
struct ieee80211_local {TYPE_3__ hw; } ;
struct ieee80211_channel {int dummy; } ;
struct ieee80211_bss {int beacon_rate; } ;


 struct ieee80211_bss* FUNC_0 (struct ieee80211_local*,struct ieee80211_rx_status*,struct ieee80211_mgmt*,size_t,struct ieee80211_channel*) ;
 struct ieee80211_channel* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_bss*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_sub_if_data *VAR_0,
      struct ieee80211_mgmt *VAR_1, size_t VAR_2,
      struct ieee80211_rx_status *VAR_3)
{
 struct ieee80211_local *VAR_4 = VAR_0->local;
 struct ieee80211_bss *VAR_5;
 struct ieee80211_channel *VAR_6;

 FUNC_3(VAR_0);

 VAR_6 = FUNC_1(VAR_4->hw.wiphy, VAR_3->freq);
 if (!VAR_6)
  return;

 VAR_5 = FUNC_0(VAR_4, VAR_3, VAR_1, VAR_2, VAR_6);
 if (VAR_5) {
  VAR_0->vif.bss_conf.beacon_rate = VAR_5->beacon_rate;
  FUNC_2(VAR_4, VAR_5);
 }
}
