
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_local {int hw; } ;
typedef enum queue_stop_reason { ____Placeholder_queue_stop_reason } queue_stop_reason ;


 int FUNC_0 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_1 (int *,int ,int,int) ;

void FUNC_2(struct ieee80211_local *VAR_0,
          struct ieee80211_sub_if_data *VAR_1,
          enum queue_stop_reason VAR_2)
{
 FUNC_1(&VAR_0->hw,
     FUNC_0(VAR_0, VAR_1),
     VAR_2, 1);
}
