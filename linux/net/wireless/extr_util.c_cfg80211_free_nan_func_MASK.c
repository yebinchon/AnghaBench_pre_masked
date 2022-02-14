
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg80211_nan_func {int num_rx_filters; int num_tx_filters; struct cfg80211_nan_func* tx_filters; struct cfg80211_nan_func* rx_filters; struct cfg80211_nan_func* filter; struct cfg80211_nan_func* srf_macs; struct cfg80211_nan_func* srf_bf; struct cfg80211_nan_func* serv_spec_info; } ;


 int FUNC_0 (struct cfg80211_nan_func*) ;

void FUNC_1(struct cfg80211_nan_func *VAR_0)
{
 int VAR_1;

 if (!VAR_0)
  return;

 FUNC_0(VAR_0->serv_spec_info);
 FUNC_0(VAR_0->srf_bf);
 FUNC_0(VAR_0->srf_macs);
 for (VAR_1 = 0; VAR_1 < VAR_0->num_rx_filters; VAR_1++)
  FUNC_0(VAR_0->rx_filters[VAR_1].filter);

 for (VAR_1 = 0; VAR_1 < VAR_0->num_tx_filters; VAR_1++)
  FUNC_0(VAR_0->tx_filters[VAR_1].filter);

 FUNC_0(VAR_0->rx_filters);
 FUNC_0(VAR_0->tx_filters);
 FUNC_0(VAR_0);
}
