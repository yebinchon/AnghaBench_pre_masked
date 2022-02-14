
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct minstrel_priv {int* cck_rates; TYPE_3__* hw; } ;
struct ieee80211_supported_band {int n_bitrates; struct ieee80211_rate* bitrates; } ;
struct ieee80211_rate {int flags; int const bitrate; } ;
struct TYPE_4__ {int chandef; } ;
struct TYPE_6__ {TYPE_2__* wiphy; TYPE_1__ conf; } ;
struct TYPE_5__ {struct ieee80211_supported_band** bands; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct minstrel_priv *VAR_2)
{
 static const int VAR_3[4] = { 10, 20, 55, 110 };
 struct ieee80211_supported_band *VAR_4;
 u32 VAR_5 = FUNC_1(&VAR_2->hw->conf.chandef);
 int VAR_6, VAR_7;

 VAR_4 = VAR_2->hw->wiphy->bands[VAR_1];
 if (!VAR_4)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_4->n_bitrates; VAR_6++) {
  struct ieee80211_rate *VAR_8 = &VAR_4->bitrates[VAR_6];

  if (VAR_8->flags & VAR_0)
   continue;

  if ((VAR_5 & VAR_4->bitrates[VAR_6].flags) != VAR_5)
   continue;

  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
   if (VAR_8->bitrate != VAR_3[VAR_7])
    continue;

   VAR_2->cck_rates[VAR_7] = VAR_6;
   break;
  }
 }
}
