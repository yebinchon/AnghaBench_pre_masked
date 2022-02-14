
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; struct cfg80211_registered_device** user_ptr; } ;
struct TYPE_2__ {int coalesce; } ;
struct cfg80211_registered_device {scalar_t__ coalesce; TYPE_1__ wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,struct genl_info*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct cfg80211_registered_device*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 struct cfg80211_registered_device *VAR_8 = VAR_7->user_ptr[0];
 struct sk_buff *VAR_9;
 void *VAR_10;

 if (!VAR_8->wiphy.coalesce)
  return -VAR_2;

 VAR_9 = FUNC_5(VAR_5, VAR_3);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_3(VAR_9, VAR_7->snd_portid, VAR_7->snd_seq, 0,
        VAR_4);
 if (!VAR_10)
  goto nla_put_failure;

 if (VAR_8->coalesce && FUNC_2(VAR_9, VAR_8))
  goto nla_put_failure;

 FUNC_0(VAR_9, VAR_10);
 return FUNC_1(VAR_9, VAR_7);

nla_put_failure:
 FUNC_4(VAR_9);
 return -VAR_0;
}
