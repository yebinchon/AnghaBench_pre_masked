
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ieee80211_smps_mode { ____Placeholder_ieee80211_smps_mode } ieee80211_smps_mode ;


 int VAR_0 ;



 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

bool FUNC_2(enum ieee80211_smps_mode VAR_1,
       enum ieee80211_smps_mode VAR_2)
{
 if (FUNC_1(VAR_1 == VAR_0 ||
    VAR_2 == VAR_0))
  return 0;

 switch (VAR_1) {
 case 128:
  return 0;
 case 130:
  return VAR_2 == 128;
 case 129:
  return VAR_2 != 129;
 default:
  FUNC_0(1);
 }

 return 0;
}
