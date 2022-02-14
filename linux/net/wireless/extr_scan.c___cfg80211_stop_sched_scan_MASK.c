
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cfg80211_sched_scan_request {int dummy; } ;
struct cfg80211_registered_device {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct cfg80211_sched_scan_request* FUNC_1 (struct cfg80211_registered_device*,int ) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct cfg80211_sched_scan_request*,int) ;

int FUNC_3(struct cfg80211_registered_device *VAR_1,
          u64 VAR_2, bool VAR_3)
{
 struct cfg80211_sched_scan_request *VAR_4;

 FUNC_0();

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_4)
  return -VAR_0;

 return FUNC_2(VAR_1, VAR_4,
         VAR_3);
}
