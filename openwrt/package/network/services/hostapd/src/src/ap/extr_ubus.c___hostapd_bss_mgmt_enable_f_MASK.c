
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u8 ;
struct hostapd_data {struct hostapd_bss_config* conf; } ;
struct hostapd_bss_config {int* radio_measurements; int bss_transition; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hostapd_data*) ;

__attribute__((used)) static bool
FUNC_1(struct hostapd_data *VAR_4, int VAR_5)
{
 struct hostapd_bss_config *VAR_6 = VAR_4->conf;
 uint32_t VAR_7;

 switch (VAR_5) {
 case 128:
  if (VAR_6->radio_measurements[0] &
      VAR_3)
   return 0;

  VAR_6->radio_measurements[0] |=
   VAR_3;
  FUNC_0(VAR_4);
  return 1;
 case 130:
  VAR_7 = VAR_1 |
   VAR_0 |
   VAR_2;

  if (VAR_6->radio_measurements[0] & (VAR_7 == VAR_7))
   return 0;

  VAR_6->radio_measurements[0] |= (u8) VAR_7;
  return 1;
 }
}
