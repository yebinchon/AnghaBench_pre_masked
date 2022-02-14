
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_local {int scan_work; int hw; scalar_t__ scan_channel_idx; int next_scan_state; int leave_oper_channel_time; int scan_addr; scalar_t__ use_chanctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ) ;
 int FUNC_1 (struct ieee80211_local*) ;
 int FUNC_2 (struct ieee80211_local*,int *,int) ;
 int FUNC_3 (struct ieee80211_local*,int ) ;
 int FUNC_4 (struct ieee80211_local*) ;
 int FUNC_5 (int *,int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct ieee80211_local *VAR_3,
       struct ieee80211_sub_if_data *VAR_4)
{

 if (VAR_3->use_chanctx)
  return -VAR_0;
 FUNC_0(VAR_3, VAR_4, VAR_3->scan_addr);

 VAR_3->leave_oper_channel_time = VAR_2;
 VAR_3->next_scan_state = VAR_1;
 VAR_3->scan_channel_idx = 0;

 FUNC_4(VAR_3);


 FUNC_2(VAR_3, ((void*)0), 0);

 FUNC_1(VAR_3);


 FUNC_3(VAR_3, 0);

 FUNC_5(&VAR_3->hw,
         &VAR_3->scan_work, 0);

 return 0;
}
