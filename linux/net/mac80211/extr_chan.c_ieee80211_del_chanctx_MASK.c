
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int radar_enabled; } ;
struct TYPE_6__ {TYPE_2__ conf; } ;
struct cfg80211_chan_def {scalar_t__ center_freq2; TYPE_1__* chan; int center_freq1; int width; } ;
struct ieee80211_local {TYPE_3__ hw; int chanctx_list; struct cfg80211_chan_def _oper_chandef; int use_chanctx; int chanctx_mtx; } ;
struct ieee80211_chanctx {int dummy; } ;
struct TYPE_4__ {int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 int FUNC_2 (struct ieee80211_local*,int ) ;
 int FUNC_3 (struct ieee80211_local*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_local *VAR_2,
      struct ieee80211_chanctx *VAR_3)
{
 FUNC_5(&VAR_2->chanctx_mtx);

 if (!VAR_2->use_chanctx) {
  struct cfg80211_chan_def *VAR_4 = &VAR_2->_oper_chandef;
  VAR_4->width = VAR_1;
  VAR_4->center_freq1 = VAR_4->chan->center_freq;
  VAR_4->center_freq2 = 0;




  FUNC_0(VAR_2->hw.conf.radar_enabled &&
   !FUNC_4(&VAR_2->chanctx_list));

  VAR_2->hw.conf.radar_enabled = 0;

  FUNC_2(VAR_2, VAR_0);
 } else {
  FUNC_1(VAR_2, VAR_3);
 }

 FUNC_3(VAR_2);
}
