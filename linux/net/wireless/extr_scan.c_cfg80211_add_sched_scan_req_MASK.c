
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg80211_sched_scan_request {int list; } ;
struct cfg80211_registered_device {int sched_scan_req_list; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct cfg80211_registered_device *VAR_0,
     struct cfg80211_sched_scan_request *VAR_1)
{
 FUNC_0();

 FUNC_1(&VAR_1->list, &VAR_0->sched_scan_req_list);
}
