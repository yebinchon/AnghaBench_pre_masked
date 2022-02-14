
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int chanctx_mtx; } ;
struct ieee80211_chanctx {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;


 struct cfg80211_chan_def* FUNC_0 (struct ieee80211_local*,struct ieee80211_chanctx*,struct cfg80211_chan_def const*) ;
 struct cfg80211_chan_def* FUNC_1 (struct ieee80211_local*,struct ieee80211_chanctx*,struct cfg80211_chan_def const*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static const struct cfg80211_chan_def *
FUNC_3(struct ieee80211_local *VAR_0,
       struct ieee80211_chanctx *VAR_1,
       const struct cfg80211_chan_def *VAR_2)
{
 FUNC_2(&VAR_0->chanctx_mtx);

 VAR_2 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (!VAR_2)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (!VAR_2)
  return ((void*)0);

 return VAR_2;
}
