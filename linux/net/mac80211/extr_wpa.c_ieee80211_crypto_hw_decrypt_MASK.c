
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_rx_data {TYPE_1__* sta; } ;
typedef int ieee80211_rx_result ;
struct TYPE_2__ {scalar_t__ cipher_scheme; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_rx_data*) ;

ieee80211_rx_result
FUNC_1(struct ieee80211_rx_data *VAR_1)
{
 if (VAR_1->sta && VAR_1->sta->cipher_scheme)
  return FUNC_0(VAR_1);

 return VAR_0;
}
