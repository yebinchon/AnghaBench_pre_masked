
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cfg80211_registered_device {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;

int FUNC_0(struct cfg80211_registered_device *VAR_1,
     enum nl80211_iftype VAR_2, u32 VAR_3)
{
 if (VAR_3 < 10 || VAR_3 > 10000)
  return -VAR_0;

 return 0;
}
