
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct minstrel_rate_stats {int dummy; } ;
struct minstrel_priv {scalar_t__* cck_rates; } ;
struct minstrel_ht_sta {int* supported; TYPE_1__* groups; } ;
struct ieee80211_tx_rate {int flags; int idx; } ;
struct TYPE_2__ {struct minstrel_rate_stats* rates; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ieee80211_tx_rate*) ;
 int FUNC_3 (struct ieee80211_tx_rate*) ;
 int FUNC_4 (struct ieee80211_tx_rate*) ;

__attribute__((used)) static struct minstrel_rate_stats *
FUNC_5(struct minstrel_priv *VAR_4, struct minstrel_ht_sta *VAR_5,
        struct ieee80211_tx_rate *VAR_6)
{
 int VAR_7, VAR_8;

 if (VAR_6->flags & VAR_0) {
  VAR_7 = FUNC_3(VAR_6);
  VAR_8 = VAR_6->idx % 8;
 } else if (VAR_6->flags & VAR_2) {
  VAR_7 = FUNC_4(VAR_6);
  VAR_8 = FUNC_2(VAR_6);
 } else {
  VAR_7 = VAR_3;

  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4->cck_rates); VAR_8++)
   if (VAR_6->idx == VAR_4->cck_rates[VAR_8])
    break;


  if ((VAR_5->supported[VAR_7] & FUNC_1(VAR_8 + 4)) &&
      (VAR_6->flags & VAR_1))
   VAR_8 += 4;
 }
 return &VAR_5->groups[VAR_7].rates[VAR_8];
}
