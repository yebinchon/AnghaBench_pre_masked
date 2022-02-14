
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int tid; TYPE_3__* sta; int ac; TYPE_1__* vif; } ;
struct txq_info {TYPE_4__ txq; int schedule_order; int frags; int cstats; int def_cvars; int def_flow; int tin; } ;
struct TYPE_7__ {TYPE_4__** txq; } ;
struct sta_info {TYPE_3__ sta; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_4__* txq; } ;
struct ieee80211_sub_if_data {TYPE_2__* local; TYPE_1__ vif; } ;
struct TYPE_6__ {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int ) ;

void FUNC_8(struct ieee80211_sub_if_data *VAR_6,
   struct sta_info *VAR_7,
   struct txq_info *VAR_8, int VAR_9)
{
 FUNC_5(&VAR_8->tin);
 FUNC_4(&VAR_8->def_flow);
 FUNC_3(&VAR_8->def_cvars);
 FUNC_2(&VAR_8->cstats);
 FUNC_1(&VAR_8->frags);
 FUNC_0(&VAR_8->schedule_order);

 VAR_8->txq.vif = &VAR_6->vif;

 if (!VAR_7) {
  VAR_6->vif.txq = &VAR_8->txq;
  VAR_8->txq.tid = 0;
  VAR_8->txq.ac = VAR_1;

  return;
 }

 if (VAR_9 == VAR_3) {
  if (VAR_6->vif.type == VAR_4) {

   if (!FUNC_7(&VAR_6->local->hw,
      VAR_5))
    return;
  } else if (!FUNC_7(&VAR_6->local->hw,
            VAR_0)) {

   return;
  }
  VAR_8->txq.ac = VAR_2;
 } else {
  VAR_8->txq.ac = FUNC_6(VAR_9);
 }

 VAR_8->txq.sta = &VAR_7->sta;
 VAR_8->txq.tid = VAR_9;
 VAR_7->sta.txq[VAR_9] = &VAR_8->txq;
}
