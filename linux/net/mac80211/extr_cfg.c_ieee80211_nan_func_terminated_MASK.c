
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct ieee80211_vif {scalar_t__ type; } ;
struct TYPE_3__ {int func_lock; int function_inst_ids; } ;
struct TYPE_4__ {TYPE_1__ nan; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;
struct cfg80211_nan_func {int cookie; } ;
typedef int gfp_t ;
typedef enum nl80211_nan_func_term_reason { ____Placeholder_nl80211_nan_func_term_reason } nl80211_nan_func_term_reason ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct cfg80211_nan_func*) ;
 int FUNC_2 (int ,int ,int,int ,int ) ;
 struct cfg80211_nan_func* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct ieee80211_vif*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct ieee80211_sub_if_data* FUNC_8 (struct ieee80211_vif*) ;

void FUNC_9(struct ieee80211_vif *VAR_1,
       u8 VAR_2,
       enum nl80211_nan_func_term_reason VAR_3,
       gfp_t VAR_4)
{
 struct ieee80211_sub_if_data *VAR_5 = FUNC_8(VAR_1);
 struct cfg80211_nan_func *VAR_6;
 u64 VAR_7;

 if (FUNC_0(VAR_1->type != VAR_0))
  return;

 FUNC_6(&VAR_5->u.nan.func_lock);

 VAR_6 = FUNC_3(&VAR_5->u.nan.function_inst_ids, VAR_2);
 if (FUNC_0(!VAR_6)) {
  FUNC_7(&VAR_5->u.nan.func_lock);
  return;
 }

 VAR_7 = VAR_6->cookie;
 FUNC_4(&VAR_5->u.nan.function_inst_ids, VAR_2);

 FUNC_7(&VAR_5->u.nan.func_lock);

 FUNC_1(VAR_6);

 FUNC_2(FUNC_5(VAR_1), VAR_2,
         VAR_3, VAR_7, VAR_4);
}
