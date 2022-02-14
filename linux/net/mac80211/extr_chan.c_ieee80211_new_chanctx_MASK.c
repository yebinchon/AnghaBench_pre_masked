
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int chanctx_list; int chanctx_mtx; int mtx; } ;
struct ieee80211_chanctx {int list; } ;
struct cfg80211_chan_def {int dummy; } ;
typedef enum ieee80211_chanctx_mode { ____Placeholder_ieee80211_chanctx_mode } ieee80211_chanctx_mode ;


 int VAR_0 ;
 struct ieee80211_chanctx* FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 struct ieee80211_chanctx* FUNC_2 (struct ieee80211_local*,struct cfg80211_chan_def const*,int) ;
 int FUNC_3 (struct ieee80211_chanctx*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct ieee80211_chanctx *
FUNC_6(struct ieee80211_local *VAR_1,
        const struct cfg80211_chan_def *VAR_2,
        enum ieee80211_chanctx_mode VAR_3)
{
 struct ieee80211_chanctx *VAR_4;
 int VAR_5;

 FUNC_5(&VAR_1->mtx);
 FUNC_5(&VAR_1->chanctx_mtx);

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_1(VAR_1, VAR_4);
 if (VAR_5) {
  FUNC_3(VAR_4);
  return FUNC_0(VAR_5);
 }

 FUNC_4(&VAR_4->list, &VAR_1->chanctx_list);
 return VAR_4;
}
