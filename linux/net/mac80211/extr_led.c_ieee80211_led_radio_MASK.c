
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int radio_led; int radio_led_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct ieee80211_local *VAR_2, bool VAR_3)
{
 if (!FUNC_0(&VAR_2->radio_led_active))
  return;
 if (VAR_3)
  FUNC_1(&VAR_2->radio_led, VAR_0);
 else
  FUNC_1(&VAR_2->radio_led, VAR_1);
}
