
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int monitor_work; } ;
struct TYPE_8__ {TYPE_3__ mgd; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_4__ u; TYPE_2__* local; TYPE_1__ vif; } ;
struct TYPE_6__ {int hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_sub_if_data *VAR_2)
{
 if (VAR_2->vif.type == VAR_1) {
  FUNC_0(VAR_2);


  if (!FUNC_1(&VAR_2->local->hw, VAR_0))
   FUNC_2(&VAR_2->local->hw,
          &VAR_2->u.mgd.monitor_work);
 }
}
