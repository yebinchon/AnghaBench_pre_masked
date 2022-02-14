
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int wiphy; } ;
struct sk_buff {int dummy; } ;
struct cfg80211_registered_device {int wiphy_idx; } ;
struct cfg80211_pmsr_result {int addr; } ;
struct cfg80211_pmsr_request {int nl_portid; int cookie; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int ,struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*,struct cfg80211_pmsr_result*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,struct wireless_dev*,int ,int ) ;
 int FUNC_10 (struct wireless_dev*) ;
 int FUNC_11 (int ) ;
 struct cfg80211_registered_device* FUNC_12 (int ) ;

void FUNC_13(struct wireless_dev *VAR_6,
     struct cfg80211_pmsr_request *VAR_7,
     struct cfg80211_pmsr_result *VAR_8,
     gfp_t VAR_9)
{
 struct cfg80211_registered_device *VAR_10 = FUNC_12(VAR_6->wiphy);
 struct sk_buff *VAR_11;
 void *VAR_12;
 int VAR_13;

 FUNC_9(VAR_6->wiphy, VAR_6, VAR_7->cookie,
       VAR_8->addr);






 VAR_11 = FUNC_7(VAR_5, VAR_9);
 if (!VAR_11)
  return;

 VAR_12 = FUNC_3(VAR_11, 0, 0, 0, VAR_4);
 if (!VAR_12)
  goto free;

 if (FUNC_4(VAR_11, VAR_3, VAR_10->wiphy_idx) ||
     FUNC_5(VAR_11, VAR_2, FUNC_10(VAR_6),
         VAR_1))
  goto free;

 if (FUNC_5(VAR_11, VAR_0, VAR_7->cookie,
         VAR_1))
  goto free;

 VAR_13 = FUNC_2(VAR_11, VAR_8);
 if (VAR_13) {
  FUNC_8("peer measurement result: message didn't fit!");
  goto free;
 }

 FUNC_0(VAR_11, VAR_12);
 FUNC_1(FUNC_11(VAR_6->wiphy), VAR_11, VAR_7->nl_portid);
 return;
free:
 FUNC_6(VAR_11);
}
