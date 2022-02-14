
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wiphy {int regulatory_flags; } ;
struct sk_buff {int dummy; } ;
struct netlink_callback {int skb; } ;
struct ieee80211_regdomain {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct netlink_callback*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 int FUNC_4 (struct wiphy*) ;
 scalar_t__ FUNC_5 (struct ieee80211_regdomain const*,struct sk_buff*) ;
 void* FUNC_6 (struct sk_buff*,int ,int ,int,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_7, struct netlink_callback *VAR_8,
          u32 VAR_9, int VAR_10, struct wiphy *VAR_11,
          const struct ieee80211_regdomain *VAR_12)
{
 void *VAR_13 = FUNC_6(VAR_7, FUNC_0(VAR_8->skb).portid, VAR_9, VAR_10,
       VAR_4);

 if (!VAR_13)
  return -1;

 FUNC_1(VAR_8, VAR_13);

 if (FUNC_5(VAR_12, VAR_7))
  goto nla_put_failure;

 if (!VAR_11 && FUNC_9() &&
     FUNC_8(VAR_7, VAR_1,
   VAR_5))
  goto nla_put_failure;

 if (VAR_11 &&
     FUNC_8(VAR_7, VAR_2, FUNC_4(VAR_11)))
  goto nla_put_failure;

 if (VAR_11 && VAR_11->regulatory_flags & VAR_6 &&
     FUNC_7(VAR_7, VAR_3))
  goto nla_put_failure;

 FUNC_3(VAR_7, VAR_13);
 return 0;

nla_put_failure:
 FUNC_2(VAR_7, VAR_13);
 return -VAR_0;
}
