
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct station_parameters {int sta_modify_mask; int plink_state; int plink_action; scalar_t__ local_pm; int peer_aid; } ;
struct sta_info {TYPE_4__* mesh; struct ieee80211_sub_if_data* sdata; } ;
struct TYPE_5__ {scalar_t__ power_mode; } ;
struct TYPE_6__ {TYPE_1__ mshcfg; } ;
struct TYPE_7__ {TYPE_2__ mesh; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; } ;
struct ieee80211_local {int dummy; } ;
struct TYPE_8__ {int const plink_state; int tx_rate_avg; int aid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_3 (struct sta_info*,scalar_t__) ;
 int FUNC_4 (struct sta_info*) ;
 int FUNC_5 (struct sta_info*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*) ;
 int FUNC_7 (struct ieee80211_sub_if_data*) ;
 int FUNC_8 (struct sta_info*) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_local *VAR_2,
      struct sta_info *VAR_3,
      struct station_parameters *VAR_4)
{
}
