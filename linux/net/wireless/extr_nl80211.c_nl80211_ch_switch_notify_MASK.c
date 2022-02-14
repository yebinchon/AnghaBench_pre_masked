
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; } ;
struct cfg80211_registered_device {int wiphy; } ;
struct cfg80211_chan_def {int dummy; } ;
typedef int gfp_t ;
typedef enum nl80211_commands { ____Placeholder_nl80211_commands } nl80211_commands ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct cfg80211_chan_def*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct cfg80211_registered_device *VAR_6,
         struct net_device *VAR_7,
         struct cfg80211_chan_def *VAR_8,
         gfp_t VAR_9,
         enum nl80211_commands VAR_10,
         u8 VAR_11)
{
 struct sk_buff *VAR_12;
 void *VAR_13;

 VAR_12 = FUNC_6(VAR_4, VAR_9);
 if (!VAR_12)
  return;

 VAR_13 = FUNC_3(VAR_12, 0, 0, 0, VAR_10);
 if (!VAR_13) {
  FUNC_5(VAR_12);
  return;
 }

 if (FUNC_4(VAR_12, VAR_1, VAR_7->ifindex))
  goto nla_put_failure;

 if (FUNC_2(VAR_12, VAR_8))
  goto nla_put_failure;

 if ((VAR_10 == VAR_2) &&
     (FUNC_4(VAR_12, VAR_0, VAR_11)))
   goto nla_put_failure;

 FUNC_0(VAR_12, VAR_13);

 FUNC_1(&VAR_5, FUNC_7(&VAR_6->wiphy), VAR_12, 0,
    VAR_3, VAR_9);
 return;

 nla_put_failure:
 FUNC_5(VAR_12);
}
