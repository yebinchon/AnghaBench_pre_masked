
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_tdls_ch_sw_params {int dummy; } ;
struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* tdls_recv_channel_switch ) (int *,int *,struct ieee80211_tdls_ch_sw_params*) ;} ;


 int FUNC_0 (int *,int *,struct ieee80211_tdls_ch_sw_params*) ;
 int FUNC_1 (struct ieee80211_local*) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct ieee80211_tdls_ch_sw_params*) ;

__attribute__((used)) static inline void
FUNC_3(struct ieee80211_local *VAR_0,
        struct ieee80211_sub_if_data *VAR_1,
        struct ieee80211_tdls_ch_sw_params *VAR_2)
{
 FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_0->ops->tdls_recv_channel_switch)
  VAR_0->ops->tdls_recv_channel_switch(&VAR_0->hw, &VAR_1->vif,
           VAR_2);
 FUNC_1(VAR_0);
}
