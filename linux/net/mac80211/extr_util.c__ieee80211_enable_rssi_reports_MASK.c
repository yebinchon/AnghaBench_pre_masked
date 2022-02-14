
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int rssi_min_thold; int rssi_max_thold; } ;
struct TYPE_6__ {TYPE_2__ mgd; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; TYPE_1__ vif; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int,int) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_sub_if_data *VAR_1,
         int VAR_2,
         int VAR_3)
{
 FUNC_1(VAR_1, VAR_2, VAR_3);

 if (FUNC_0(VAR_1->vif.type != VAR_0))
  return;






 VAR_1->u.mgd.rssi_min_thold = VAR_2*16;
 VAR_1->u.mgd.rssi_max_thold = VAR_3*16;
}
