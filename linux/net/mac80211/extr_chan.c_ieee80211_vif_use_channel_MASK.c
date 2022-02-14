
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int iftype; } ;
struct ieee80211_sub_if_data {int radar_required; TYPE_2__ wdev; scalar_t__ dev; struct ieee80211_local* local; } ;
struct TYPE_3__ {int wiphy; } ;
struct ieee80211_local {int chanctx_mtx; TYPE_1__ hw; int mtx; } ;
struct ieee80211_chanctx {int dummy; } ;
struct cfg80211_chan_def {int width; } ;
typedef enum ieee80211_chanctx_mode { ____Placeholder_ieee80211_chanctx_mode } ieee80211_chanctx_mode ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ieee80211_chanctx*) ;
 int FUNC_2 (struct ieee80211_chanctx*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ieee80211_sub_if_data*) ;
 int FUNC_5 (int ,struct cfg80211_chan_def const*,int ) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,struct ieee80211_chanctx*) ;
 scalar_t__ FUNC_7 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 int FUNC_8 (struct ieee80211_sub_if_data*,struct cfg80211_chan_def const*,int,int ) ;
 struct ieee80211_chanctx* FUNC_9 (struct ieee80211_local*,struct cfg80211_chan_def const*,int) ;
 int FUNC_10 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 struct ieee80211_chanctx* FUNC_11 (struct ieee80211_local*,struct cfg80211_chan_def const*,int) ;
 int FUNC_12 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 int FUNC_13 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 int FUNC_14 (struct ieee80211_sub_if_data*,struct cfg80211_chan_def const*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (scalar_t__) ;

int FUNC_19(struct ieee80211_sub_if_data *VAR_0,
         const struct cfg80211_chan_def *VAR_1,
         enum ieee80211_chanctx_mode VAR_2)
{
 struct ieee80211_local *VAR_3 = VAR_0->local;
 struct ieee80211_chanctx *VAR_4;
 u8 VAR_5 = 0;
 int VAR_6;

 FUNC_15(&VAR_3->mtx);

 FUNC_3(VAR_0->dev && FUNC_18(VAR_0->dev));

 FUNC_16(&VAR_3->chanctx_mtx);

 VAR_6 = FUNC_5(VAR_3->hw.wiphy,
         VAR_1,
         VAR_0->wdev.iftype);
 if (VAR_6 < 0)
  goto out;
 if (VAR_6 > 0)
  VAR_5 = FUNC_0(VAR_1->width);

 VAR_0->radar_required = VAR_6;

 VAR_6 = FUNC_8(VAR_0, VAR_1, VAR_2,
        VAR_5);
 if (VAR_6 < 0)
  goto out;

 FUNC_4(VAR_0);

 VAR_4 = FUNC_9(VAR_3, VAR_1, VAR_2);
 if (!VAR_4)
  VAR_4 = FUNC_11(VAR_3, VAR_1, VAR_2);
 if (FUNC_1(VAR_4)) {
  VAR_6 = FUNC_2(VAR_4);
  goto out;
 }

 FUNC_14(VAR_0, VAR_1);

 VAR_6 = FUNC_6(VAR_0, VAR_4);
 if (VAR_6) {

  if (FUNC_7(VAR_3, VAR_4) == 0)
   FUNC_10(VAR_3, VAR_4);
  goto out;
 }

 FUNC_13(VAR_3, VAR_4);
 FUNC_12(VAR_3, VAR_4);
 out:
 if (VAR_6)
  VAR_0->radar_required = 0;

 FUNC_17(&VAR_3->chanctx_mtx);
 return VAR_6;
}
