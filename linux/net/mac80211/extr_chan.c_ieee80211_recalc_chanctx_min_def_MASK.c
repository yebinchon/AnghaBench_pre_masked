
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_local {int chanctx_mtx; } ;
struct cfg80211_chan_def {scalar_t__ width; } ;
struct TYPE_2__ {struct cfg80211_chan_def min_def; struct cfg80211_chan_def def; scalar_t__ radar_enabled; } ;
struct ieee80211_chanctx {int driver_present; TYPE_1__ conf; } ;
typedef enum nl80211_chan_width { ____Placeholder_nl80211_chan_width } nl80211_chan_width ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct cfg80211_chan_def*,struct cfg80211_chan_def*) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_chanctx*,int ) ;
 int FUNC_2 (struct cfg80211_chan_def*) ;
 int FUNC_3 (struct ieee80211_local*,TYPE_1__*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ieee80211_local *VAR_3,
          struct ieee80211_chanctx *VAR_4)
{
 enum nl80211_chan_width VAR_5;
 struct cfg80211_chan_def VAR_6;

 FUNC_4(&VAR_3->chanctx_mtx);


 if (VAR_4->conf.def.width == VAR_2 ||
     VAR_4->conf.def.width == VAR_1 ||
     VAR_4->conf.radar_enabled) {
  VAR_4->conf.min_def = VAR_4->conf.def;
  return;
 }

 VAR_5 = FUNC_3(VAR_3, &VAR_4->conf);


 VAR_6 = VAR_4->conf.def;
 while (VAR_6.width > VAR_5)
  FUNC_2(&VAR_6);

 if (FUNC_0(&VAR_4->conf.min_def, &VAR_6))
  return;

 VAR_4->conf.min_def = VAR_6;
 if (!VAR_4->driver_present)
  return;

 FUNC_1(VAR_3, VAR_4, VAR_0);
}
