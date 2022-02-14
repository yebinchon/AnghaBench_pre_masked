
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int name; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int name; } ;
struct ieee80211_local {TYPE_4__ radio_led; TYPE_3__ assoc_led; TYPE_2__ tx_led; TYPE_1__ rx_led; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct ieee80211_local *VAR_0)
{
 FUNC_0(VAR_0->rx_led.name);
 FUNC_0(VAR_0->tx_led.name);
 FUNC_0(VAR_0->assoc_led.name);
 FUNC_0(VAR_0->radio_led.name);
}
