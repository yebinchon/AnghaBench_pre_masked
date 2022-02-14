
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int deactivate; int activate; int * name; } ;
struct ieee80211_local {int * tpt_led_trigger; TYPE_1__ tpt_led; int tpt_led_active; TYPE_1__ radio_led; int radio_led_active; TYPE_1__ assoc_led; int assoc_led_active; TYPE_1__ tx_led; int tx_led_active; TYPE_1__ rx_led; int rx_led_active; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

void FUNC_3(struct ieee80211_local *VAR_10)
{
 FUNC_0(&VAR_10->rx_led_active, 0);
 VAR_10->rx_led.activate = VAR_4;
 VAR_10->rx_led.deactivate = VAR_5;
 if (VAR_10->rx_led.name && FUNC_2(&VAR_10->rx_led)) {
  FUNC_1(VAR_10->rx_led.name);
  VAR_10->rx_led.name = ((void*)0);
 }

 FUNC_0(&VAR_10->tx_led_active, 0);
 VAR_10->tx_led.activate = VAR_8;
 VAR_10->tx_led.deactivate = VAR_9;
 if (VAR_10->tx_led.name && FUNC_2(&VAR_10->tx_led)) {
  FUNC_1(VAR_10->tx_led.name);
  VAR_10->tx_led.name = ((void*)0);
 }

 FUNC_0(&VAR_10->assoc_led_active, 0);
 VAR_10->assoc_led.activate = VAR_0;
 VAR_10->assoc_led.deactivate = VAR_1;
 if (VAR_10->assoc_led.name && FUNC_2(&VAR_10->assoc_led)) {
  FUNC_1(VAR_10->assoc_led.name);
  VAR_10->assoc_led.name = ((void*)0);
 }

 FUNC_0(&VAR_10->radio_led_active, 0);
 VAR_10->radio_led.activate = VAR_2;
 VAR_10->radio_led.deactivate = VAR_3;
 if (VAR_10->radio_led.name && FUNC_2(&VAR_10->radio_led)) {
  FUNC_1(VAR_10->radio_led.name);
  VAR_10->radio_led.name = ((void*)0);
 }

 FUNC_0(&VAR_10->tpt_led_active, 0);
 if (VAR_10->tpt_led_trigger) {
  VAR_10->tpt_led.activate = VAR_6;
  VAR_10->tpt_led.deactivate = VAR_7;
  if (FUNC_2(&VAR_10->tpt_led)) {
   FUNC_1(VAR_10->tpt_led_trigger);
   VAR_10->tpt_led_trigger = ((void*)0);
  }
 }
}
