
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txq_info {int txq; } ;
struct ieee80211_local {int hw; } ;


 int FUNC_0 (struct ieee80211_local*,struct txq_info*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline void FUNC_2(struct ieee80211_local *VAR_0,
      struct txq_info *VAR_1)
{
 FUNC_1(&VAR_0->hw, &VAR_1->txq);
 FUNC_0(VAR_0, VAR_1);
}
