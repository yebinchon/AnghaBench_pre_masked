
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg80211_sched_scan_request {int list; } ;
struct cfg80211_registered_device {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct cfg80211_sched_scan_request*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct cfg80211_registered_device *VAR_1,
     struct cfg80211_sched_scan_request *VAR_2)
{
 FUNC_0();

 FUNC_2(&VAR_2->list);
 FUNC_1(VAR_2, VAR_0);
}
