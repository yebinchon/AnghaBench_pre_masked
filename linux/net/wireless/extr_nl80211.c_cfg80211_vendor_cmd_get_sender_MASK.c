
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct cfg80211_registered_device {TYPE_1__* cur_cmd_info; } ;
struct TYPE_2__ {unsigned int snd_portid; } ;


 scalar_t__ FUNC_0 (int) ;
 struct cfg80211_registered_device* FUNC_1 (struct wiphy*) ;

unsigned int FUNC_2(struct wiphy *VAR_0)
{
 struct cfg80211_registered_device *VAR_1 = FUNC_1(VAR_0);

 if (FUNC_0(!VAR_1->cur_cmd_info))
  return 0;

 return VAR_1->cur_cmd_info->snd_portid;
}
