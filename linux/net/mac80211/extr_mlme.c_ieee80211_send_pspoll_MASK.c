
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_pspoll {int frame_control; } ;
struct ieee80211_local {int hw; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct sk_buff*) ;

void FUNC_4(struct ieee80211_local *VAR_2,
      struct ieee80211_sub_if_data *VAR_3)
{
 struct ieee80211_pspoll *VAR_4;
 struct sk_buff *VAR_5;

 VAR_5 = FUNC_2(&VAR_2->hw, &VAR_3->vif);
 if (!VAR_5)
  return;

 VAR_4 = (struct ieee80211_pspoll *) VAR_5->data;
 VAR_4->frame_control |= FUNC_1(VAR_0);

 FUNC_0(VAR_5)->flags |= VAR_1;
 FUNC_3(VAR_3, VAR_5);
}
