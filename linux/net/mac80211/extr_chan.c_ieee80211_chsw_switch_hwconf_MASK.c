
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cfg80211_chan_def {int dummy; } ;
struct TYPE_4__ {int radar_enabled; } ;
struct TYPE_5__ {TYPE_1__ conf; } ;
struct ieee80211_local {struct cfg80211_chan_def _oper_chandef; TYPE_2__ hw; int chanctx_mtx; int mtx; } ;
struct TYPE_6__ {int radar_enabled; } ;
struct ieee80211_chanctx {TYPE_3__ conf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct cfg80211_chan_def* FUNC_1 (struct ieee80211_local*,struct ieee80211_chanctx*,int *) ;
 int FUNC_2 (struct ieee80211_local*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_local *VAR_1,
     struct ieee80211_chanctx *VAR_2)
{
 const struct cfg80211_chan_def *VAR_3;

 FUNC_3(&VAR_1->mtx);
 FUNC_3(&VAR_1->chanctx_mtx);

 VAR_3 = FUNC_1(VAR_1, VAR_2, ((void*)0));
 if (FUNC_0(!VAR_3))
  return -VAR_0;

 VAR_1->hw.conf.radar_enabled = VAR_2->conf.radar_enabled;
 VAR_1->_oper_chandef = *VAR_3;
 FUNC_2(VAR_1, 0);

 return 0;
}
