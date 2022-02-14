
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int wiphy; } ;
struct TYPE_7__ {void* name; } ;
struct TYPE_6__ {void* name; } ;
struct TYPE_10__ {void* name; } ;
struct TYPE_8__ {void* name; } ;
struct ieee80211_local {TYPE_4__ hw; TYPE_2__ radio_led; TYPE_1__ assoc_led; TYPE_5__ tx_led; TYPE_3__ rx_led; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct ieee80211_local *VAR_1)
{
 VAR_1->rx_led.name = FUNC_0(VAR_0, "%srx",
           FUNC_1(VAR_1->hw.wiphy));
 VAR_1->tx_led.name = FUNC_0(VAR_0, "%stx",
           FUNC_1(VAR_1->hw.wiphy));
 VAR_1->assoc_led.name = FUNC_0(VAR_0, "%sassoc",
       FUNC_1(VAR_1->hw.wiphy));
 VAR_1->radio_led.name = FUNC_0(VAR_0, "%sradio",
       FUNC_1(VAR_1->hw.wiphy));
}
