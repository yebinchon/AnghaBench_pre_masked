
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sta_info {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_tx_data {struct sk_buff* skb; int sta; struct ieee80211_sub_if_data* sdata; int local; } ;
struct ieee80211_sub_if_data {int local; } ;
struct ieee80211_hdr {int addr1; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_1 ;
 struct sk_buff* FUNC_2 (struct ieee80211_sub_if_data*,struct sk_buff*,int ,struct sta_info*,int ) ;
 scalar_t__ FUNC_3 (struct ieee80211_sub_if_data*,struct sk_buff*,struct sta_info**) ;
 scalar_t__ FUNC_4 (struct ieee80211_tx_data*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct ieee80211_sub_if_data*,int ) ;

struct sk_buff *
FUNC_9(struct ieee80211_sub_if_data *VAR_2,
         struct sk_buff *VAR_3, u32 VAR_4)
{
 struct ieee80211_hdr *VAR_5;
 struct ieee80211_tx_data VAR_6 = {
  .local = VAR_2->local,
  .sdata = VAR_2,
 };
 struct sta_info *VAR_7;

 FUNC_6();

 if (FUNC_3(VAR_2, VAR_3, &VAR_7)) {
  FUNC_5(VAR_3);
  VAR_3 = FUNC_0(-VAR_0);
  goto out;
 }

 VAR_3 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_7, 0);
 if (FUNC_1(VAR_3))
  goto out;

 VAR_5 = (void *)VAR_3->data;
 VAR_6.sta = FUNC_8(VAR_2, VAR_5->addr1);
 VAR_6.skb = VAR_3;

 if (FUNC_4(&VAR_6) != VAR_1) {
  FUNC_7();
  FUNC_5(VAR_3);
  return FUNC_0(-VAR_0);
 }

out:
 FUNC_7();
 return VAR_3;
}
