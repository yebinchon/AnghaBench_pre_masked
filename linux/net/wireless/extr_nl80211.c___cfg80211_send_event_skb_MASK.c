
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct nlmsghdr {scalar_t__ nlmsg_pid; } ;
struct nlattr {scalar_t__ nla_type; } ;
struct cfg80211_registered_device {int wiphy; } ;
typedef int gfp_t ;
typedef enum nl80211_multicast_groups { ____Placeholder_nl80211_multicast_groups } nl80211_multicast_groups ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,int ,struct sk_buff*,int ,int,int ) ;
 int FUNC_2 (int ,struct sk_buff*,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int VAR_3 ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlmsghdr* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct sk_buff *VAR_4, gfp_t VAR_5)
{
 struct cfg80211_registered_device *VAR_6 = ((void **)VAR_4->cb)[0];
 void *VAR_7 = ((void **)VAR_4->cb)[1];
 struct nlmsghdr *VAR_8 = FUNC_5(VAR_4);
 struct nlattr *VAR_9 = ((void **)VAR_4->cb)[2];
 enum nl80211_multicast_groups VAR_10 = VAR_1;


 FUNC_3(VAR_4->cb, 0, sizeof(VAR_4->cb));

 FUNC_4(VAR_4, VAR_9);
 FUNC_0(VAR_4, VAR_7);

 if (VAR_8->nlmsg_pid) {
  FUNC_2(FUNC_6(&VAR_6->wiphy), VAR_4,
    VAR_8->nlmsg_pid);
 } else {
  if (VAR_9->nla_type == VAR_0)
   VAR_10 = VAR_2;

  FUNC_1(&VAR_3, FUNC_6(&VAR_6->wiphy),
     VAR_4, 0, VAR_10, VAR_5);
 }
}
