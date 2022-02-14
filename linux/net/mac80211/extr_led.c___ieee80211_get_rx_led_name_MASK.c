
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* name; } ;
struct ieee80211_local {TYPE_1__ rx_led; } ;
struct ieee80211_hw {int dummy; } ;


 struct ieee80211_local* FUNC_0 (struct ieee80211_hw*) ;

const char *FUNC_1(struct ieee80211_hw *VAR_0)
{
 struct ieee80211_local *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->rx_led.name;
}
