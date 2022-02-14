
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
typedef enum ieee80211_bss_type { ____Placeholder_ieee80211_bss_type } ieee80211_bss_type ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static bool FUNC_0(u16 VAR_8,
        enum nl80211_band VAR_9,
        enum ieee80211_bss_type VAR_10)
{
 bool VAR_11 = 1;
 u16 VAR_12, VAR_13;

 if (VAR_10 == VAR_0)
  return VAR_11;

 if (VAR_9 == VAR_1) {
  VAR_12 = VAR_4;
  switch (VAR_10) {
  case 131:
   VAR_13 = VAR_2;
   break;
  case 128:
   VAR_13 = VAR_5;
   break;
  case 130:
   VAR_13 = VAR_3;
   break;
  default:
   return 0;
  }
 } else {
  VAR_12 = VAR_6 | VAR_7;
  switch (VAR_10) {
  case 131:
   VAR_13 = VAR_6;
   break;
  case 130:
   VAR_13 = VAR_7;
   break;
  case 129:
   VAR_13 = 0;
   break;
  default:
   return 0;
  }
 }

 VAR_11 = ((VAR_8 & VAR_12) == VAR_13);
 return VAR_11;
}
