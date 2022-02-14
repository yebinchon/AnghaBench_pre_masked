
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int mtx; int sched_scan_sdata; } ;
struct cfg80211_sched_scan_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,struct cfg80211_sched_scan_request*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(struct ieee80211_sub_if_data *VAR_1,
           struct cfg80211_sched_scan_request *VAR_2)
{
 struct ieee80211_local *VAR_3 = VAR_1->local;
 int VAR_4;

 FUNC_1(&VAR_3->mtx);

 if (FUNC_3(VAR_3->sched_scan_sdata)) {
  FUNC_2(&VAR_3->mtx);
  return -VAR_0;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_2);

 FUNC_2(&VAR_3->mtx);
 return VAR_4;
}
