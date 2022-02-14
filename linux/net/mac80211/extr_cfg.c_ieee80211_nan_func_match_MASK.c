
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_vif {scalar_t__ type; } ;
struct TYPE_3__ {int func_lock; int function_inst_ids; } ;
struct TYPE_4__ {TYPE_1__ nan; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;
struct cfg80211_nan_match_params {int cookie; int inst_id; } ;
struct cfg80211_nan_func {int cookie; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,struct cfg80211_nan_match_params*,int ) ;
 struct cfg80211_nan_func* FUNC_2 (int *,int ) ;
 int FUNC_3 (struct ieee80211_vif*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct ieee80211_sub_if_data* FUNC_6 (struct ieee80211_vif*) ;

void FUNC_7(struct ieee80211_vif *VAR_1,
         struct cfg80211_nan_match_params *VAR_2,
         gfp_t VAR_3)
{
 struct ieee80211_sub_if_data *VAR_4 = FUNC_6(VAR_1);
 struct cfg80211_nan_func *VAR_5;

 if (FUNC_0(VAR_1->type != VAR_0))
  return;

 FUNC_4(&VAR_4->u.nan.func_lock);

 VAR_5 = FUNC_2(&VAR_4->u.nan.function_inst_ids, VAR_2->inst_id);
 if (FUNC_0(!VAR_5)) {
  FUNC_5(&VAR_4->u.nan.func_lock);
  return;
 }
 VAR_2->cookie = VAR_5->cookie;

 FUNC_5(&VAR_4->u.nan.func_lock);

 FUNC_1(FUNC_3(VAR_1), VAR_2, VAR_3);
}
