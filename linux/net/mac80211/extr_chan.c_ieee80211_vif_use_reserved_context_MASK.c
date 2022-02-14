
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int reserved_ready; struct ieee80211_chanctx* reserved_chanctx; struct ieee80211_local* local; } ;
struct TYPE_2__ {int wiphy; } ;
struct ieee80211_local {TYPE_1__ hw; int chanctx_mtx; int mtx; } ;
struct ieee80211_chanctx {scalar_t__ replace_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 struct ieee80211_chanctx* FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 int FUNC_4 (struct ieee80211_local*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int) ;

int FUNC_7(struct ieee80211_sub_if_data *VAR_5)
{
 struct ieee80211_local *VAR_6 = VAR_5->local;
 struct ieee80211_chanctx *VAR_7;
 struct ieee80211_chanctx *VAR_8;
 int VAR_9;

 FUNC_5(&VAR_6->mtx);
 FUNC_5(&VAR_6->chanctx_mtx);

 VAR_7 = VAR_5->reserved_chanctx;
 VAR_8 = FUNC_1(VAR_5);

 if (FUNC_0(!VAR_7))
  return -VAR_1;

 if (FUNC_0(VAR_7->replace_state ==
      VAR_4))
  return -VAR_1;

 if (FUNC_0(VAR_5->reserved_ready))
  return -VAR_1;

 VAR_5->reserved_ready = 1;

 if (VAR_7->replace_state == VAR_3) {
  if (VAR_8)
   VAR_9 = FUNC_3(VAR_5);
  else
   VAR_9 = FUNC_2(VAR_5);

  if (VAR_9)
   return VAR_9;
 }
 if ((VAR_8 &&
      VAR_8->replace_state == VAR_4) ||
     VAR_7->replace_state == VAR_2) {
  VAR_9 = FUNC_4(VAR_6);
  if (VAR_9 && VAR_9 != -VAR_0) {
   if (VAR_7->replace_state ==
       VAR_2)
    return VAR_9;

   FUNC_6(VAR_6->hw.wiphy,
       "depending in-place reservation failed (err=%d)\n",
       VAR_9);
  }
 }

 return 0;
}
