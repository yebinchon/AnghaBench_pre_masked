
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg80211_chan_def {int dummy; } ;
struct ieee80211_local {struct cfg80211_chan_def _oper_chandef; int use_chanctx; } ;
struct TYPE_2__ {struct cfg80211_chan_def def; } ;
struct ieee80211_chanctx {TYPE_1__ conf; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cfg80211_chan_def*,struct cfg80211_chan_def const*) ;
 scalar_t__ FUNC_2 (struct cfg80211_chan_def*,struct cfg80211_chan_def const*) ;
 int FUNC_3 (struct ieee80211_local*,struct ieee80211_chanctx*,int ) ;
 int FUNC_4 (struct ieee80211_local*,int ) ;
 int FUNC_5 (struct ieee80211_local*,struct ieee80211_chanctx*) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_local *VAR_1,
         struct ieee80211_chanctx *VAR_2,
         const struct cfg80211_chan_def *VAR_3)
{
 if (FUNC_2(&VAR_2->conf.def, VAR_3)) {
  FUNC_5(VAR_1, VAR_2);
  return;
 }

 FUNC_0(!FUNC_1(&VAR_2->conf.def, VAR_3));

 VAR_2->conf.def = *VAR_3;
 FUNC_3(VAR_1, VAR_2, VAR_0);
 FUNC_5(VAR_1, VAR_2);

 if (!VAR_1->use_chanctx) {
  VAR_1->_oper_chandef = *VAR_3;
  FUNC_4(VAR_1, 0);
 }
}
