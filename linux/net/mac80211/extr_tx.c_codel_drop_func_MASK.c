
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vif; } ;
struct txq_info {TYPE_1__ txq; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_local {struct ieee80211_hw hw; } ;
struct TYPE_4__ {struct ieee80211_local* local; } ;


 int FUNC_0 (struct ieee80211_hw*,struct sk_buff*) ;
 TYPE_2__* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0,
       void *VAR_1)
{
 struct ieee80211_local *VAR_2;
 struct ieee80211_hw *VAR_3;
 struct txq_info *VAR_4;

 VAR_4 = VAR_1;
 VAR_2 = FUNC_1(VAR_4->txq.vif)->local;
 VAR_3 = &VAR_2->hw;

 FUNC_0(VAR_3, VAR_0);
}
