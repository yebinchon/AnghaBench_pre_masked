
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int sched_scan_stopped_work; scalar_t__ in_reconfig; } ;
struct ieee80211_hw {int dummy; } ;


 struct ieee80211_local* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ieee80211_local*) ;

void FUNC_3(struct ieee80211_hw *VAR_0)
{
 struct ieee80211_local *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1);






 if (VAR_1->in_reconfig)
  return;

 FUNC_1(&VAR_1->sched_scan_stopped_work);
}
