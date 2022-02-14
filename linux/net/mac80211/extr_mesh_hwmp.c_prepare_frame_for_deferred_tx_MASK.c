
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int priority; scalar_t__ data; } ;
struct TYPE_2__ {int * vif; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_hdr {int dummy; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int *,struct ieee80211_hdr*) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_sub_if_data *VAR_2,
  struct sk_buff *VAR_3)
{
 struct ieee80211_tx_info *VAR_4 = FUNC_0(VAR_3);
 struct ieee80211_hdr *VAR_5 = (struct ieee80211_hdr *) VAR_3->data;

 FUNC_3(VAR_3);
 FUNC_4(VAR_3);
 FUNC_5(VAR_3);


 FUNC_6(VAR_3, VAR_0);
 VAR_3->priority = 7;

 VAR_4->control.vif = &VAR_2->vif;
 VAR_4->flags |= VAR_1;
 FUNC_2(VAR_2, VAR_3);
 FUNC_1(VAR_2, ((void*)0), VAR_5);
}
