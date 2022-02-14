
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct probe_resp {int len; int data; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_if_ap {int probe_resp; } ;
struct TYPE_4__ {struct ieee80211_if_ap ap; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; TYPE_1__ vif; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int addr1; } ;


 scalar_t__ VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct probe_resp* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct sk_buff*,int ,int ) ;
 struct ieee80211_sub_if_data* FUNC_6 (struct ieee80211_vif*) ;

struct sk_buff *FUNC_7(struct ieee80211_hw *VAR_1,
     struct ieee80211_vif *VAR_2)
{
 struct ieee80211_if_ap *VAR_3 = ((void*)0);
 struct sk_buff *VAR_4 = ((void*)0);
 struct probe_resp *VAR_5 = ((void*)0);
 struct ieee80211_hdr *VAR_6;
 struct ieee80211_sub_if_data *VAR_7 = FUNC_6(VAR_2);

 if (VAR_7->vif.type != VAR_0)
  return ((void*)0);

 FUNC_3();

 VAR_3 = &VAR_7->u.ap;
 VAR_5 = FUNC_2(VAR_3->probe_resp);
 if (!VAR_5)
  goto out;

 VAR_4 = FUNC_0(VAR_5->len);
 if (!VAR_4)
  goto out;

 FUNC_5(VAR_4, VAR_5->data, VAR_5->len);

 VAR_6 = (struct ieee80211_hdr *) VAR_4->data;
 FUNC_1(VAR_6->addr1, 0, sizeof(VAR_6->addr1));

out:
 FUNC_4();
 return VAR_4;
}
