
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minstrel_priv {scalar_t__* cck_rates; } ;
struct ieee80211_tx_rate {scalar_t__ idx; int flags; int count; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_0(struct minstrel_priv *VAR_2, struct ieee80211_tx_rate *VAR_3)
{
 if (VAR_3->idx < 0)
  return 0;

 if (!VAR_3->count)
  return 0;

 if (VAR_3->flags & VAR_0 ||
     VAR_3->flags & VAR_1)
  return 1;

 return VAR_3->idx == VAR_2->cck_rates[0] ||
        VAR_3->idx == VAR_2->cck_rates[1] ||
        VAR_3->idx == VAR_2->cck_rates[2] ||
        VAR_3->idx == VAR_2->cck_rates[3];
}
