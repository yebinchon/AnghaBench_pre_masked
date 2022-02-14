
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ieee80211_local {int * active_txq_lock; int * schedule_round; } ;
struct ieee80211_hw {int dummy; } ;


 struct ieee80211_local* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ieee80211_hw *VAR_0, u8 VAR_1)
{
 struct ieee80211_local *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(&VAR_2->active_txq_lock[VAR_1]);
 VAR_2->schedule_round[VAR_1]++;
 FUNC_2(&VAR_2->active_txq_lock[VAR_1]);
}
