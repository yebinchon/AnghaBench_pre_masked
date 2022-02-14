
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee80211_bss_conf {scalar_t__ cqm_rssi_hyst; scalar_t__ cqm_rssi_thold; void* cqm_rssi_high; void* cqm_rssi_low; } ;
struct ieee80211_vif {int driver_flags; struct ieee80211_bss_conf bss_conf; } ;
struct TYPE_3__ {scalar_t__ associated; scalar_t__ last_cqm_event_signal; } ;
struct TYPE_4__ {TYPE_1__ mgd; } ;
struct ieee80211_sub_if_data {struct ieee80211_vif vif; TYPE_2__ u; } ;
typedef void* s32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_4,
            struct net_device *VAR_5,
            s32 VAR_6, s32 VAR_7)
{
 struct ieee80211_sub_if_data *VAR_8 = FUNC_0(VAR_5);
 struct ieee80211_vif *VAR_9 = &VAR_8->vif;
 struct ieee80211_bss_conf *VAR_10 = &VAR_9->bss_conf;

 if (VAR_8->vif.driver_flags & VAR_2)
  return -VAR_1;

 VAR_10->cqm_rssi_low = VAR_6;
 VAR_10->cqm_rssi_high = VAR_7;
 VAR_10->cqm_rssi_thold = 0;
 VAR_10->cqm_rssi_hyst = 0;
 VAR_8->u.mgd.last_cqm_event_signal = 0;


 if (VAR_8->u.mgd.associated &&
     VAR_8->vif.driver_flags & VAR_3)
  FUNC_1(VAR_8, VAR_0);

 return 0;
}
