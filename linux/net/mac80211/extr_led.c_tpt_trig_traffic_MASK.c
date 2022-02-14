
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpt_led_trigger {unsigned long tx_bytes; unsigned long rx_bytes; unsigned long prev_traffic; } ;
struct ieee80211_local {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,int) ;

__attribute__((used)) static unsigned long FUNC_1(struct ieee80211_local *VAR_0,
          struct tpt_led_trigger *VAR_1)
{
 unsigned long VAR_2, VAR_3;

 VAR_2 = VAR_1->tx_bytes + VAR_1->rx_bytes;

 VAR_3 = VAR_2 - VAR_1->prev_traffic;
 VAR_1->prev_traffic = VAR_2;
 return FUNC_0(VAR_3, 1024 / 8);
}
