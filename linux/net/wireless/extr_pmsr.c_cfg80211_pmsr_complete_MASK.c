
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int pmsr_lock; int wiphy; } ;
struct sk_buff {int dummy; } ;
struct cfg80211_registered_device {int wiphy_idx; } ;
struct cfg80211_pmsr_request {int list; int nl_portid; int cookie; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int ,struct sk_buff*,int ) ;
 int FUNC_2 (struct cfg80211_pmsr_request*) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,struct wireless_dev*,int ) ;
 int FUNC_12 (struct wireless_dev*) ;
 int FUNC_13 (int ) ;
 struct cfg80211_registered_device* FUNC_14 (int ) ;

void FUNC_15(struct wireless_dev *VAR_6,
       struct cfg80211_pmsr_request *VAR_7,
       gfp_t VAR_8)
{
 struct cfg80211_registered_device *VAR_9 = FUNC_14(VAR_6->wiphy);
 struct sk_buff *VAR_10;
 void *VAR_11;

 FUNC_11(VAR_6->wiphy, VAR_6, VAR_7->cookie);

 VAR_10 = FUNC_8(VAR_5, VAR_8);
 if (!VAR_10)
  goto free_request;

 VAR_11 = FUNC_4(VAR_10, 0, 0, 0,
        VAR_4);
 if (!VAR_11)
  goto free_msg;

 if (FUNC_5(VAR_10, VAR_3, VAR_9->wiphy_idx) ||
     FUNC_6(VAR_10, VAR_2, FUNC_12(VAR_6),
         VAR_1))
  goto free_msg;

 if (FUNC_6(VAR_10, VAR_0, VAR_7->cookie,
         VAR_1))
  goto free_msg;

 FUNC_0(VAR_10, VAR_11);
 FUNC_1(FUNC_13(VAR_6->wiphy), VAR_10, VAR_7->nl_portid);
 goto free_request;
free_msg:
 FUNC_7(VAR_10);
free_request:
 FUNC_9(&VAR_6->pmsr_lock);
 FUNC_3(&VAR_7->list);
 FUNC_10(&VAR_6->pmsr_lock);
 FUNC_2(VAR_7);
}
