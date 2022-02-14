
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct netlink_callback {TYPE_1__* nlh; int skb; } ;
struct ip_vs_service {int dummy; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct ip_vs_service*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_4,
       struct ip_vs_service *VAR_5,
       struct netlink_callback *VAR_6)
{
 void *VAR_7;

 VAR_7 = FUNC_3(VAR_4, FUNC_0(VAR_6->skb).portid, VAR_6->nlh->nlmsg_seq,
     &VAR_3, VAR_2,
     VAR_1);
 if (!VAR_7)
  return -VAR_0;

 if (FUNC_4(VAR_4, VAR_5) < 0)
  goto nla_put_failure;

 FUNC_2(VAR_4, VAR_7);
 return 0;

nla_put_failure:
 FUNC_1(VAR_4, VAR_7);
 return -VAR_0;
}
