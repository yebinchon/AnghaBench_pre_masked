
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee80211_sub_if_data {int name; } ;
struct ieee80211_rx_data {struct sk_buff* skb; TYPE_1__* sta; struct ieee80211_sub_if_data* sdata; struct ieee80211_local* local; } ;
struct TYPE_4__ {int wiphy; } ;
struct ieee80211_local {TYPE_2__ hw; } ;
struct ieee80211_fast_rx {int dummy; } ;
struct TYPE_3__ {int fast_rx; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_rx_data*) ;
 scalar_t__ FUNC_1 (struct ieee80211_rx_data*,struct ieee80211_fast_rx*) ;
 int FUNC_2 (struct ieee80211_rx_data*) ;
 scalar_t__ FUNC_3 () ;
 struct ieee80211_fast_rx* FUNC_4 (int ) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static bool FUNC_7(struct ieee80211_rx_data *VAR_1,
         struct sk_buff *VAR_2, bool VAR_3)
{
 struct ieee80211_local *VAR_4 = VAR_1->local;
 struct ieee80211_sub_if_data *VAR_5 = VAR_1->sdata;

 VAR_1->skb = VAR_2;
 if (VAR_3 && VAR_1->sta) {
  struct ieee80211_fast_rx *VAR_6;

  VAR_6 = FUNC_4(VAR_1->sta->fast_rx);
  if (VAR_6 && FUNC_1(VAR_1, VAR_6))
   return 1;
 }

 if (!FUNC_0(VAR_1))
  return 0;

 if (!VAR_3) {
  VAR_2 = FUNC_5(VAR_2, VAR_0);
  if (!VAR_2) {
   if (FUNC_3())
    FUNC_6(VAR_4->hw.wiphy,
     "failed to copy skb for %s\n",
     VAR_5->name);
   return 1;
  }

  VAR_1->skb = VAR_2;
 }

 FUNC_2(VAR_1);
 return 1;
}
