
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int chanctx_mtx; } ;
struct ieee80211_chanctx {int reserved_vifs; } ;
struct cfg80211_chan_def {int dummy; } ;


 scalar_t__ FUNC_0 (struct ieee80211_local*,struct ieee80211_chanctx*,struct cfg80211_chan_def const*) ;
 scalar_t__ FUNC_1 (struct ieee80211_local*,struct ieee80211_chanctx*,struct cfg80211_chan_def const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool
FUNC_4(struct ieee80211_local *VAR_0,
          struct ieee80211_chanctx *VAR_1,
          const struct cfg80211_chan_def *VAR_2)
{
 FUNC_3(&VAR_0->chanctx_mtx);

 if (FUNC_0(VAR_0, VAR_1, VAR_2))
  return 1;

 if (!FUNC_2(&VAR_1->reserved_vifs) &&
     FUNC_1(VAR_0, VAR_1, VAR_2))
  return 1;

 return 0;
}
