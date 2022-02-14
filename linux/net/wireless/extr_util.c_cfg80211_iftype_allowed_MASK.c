
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int flags; int interface_modes; int software_iftypes; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

bool FUNC_1(struct wiphy *VAR_2, enum nl80211_iftype VAR_3,
        bool VAR_4, u8 VAR_5)

{
 bool VAR_6 = VAR_3 == VAR_0;

 switch (VAR_5) {
 case 0:
  if (VAR_6 && VAR_4)
   return VAR_2->flags & VAR_1;
  return VAR_2->interface_modes & FUNC_0(VAR_3);
 case 1:
  if (!(VAR_2->software_iftypes & FUNC_0(VAR_3)) && VAR_6)
   return VAR_2->flags & VAR_1;
  return VAR_2->software_iftypes & FUNC_0(VAR_3);
 default:
  break;
 }

 return 0;
}
