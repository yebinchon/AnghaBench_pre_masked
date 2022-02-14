
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cfg80211_registered_device {TYPE_1__* cur_cmd_info; } ;
typedef enum nl80211_commands { ____Placeholder_nl80211_commands } nl80211_commands ;
typedef enum nl80211_attrs { ____Placeholder_nl80211_attrs } nl80211_attrs ;
struct TYPE_2__ {int snd_seq; int snd_portid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (struct cfg80211_registered_device*,int *,int,int ,int ,int,int,int *,int ) ;
 struct cfg80211_registered_device* FUNC_2 (struct wiphy*) ;

struct sk_buff *FUNC_3(struct wiphy *VAR_1,
        enum nl80211_commands VAR_2,
        enum nl80211_attrs VAR_3,
        int VAR_4)
{
 struct cfg80211_registered_device *VAR_5 = FUNC_2(VAR_1);

 if (FUNC_0(!VAR_5->cur_cmd_info))
  return ((void*)0);

 return FUNC_1(VAR_5, ((void*)0), VAR_4,
        VAR_5->cur_cmd_info->snd_portid,
        VAR_5->cur_cmd_info->snd_seq,
        VAR_2, VAR_3, ((void*)0), VAR_0);
}
