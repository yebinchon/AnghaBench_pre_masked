
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wiphy; } ;
struct ieee80211_local {TYPE_1__ hw; int mtx; int sched_scan_req; int sched_scan_sdata; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct ieee80211_local *VAR_0)
{
 FUNC_2(&VAR_0->mtx);

 if (!FUNC_4(VAR_0->sched_scan_sdata)) {
  FUNC_3(&VAR_0->mtx);
  return;
 }

 FUNC_0(VAR_0->sched_scan_sdata, ((void*)0));


 FUNC_0(VAR_0->sched_scan_req, ((void*)0));

 FUNC_3(&VAR_0->mtx);

 FUNC_1(VAR_0->hw.wiphy, 0);
}
