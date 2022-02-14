
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int queue_stop_reason_lock; int * queue_stop_reasons; } ;
struct ieee80211_hw {int queues; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct ieee80211_local* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct ieee80211_hw *VAR_1, int VAR_2)
{
 struct ieee80211_local *VAR_3 = FUNC_1(VAR_1);
 unsigned long VAR_4;
 int VAR_5;

 if (FUNC_0(VAR_2 >= VAR_1->queues))
  return 1;

 FUNC_2(&VAR_3->queue_stop_reason_lock, VAR_4);
 VAR_5 = FUNC_4(VAR_0,
         &VAR_3->queue_stop_reasons[VAR_2]);
 FUNC_3(&VAR_3->queue_stop_reason_lock, VAR_4);
 return VAR_5;
}
