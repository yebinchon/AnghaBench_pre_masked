
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tipc_nl_msg {int seq; int portid; struct sk_buff* skb; } ;
struct sk_buff {int len; int sk; } ;
struct netlink_callback {int* args; TYPE_1__* nlh; int skb; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 TYPE_2__ FUNC_0 (int ) ;
 int FUNC_1 (struct net*,struct tipc_nl_msg*) ;
 struct net* FUNC_2 (int ) ;

int FUNC_3(struct sk_buff *VAR_0, struct netlink_callback *VAR_1)
{
 struct net *VAR_2 = FUNC_2(VAR_0->sk);
 int VAR_3;
 int VAR_4 = VAR_1->args[0];
 struct tipc_nl_msg VAR_5;

 if (VAR_4)
  return 0;

 VAR_5.skb = VAR_0;
 VAR_5.portid = FUNC_0(VAR_1->skb).portid;
 VAR_5.seq = VAR_1->nlh->nlmsg_seq;

 VAR_3 = FUNC_1(VAR_2, &VAR_5);
 if (VAR_3)
  goto out;

 VAR_4 = 1;
out:
 VAR_1->args[0] = VAR_4;

 return VAR_0->len;
}
