
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int dummy; } ;
struct wiphy {int n_vendor_events; struct nl80211_vendor_cmd_info* vendor_events; } ;
struct sk_buff {int dummy; } ;
struct nl80211_vendor_cmd_info {int dummy; } ;
struct cfg80211_registered_device {int dummy; } ;
typedef int gfp_t ;
typedef enum nl80211_commands { ____Placeholder_nl80211_commands } nl80211_commands ;
typedef enum nl80211_attrs { ____Placeholder_nl80211_attrs } nl80211_attrs ;




 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (struct cfg80211_registered_device*,struct wireless_dev*,int,unsigned int,int ,int,int,struct nl80211_vendor_cmd_info const*,int ) ;
 struct cfg80211_registered_device* FUNC_2 (struct wiphy*) ;

struct sk_buff *FUNC_3(struct wiphy *VAR_0,
        struct wireless_dev *VAR_1,
        enum nl80211_commands VAR_2,
        enum nl80211_attrs VAR_3,
        unsigned int VAR_4,
        int VAR_5,
        int VAR_6, gfp_t VAR_7)
{
 struct cfg80211_registered_device *VAR_8 = FUNC_2(VAR_0);
 const struct nl80211_vendor_cmd_info *VAR_9;

 switch (VAR_2) {
 case 129:
  if (FUNC_0(VAR_5 != -1))
   return ((void*)0);
  VAR_9 = ((void*)0);
  break;
 case 128:
  if (FUNC_0(VAR_5 < 0 ||
       VAR_5 >= VAR_0->n_vendor_events))
   return ((void*)0);
  VAR_9 = &VAR_0->vendor_events[VAR_5];
  break;
 default:
  FUNC_0(1);
  return ((void*)0);
 }

 return FUNC_1(VAR_8, VAR_1, VAR_6, VAR_4, 0,
        VAR_2, VAR_3, VAR_9, VAR_7);
}
