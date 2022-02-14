
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tipc_sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {TYPE_1__* nlh; int skb; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct tipc_sock*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 int FUNC_6 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_7 (struct sk_buff*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_5, struct netlink_callback *VAR_6,
       struct tipc_sock *VAR_7)
{
 struct nlattr *VAR_8;
 void *VAR_9;

 VAR_9 = FUNC_4(VAR_5, FUNC_0(VAR_6->skb).portid, VAR_6->nlh->nlmsg_seq,
     &VAR_4, VAR_1, VAR_3);
 if (!VAR_9)
  goto msg_cancel;

 VAR_8 = FUNC_7(VAR_5, VAR_2);
 if (!VAR_8)
  goto genlmsg_cancel;

 if (FUNC_1(VAR_5, VAR_7))
  goto attr_msg_cancel;

 FUNC_6(VAR_5, VAR_8);
 FUNC_3(VAR_5, VAR_9);

 return 0;

attr_msg_cancel:
 FUNC_5(VAR_5, VAR_8);
genlmsg_cancel:
 FUNC_2(VAR_5, VAR_9);
msg_cancel:
 return -VAR_0;
}
