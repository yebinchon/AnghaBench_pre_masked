
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int signal; } ;
struct sta_info {TYPE_4__ rx_stats_avg; } ;
struct TYPE_5__ {scalar_t__ rssi_threshold; } ;
struct TYPE_6__ {TYPE_1__ mshcfg; } ;
struct TYPE_7__ {TYPE_2__ mesh; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; } ;
typedef scalar_t__ s8 ;
typedef scalar_t__ s32 ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct ieee80211_sub_if_data *VAR_0,
     struct sta_info *VAR_1)
{
 s32 VAR_2 = VAR_0->u.mesh.mshcfg.rssi_threshold;
 return VAR_2 == 0 ||
        (VAR_1 &&
  (s8)-FUNC_0(&VAR_1->rx_stats_avg.signal) >
      VAR_2);
}
