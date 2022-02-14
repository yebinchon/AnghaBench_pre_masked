
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ieee80211_local {int dynamic_ps_enable_work; int hw; } ;


 int VAR_0 ;
 struct ieee80211_local* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int *,int *) ;
 struct ieee80211_local* VAR_1 ;

void FUNC_2(struct timer_list *VAR_2)
{
 struct ieee80211_local *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);

 FUNC_1(&VAR_3->hw, &VAR_3->dynamic_ps_enable_work);
}
