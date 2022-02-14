
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee80211_local {TYPE_1__* ops; } ;
struct TYPE_2__ {int sched_scan_stop; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_local*) ;
 struct ieee80211_local* FUNC_1 (struct wiphy*) ;

__attribute__((used)) static int
FUNC_2(struct wiphy *VAR_1, struct net_device *VAR_2,
     u64 VAR_3)
{
 struct ieee80211_local *VAR_4 = FUNC_1(VAR_1);

 if (!VAR_4->ops->sched_scan_stop)
  return -VAR_0;

 return FUNC_0(VAR_4);
}
