
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {scalar_t__ suspended; scalar_t__ quiescing; scalar_t__ in_reconfig; } ;



__attribute__((used)) static inline bool FUNC_0(struct ieee80211_local *VAR_0)
{




 if (VAR_0->in_reconfig)
  return 0;







 if (VAR_0->quiescing)
  return 0;
 if (VAR_0->suspended)
  return 0;

 return 1;
}
