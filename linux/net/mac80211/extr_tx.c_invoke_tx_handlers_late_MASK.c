
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_tx_info {int flags; } ;
struct ieee80211_tx_data {TYPE_1__* local; int skbs; int * skb; } ;
typedef scalar_t__ ieee80211_tx_result ;
struct TYPE_2__ {int tx_handlers_queued; int hw; int tx_handlers_drop; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct ieee80211_tx_info* FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_tx_data *VAR_11)
{
 struct ieee80211_tx_info *VAR_12 = FUNC_2(VAR_11->skb);
 ieee80211_tx_result VAR_13 = VAR_2;

 if (FUNC_7(VAR_12->flags & VAR_1)) {
  FUNC_3(&VAR_11->skbs, VAR_11->skb);
  VAR_11->skb = ((void*)0);
  goto txh_done;
 }

 FUNC_0(VAR_8);
 FUNC_0(VAR_9);
 FUNC_0(VAR_7);

 FUNC_0(VAR_10);
 FUNC_0(VAR_6);
 if (!FUNC_5(&VAR_11->local->hw, VAR_0))
  FUNC_0(VAR_5);


 txh_done:
 if (FUNC_7(VAR_13 == VAR_3)) {
  FUNC_1(VAR_11->local->tx_handlers_drop);
  if (VAR_11->skb)
   FUNC_4(&VAR_11->local->hw, VAR_11->skb);
  else
   FUNC_6(&VAR_11->local->hw, &VAR_11->skbs);
  return -1;
 } else if (FUNC_7(VAR_13 == VAR_4)) {
  FUNC_1(VAR_11->local->tx_handlers_queued);
  return -1;
 }

 return 0;
}
