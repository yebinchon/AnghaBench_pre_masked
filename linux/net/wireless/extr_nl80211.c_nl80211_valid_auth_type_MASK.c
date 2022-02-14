
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int features; } ;
struct cfg80211_registered_device {TYPE_1__ wiphy; } ;
typedef enum nl80211_commands { ____Placeholder_nl80211_commands } nl80211_commands ;
typedef enum nl80211_auth_type { ____Placeholder_nl80211_auth_type } nl80211_auth_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static bool FUNC_1(struct cfg80211_registered_device *VAR_9,
        enum nl80211_auth_type VAR_10,
        enum nl80211_commands VAR_11)
{
 if (VAR_10 > VAR_3)
  return 0;

 switch (VAR_11) {
 case 130:
  if (!(VAR_9->wiphy.features & VAR_8) &&
      VAR_10 == VAR_4)
   return 0;
  if (!FUNC_0(&VAR_9->wiphy,
          VAR_6) &&
      (VAR_10 == VAR_1 ||
       VAR_10 == VAR_2 ||
       VAR_10 == VAR_0))
   return 0;
  return 1;
 case 129:
  if (!(VAR_9->wiphy.features & VAR_8) &&
      !FUNC_0(&VAR_9->wiphy,
          VAR_7) &&
      VAR_10 == VAR_4)
   return 0;


  if (VAR_10 == VAR_2 ||
      VAR_10 == VAR_0)
   return 0;
  if (!FUNC_0(
       &VAR_9->wiphy,
       VAR_5) &&
      VAR_10 == VAR_1)
   return 0;
  return 1;
 case 128:

  if (VAR_10 == VAR_4)
   return 0;

  if (VAR_10 == VAR_1 ||
      VAR_10 == VAR_2 ||
      VAR_10 == VAR_0)
   return 0;
  return 1;
 default:
  return 0;
 }
}
