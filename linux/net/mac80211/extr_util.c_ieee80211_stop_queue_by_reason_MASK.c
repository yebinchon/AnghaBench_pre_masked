
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int queue_stop_reason_lock; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum queue_stop_reason { ____Placeholder_queue_stop_reason } queue_stop_reason ;


 int FUNC_0 (struct ieee80211_hw*,int,int,int) ;
 struct ieee80211_local* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct ieee80211_hw *VAR_0, int VAR_1,
        enum queue_stop_reason VAR_2,
        bool VAR_3)
{
 struct ieee80211_local *VAR_4 = FUNC_1(VAR_0);
 unsigned long VAR_5;

 FUNC_2(&VAR_4->queue_stop_reason_lock, VAR_5);
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_3(&VAR_4->queue_stop_reason_lock, VAR_5);
}
