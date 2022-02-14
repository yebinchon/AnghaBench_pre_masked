
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct minstrel_priv {int * cck_rates; int hw; } ;
struct minstrel_ht_sta {int cck_supported; int * supported; int cck_supported_short; } ;
struct ieee80211_supported_band {scalar_t__ band; TYPE_1__* bitrates; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ieee80211_sta*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_3(struct minstrel_priv *VAR_4, struct minstrel_ht_sta *VAR_5,
         struct ieee80211_supported_band *VAR_6,
         struct ieee80211_sta *VAR_7)
{
 int VAR_8;

 if (VAR_6->band != VAR_2)
  return;

 if (!FUNC_1(VAR_4->hw, VAR_3))
  return;

 VAR_5->cck_supported = 0;
 VAR_5->cck_supported_short = 0;
 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  if (!FUNC_2(VAR_7, VAR_6->band, VAR_4->cck_rates[VAR_8]))
   continue;

  VAR_5->cck_supported |= FUNC_0(VAR_8);
  if (VAR_6->bitrates[VAR_8].flags & VAR_0)
   VAR_5->cck_supported_short |= FUNC_0(VAR_8);
 }

 VAR_5->supported[VAR_1] = VAR_5->cck_supported;
}
