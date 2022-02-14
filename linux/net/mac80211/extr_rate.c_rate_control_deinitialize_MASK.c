
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rate_control_ref {int dummy; } ;
struct ieee80211_local {struct rate_control_ref* rate_ctrl; } ;


 int FUNC_0 (struct ieee80211_local*,struct rate_control_ref*) ;

void FUNC_1(struct ieee80211_local *VAR_0)
{
 struct rate_control_ref *VAR_1;

 VAR_1 = VAR_0->rate_ctrl;

 if (!VAR_1)
  return;

 VAR_0->rate_ctrl = ((void*)0);
 FUNC_0(VAR_0, VAR_1);
}
