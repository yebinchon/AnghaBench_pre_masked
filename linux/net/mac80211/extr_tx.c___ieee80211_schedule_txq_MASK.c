
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sta; } ;
struct TYPE_4__ {scalar_t__ backlog_packets; } ;
struct txq_info {int schedule_order; TYPE_2__ txq; TYPE_1__ tin; int frags; } ;
struct ieee80211_txq {size_t ac; } ;
struct TYPE_6__ {int wiphy; } ;
struct ieee80211_local {int * active_txq_lock; int * active_txqs; TYPE_3__ hw; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 struct ieee80211_local* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct txq_info* FUNC_7 (struct ieee80211_txq*) ;
 scalar_t__ FUNC_8 (int ,int ) ;

void FUNC_9(struct ieee80211_hw *VAR_1,
         struct ieee80211_txq *VAR_2,
         bool VAR_3)
{
 struct ieee80211_local *VAR_4 = FUNC_0(VAR_1);
 struct txq_info *VAR_5 = FUNC_7(VAR_2);

 FUNC_5(&VAR_4->active_txq_lock[VAR_2->ac]);

 if (FUNC_3(&VAR_5->schedule_order) &&
     (VAR_3 || !FUNC_4(&VAR_5->frags) ||
      VAR_5->tin.backlog_packets)) {







  if (VAR_5->txq.sta &&
      FUNC_8(VAR_4->hw.wiphy,
         VAR_0))
   FUNC_1(&VAR_5->schedule_order,
     &VAR_4->active_txqs[VAR_2->ac]);
  else
   FUNC_2(&VAR_5->schedule_order,
          &VAR_4->active_txqs[VAR_2->ac]);
 }

 FUNC_6(&VAR_4->active_txq_lock[VAR_2->ac]);
}
