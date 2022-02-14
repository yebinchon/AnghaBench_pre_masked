
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_7__ {scalar_t__ csa_active; } ;
struct ieee80211_if_managed {int monitor_work; int csa_waiting_bcn; } ;
struct TYPE_6__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_3__ vif; struct ieee80211_local* local; TYPE_2__ u; } ;
struct ieee80211_local {int hw; } ;
struct TYPE_5__ {int conn_mon_timer; } ;
struct TYPE_8__ {TYPE_1__ mgd; } ;


 struct ieee80211_sub_if_data* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int *,int *) ;
 struct ieee80211_sub_if_data* VAR_0 ;
 TYPE_4__ VAR_1 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 =
  FUNC_0(VAR_3, VAR_2, VAR_1.mgd.conn_mon_timer);
 struct ieee80211_if_managed *VAR_4 = &VAR_3->u.mgd;
 struct ieee80211_local *VAR_5 = VAR_3->local;

 if (VAR_3->vif.csa_active && !VAR_4->csa_waiting_bcn)
  return;

 FUNC_1(&VAR_5->hw, &VAR_4->monitor_work);
}
