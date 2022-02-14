
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ name; } ;
struct ieee80211_local {scalar_t__ tpt_led_trigger; TYPE_1__ tpt_led; TYPE_1__ rx_led; TYPE_1__ tx_led; TYPE_1__ assoc_led; TYPE_1__ radio_led; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct ieee80211_local *VAR_0)
{
 if (VAR_0->radio_led.name)
  FUNC_1(&VAR_0->radio_led);
 if (VAR_0->assoc_led.name)
  FUNC_1(&VAR_0->assoc_led);
 if (VAR_0->tx_led.name)
  FUNC_1(&VAR_0->tx_led);
 if (VAR_0->rx_led.name)
  FUNC_1(&VAR_0->rx_led);

 if (VAR_0->tpt_led_trigger) {
  FUNC_1(&VAR_0->tpt_led);
  FUNC_0(VAR_0->tpt_led_trigger);
 }
}
