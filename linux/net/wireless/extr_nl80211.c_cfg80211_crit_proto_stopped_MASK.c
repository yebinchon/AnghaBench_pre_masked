
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct wireless_dev {int wiphy; } ;
struct sk_buff {int dummy; } ;
struct cfg80211_registered_device {int wiphy; int wiphy_idx; scalar_t__ crit_proto_nlportid; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int ,struct sk_buff*,scalar_t__) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct wireless_dev*) ;
 int FUNC_8 (int *) ;
 struct cfg80211_registered_device* FUNC_9 (int ) ;

void FUNC_10(struct wireless_dev *VAR_5, gfp_t VAR_6)
{
 struct cfg80211_registered_device *VAR_7;
 struct sk_buff *VAR_8;
 void *VAR_9;
 u32 VAR_10;

 VAR_7 = FUNC_9(VAR_5->wiphy);
 if (!VAR_7->crit_proto_nlportid)
  return;

 VAR_10 = VAR_7->crit_proto_nlportid;
 VAR_7->crit_proto_nlportid = 0;

 VAR_8 = FUNC_6(VAR_4, VAR_6);
 if (!VAR_8)
  return;

 VAR_9 = FUNC_2(VAR_8, 0, 0, 0, VAR_3);
 if (!VAR_9)
  goto nla_put_failure;

 if (FUNC_3(VAR_8, VAR_2, VAR_7->wiphy_idx) ||
     FUNC_4(VAR_8, VAR_1, FUNC_7(VAR_5),
         VAR_0))
  goto nla_put_failure;

 FUNC_0(VAR_8, VAR_9);

 FUNC_1(FUNC_8(&VAR_7->wiphy), VAR_8, VAR_10);
 return;

 nla_put_failure:
 FUNC_5(VAR_8);
}
