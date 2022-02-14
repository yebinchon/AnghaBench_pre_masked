
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vif {int dummy; } ;
struct ieee80211_sub_if_data {int csa_finalize_work; TYPE_1__* local; } ;
struct TYPE_2__ {int hw; } ;


 int FUNC_0 (int *,int *) ;
 struct ieee80211_sub_if_data* FUNC_1 (struct ieee80211_vif*) ;

void FUNC_2(struct ieee80211_vif *VAR_0)
{
 struct ieee80211_sub_if_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->local->hw,
        &VAR_1->csa_finalize_work);
}
