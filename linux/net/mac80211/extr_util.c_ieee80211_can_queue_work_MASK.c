
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int resuming; scalar_t__ suspended; scalar_t__ quiescing; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static bool FUNC_1(struct ieee80211_local *VAR_0)
{
 if (VAR_0->quiescing || (VAR_0->suspended && !VAR_0->resuming)) {
  FUNC_0("queueing ieee80211 work while going to suspend\n");
  return 0;
 }

 return 1;
}
