
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ieee80211_supported_band {struct ieee80211_rate* bitrates; } ;
struct ieee80211_rx_status {size_t band; size_t rate_idx; int encoding; } ;
struct ieee80211_rx_data {TYPE_7__* sdata; int skb; TYPE_5__* sta; TYPE_3__* local; } ;
struct ieee80211_rate {int dummy; } ;
typedef int ieee80211_rx_result ;
struct TYPE_14__ {TYPE_6__* local; } ;
struct TYPE_13__ {int rx_handlers_queued; int rx_handlers_drop; } ;
struct TYPE_11__ {int dropped; } ;
struct TYPE_12__ {TYPE_4__ rx_stats; } ;
struct TYPE_9__ {TYPE_1__* wiphy; } ;
struct TYPE_10__ {TYPE_2__ hw; } ;
struct TYPE_8__ {struct ieee80211_supported_band** bands; } ;


 int FUNC_0 (int ) ;
 struct ieee80211_rx_status* FUNC_1 (int ) ;



 int VAR_0 ;

 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_rx_data*,struct ieee80211_rate*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_rx_data *VAR_1,
      ieee80211_rx_result VAR_2)
{
 switch (VAR_2) {
 case 130:
  FUNC_0(VAR_1->sdata->local->rx_handlers_drop);
  if (VAR_1->sta)
   VAR_1->sta->rx_stats.dropped++;

 case 131: {
  struct ieee80211_rate *VAR_3 = ((void*)0);
  struct ieee80211_supported_band *VAR_4;
  struct ieee80211_rx_status *VAR_5;

  VAR_5 = FUNC_1((VAR_1->skb));

  VAR_4 = VAR_1->local->hw.wiphy->bands[VAR_5->band];
  if (VAR_5->encoding == VAR_0)
   VAR_3 = &VAR_4->bitrates[VAR_5->rate_idx];

  FUNC_3(VAR_1, VAR_3);
  break;
  }
 case 129:
  FUNC_0(VAR_1->sdata->local->rx_handlers_drop);
  if (VAR_1->sta)
   VAR_1->sta->rx_stats.dropped++;
  FUNC_2(VAR_1->skb);
  break;
 case 128:
  FUNC_0(VAR_1->sdata->local->rx_handlers_queued);
  break;
 }
}
