
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tipc_nl_msg {int seq; int portid; struct sk_buff* skb; } ;
struct sk_buff {int len; int sk; } ;
struct netlink_callback {int* args; TYPE_1__* nlh; int skb; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (int ) ;
 int FUNC_1 (struct net*,struct tipc_nl_msg*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct net* FUNC_4 (int ) ;

int FUNC_5(struct sk_buff *VAR_1, struct netlink_callback *VAR_2)
{
 struct net *VAR_3 = FUNC_4(VAR_1->sk);
 u32 VAR_4 = VAR_2->args[0];
 struct tipc_nl_msg VAR_5;
 int VAR_6;
 int VAR_7;

 if (VAR_4 == VAR_0)
  return 0;

 VAR_5.skb = VAR_1;
 VAR_5.portid = FUNC_0(VAR_2->skb).portid;
 VAR_5.seq = VAR_2->nlh->nlmsg_seq;

 FUNC_2();
 for (VAR_6 = VAR_4; VAR_6 < VAR_0; VAR_6++) {
  VAR_7 = FUNC_1(VAR_3, &VAR_5, VAR_6);
  if (VAR_7)
   break;
 }
 FUNC_3();
 VAR_2->args[0] = VAR_6;

 return VAR_1->len;
}
