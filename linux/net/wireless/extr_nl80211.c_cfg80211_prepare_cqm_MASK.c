
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int wiphy; } ;
struct sk_buff {scalar_t__ cb; } ;
struct net_device {int ifindex; struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int wiphy_idx; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (struct sk_buff*,int ,int ,int ,int ) ;
 void* FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ,char const*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 struct cfg80211_registered_device* FUNC_6 (int ) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct net_device *VAR_7,
         const char *VAR_8, gfp_t VAR_9)
{
 struct wireless_dev *VAR_10 = VAR_7->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_11 = FUNC_6(VAR_10->wiphy);
 struct sk_buff *VAR_12 = FUNC_5(VAR_6, VAR_9);
 void **VAR_13;

 if (!VAR_12)
  return ((void*)0);

 VAR_13 = (void **)VAR_12->cb;

 VAR_13[0] = FUNC_0(VAR_12, 0, 0, 0, VAR_5);
 if (!VAR_13[0]) {
  FUNC_4(VAR_12);
  return ((void*)0);
 }

 if (FUNC_3(VAR_12, VAR_4, VAR_11->wiphy_idx) ||
     FUNC_3(VAR_12, VAR_2, VAR_7->ifindex))
  goto nla_put_failure;

 if (VAR_8 && FUNC_2(VAR_12, VAR_3, VAR_0, VAR_8))
  goto nla_put_failure;

 VAR_13[1] = FUNC_1(VAR_12, VAR_1);
 if (!VAR_13[1])
  goto nla_put_failure;

 VAR_13[2] = VAR_11;

 return VAR_12;
 nla_put_failure:
 FUNC_4(VAR_12);
 return ((void*)0);
}
