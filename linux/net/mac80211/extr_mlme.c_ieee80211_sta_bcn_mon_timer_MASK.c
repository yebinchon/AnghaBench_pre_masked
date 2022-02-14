
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct ieee80211_if_managed {int connection_loss; int beacon_connection_loss_work; int csa_waiting_bcn; } ;
struct TYPE_8__ {struct ieee80211_if_managed mgd; } ;
struct TYPE_9__ {scalar_t__ csa_active; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; TYPE_1__* local; TYPE_4__ vif; } ;
struct TYPE_7__ {int bcn_mon_timer; } ;
struct TYPE_10__ {TYPE_2__ mgd; } ;
struct TYPE_6__ {int hw; } ;


 struct ieee80211_sub_if_data* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int *,int *) ;
 struct ieee80211_sub_if_data* VAR_0 ;
 TYPE_5__ VAR_1 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 =
  FUNC_0(VAR_3, VAR_2, VAR_1.mgd.bcn_mon_timer);
 struct ieee80211_if_managed *VAR_4 = &VAR_3->u.mgd;

 if (VAR_3->vif.csa_active && !VAR_4->csa_waiting_bcn)
  return;

 VAR_3->u.mgd.connection_loss = 0;
 FUNC_1(&VAR_3->local->hw,
        &VAR_3->u.mgd.beacon_connection_loss_work);
}
