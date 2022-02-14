
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {struct ieee80211_chanctx* reserved_chanctx; TYPE_1__* local; } ;
struct ieee80211_chanctx {scalar_t__ replace_state; } ;
struct TYPE_2__ {int chanctx_mtx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct ieee80211_chanctx* FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool
FUNC_3(struct ieee80211_sub_if_data *VAR_2)
{
 struct ieee80211_chanctx *VAR_3, *VAR_4;

 FUNC_2(&VAR_2->local->chanctx_mtx);

 VAR_4 = VAR_2->reserved_chanctx;
 VAR_3 = FUNC_1(VAR_2);

 if (!VAR_3)
  return 0;

 if (FUNC_0(!VAR_4))
  return 0;

 if (VAR_3->replace_state != VAR_1)
  return 0;

 if (VAR_4->replace_state != VAR_0)
  return 0;

 return 1;
}
