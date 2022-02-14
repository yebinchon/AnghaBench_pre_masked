
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ieee80211_vif_chanctx_switch {int * new_ctx; int * old_ctx; TYPE_3__* vif; } ;
struct TYPE_9__ {scalar_t__ width; } ;
struct TYPE_6__ {scalar_t__ width; } ;
struct TYPE_7__ {TYPE_1__ chandef; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__ bss_conf; int chanctx_conf; } ;
struct ieee80211_sub_if_data {TYPE_4__ reserved_chandef; TYPE_3__ vif; int assigned_chanctx_list; struct ieee80211_chanctx* reserved_chanctx; int reserved_chanctx_list; int reserved_ready; struct ieee80211_local* local; } ;
struct ieee80211_local {int chanctx_mtx; int mtx; } ;
struct ieee80211_chanctx {scalar_t__ replace_state; int conf; int assigned_vifs; } ;
struct cfg80211_chan_def {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_vif_chanctx_switch*,int,int ) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,scalar_t__) ;
 struct cfg80211_chan_def* FUNC_4 (struct ieee80211_local*,struct ieee80211_chanctx*,TYPE_4__*) ;
 scalar_t__ FUNC_5 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 int FUNC_6 (struct ieee80211_local*,struct ieee80211_chanctx*,struct cfg80211_chan_def const*) ;
 int FUNC_7 (struct ieee80211_sub_if_data*) ;
 int FUNC_8 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 int FUNC_9 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 int FUNC_10 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 int FUNC_11 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 int FUNC_12 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_chanctx* FUNC_13 (struct ieee80211_sub_if_data*) ;
 int FUNC_14 (struct ieee80211_sub_if_data*,TYPE_4__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,int *) ;

__attribute__((used)) static int
FUNC_19(struct ieee80211_sub_if_data *VAR_6)
{
 struct ieee80211_local *VAR_7 = VAR_6->local;
 struct ieee80211_vif_chanctx_switch VAR_8[1] = {};
 struct ieee80211_chanctx *VAR_9, *VAR_10;
 const struct cfg80211_chan_def *VAR_11;
 u32 VAR_12 = 0;
 int VAR_13;

 FUNC_17(&VAR_7->mtx);
 FUNC_17(&VAR_7->chanctx_mtx);

 VAR_10 = VAR_6->reserved_chanctx;
 VAR_9 = FUNC_13(VAR_6);

 if (FUNC_0(!VAR_6->reserved_ready))
  return -VAR_2;

 if (FUNC_0(!VAR_10))
  return -VAR_3;

 if (FUNC_0(!VAR_9))
  return -VAR_3;

 if (FUNC_0(VAR_10->replace_state ==
      VAR_4))
  return -VAR_3;

 VAR_11 = FUNC_4(VAR_7, VAR_10,
    &VAR_6->reserved_chandef);
 if (FUNC_0(!VAR_11))
  return -VAR_3;

 FUNC_6(VAR_7, VAR_10, VAR_11);

 VAR_8[0].vif = &VAR_6->vif;
 VAR_8[0].old_ctx = &VAR_9->conf;
 VAR_8[0].new_ctx = &VAR_10->conf;

 FUNC_15(&VAR_6->reserved_chanctx_list);
 VAR_6->reserved_chanctx = ((void*)0);

 VAR_13 = FUNC_2(VAR_7, VAR_8, 1,
         VAR_1);
 if (VAR_13) {
  if (FUNC_5(VAR_7, VAR_10) == 0)
   FUNC_8(VAR_7, VAR_10);

  goto out;
 }

 FUNC_16(&VAR_6->assigned_chanctx_list, &VAR_10->assigned_vifs);
 FUNC_18(VAR_6->vif.chanctx_conf, &VAR_10->conf);

 if (VAR_6->vif.type == VAR_5)
  FUNC_1(VAR_6, 0);

 FUNC_7(VAR_6);

 if (FUNC_5(VAR_7, VAR_9) == 0)
  FUNC_8(VAR_7, VAR_9);

 if (VAR_6->vif.bss_conf.chandef.width != VAR_6->reserved_chandef.width)
  VAR_12 = VAR_0;

 FUNC_14(VAR_6, &VAR_6->reserved_chandef);

 FUNC_11(VAR_7, VAR_10);
 FUNC_10(VAR_7, VAR_10);
 FUNC_9(VAR_7, VAR_10);

 if (VAR_12)
  FUNC_3(VAR_6, VAR_12);

out:
 FUNC_12(VAR_6);
 return VAR_13;
}
