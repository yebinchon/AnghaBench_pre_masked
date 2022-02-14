
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ type; int mu_mimo_owner; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct ieee80211_bss_conf {int dummy; } ;
struct TYPE_3__ {int (* bss_info_changed ) (int *,TYPE_2__*,struct ieee80211_bss_conf*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,TYPE_2__*,struct ieee80211_bss_conf*,int) ;
 int FUNC_4 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct ieee80211_bss_conf*,int) ;
 int FUNC_5 (struct ieee80211_local*) ;

__attribute__((used)) static inline void FUNC_6(struct ieee80211_local *VAR_10,
     struct ieee80211_sub_if_data *VAR_11,
     struct ieee80211_bss_conf *VAR_12,
     u32 VAR_13)
{
 FUNC_2();

 if (FUNC_0(VAR_13 & (VAR_0 |
        VAR_1) &&
    VAR_11->vif.type != VAR_4 &&
    VAR_11->vif.type != VAR_3 &&
    VAR_11->vif.type != VAR_5 &&
    VAR_11->vif.type != VAR_8))
  return;

 if (FUNC_0(VAR_11->vif.type == VAR_9 ||
    VAR_11->vif.type == VAR_7 ||
    (VAR_11->vif.type == VAR_6 &&
     !VAR_11->vif.mu_mimo_owner &&
     !(VAR_13 & VAR_2))))
  return;

 if (!FUNC_1(VAR_11))
  return;

 FUNC_4(VAR_10, VAR_11, VAR_12, VAR_13);
 if (VAR_10->ops->bss_info_changed)
  VAR_10->ops->bss_info_changed(&VAR_10->hw, &VAR_11->vif, VAR_12, VAR_13);
 FUNC_5(VAR_10);
}
