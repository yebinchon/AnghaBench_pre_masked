
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_if_managed {int timer; int teardown_lock; scalar_t__ assoc_req_ies_len; int * assoc_req_ies; int * orig_teardown_skb; int * teardown_skb; scalar_t__ auth_data; TYPE_2__* assoc_data; int tdls_peer_del_work; int chswitch_work; int csa_connection_drop_work; int request_smps_work; int beacon_connection_loss_work; int monitor_work; } ;
struct TYPE_3__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int dev; TYPE_1__ u; } ;
struct cfg80211_bss {int dummy; } ;
struct TYPE_4__ {struct cfg80211_bss* bss; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct cfg80211_bss*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,int,int) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ieee80211_sub_if_data*) ;
 int FUNC_9 (struct ieee80211_sub_if_data*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct ieee80211_sub_if_data *VAR_0)
{
 struct ieee80211_if_managed *VAR_1 = &VAR_0->u.mgd;






 FUNC_1(&VAR_1->monitor_work);
 FUNC_1(&VAR_1->beacon_connection_loss_work);
 FUNC_1(&VAR_1->request_smps_work);
 FUNC_1(&VAR_1->csa_connection_drop_work);
 FUNC_1(&VAR_1->chswitch_work);
 FUNC_0(&VAR_1->tdls_peer_del_work);

 FUNC_8(VAR_0);
 if (VAR_1->assoc_data) {
  struct cfg80211_bss *VAR_2 = VAR_1->assoc_data->bss;
  FUNC_4(VAR_0, 0, 0);
  FUNC_2(VAR_0->dev, VAR_2);
 }
 if (VAR_1->auth_data)
  FUNC_5(VAR_0, 0);
 FUNC_10(&VAR_1->teardown_lock);
 if (VAR_1->teardown_skb) {
  FUNC_7(VAR_1->teardown_skb);
  VAR_1->teardown_skb = ((void*)0);
  VAR_1->orig_teardown_skb = ((void*)0);
 }
 FUNC_6(VAR_1->assoc_req_ies);
 VAR_1->assoc_req_ies = ((void*)0);
 VAR_1->assoc_req_ies_len = 0;
 FUNC_11(&VAR_1->teardown_lock);
 FUNC_3(&VAR_1->timer);
 FUNC_9(VAR_0);
}
