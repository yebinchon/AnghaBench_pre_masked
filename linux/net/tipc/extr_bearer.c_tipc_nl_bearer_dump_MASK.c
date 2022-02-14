
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tipc_nl_msg {int seq; int portid; struct sk_buff* skb; } ;
struct tipc_net {int * bearer_list; } ;
struct tipc_bearer {int dummy; } ;
struct sk_buff {int len; int sk; } ;
struct netlink_callback {int* args; TYPE_1__* nlh; int skb; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct tipc_nl_msg*,struct tipc_bearer*,int ) ;
 struct tipc_net* FUNC_2 (struct net*,int ) ;
 struct tipc_bearer* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct net* FUNC_6 (int ) ;
 int VAR_2 ;

int FUNC_7(struct sk_buff *VAR_3, struct netlink_callback *VAR_4)
{
 int VAR_5;
 int VAR_6 = VAR_4->args[0];
 struct tipc_bearer *VAR_7;
 struct tipc_nl_msg VAR_8;
 struct net *VAR_9 = FUNC_6(VAR_3->sk);
 struct tipc_net *VAR_10 = FUNC_2(VAR_9, VAR_2);

 if (VAR_6 == VAR_0)
  return 0;

 VAR_8.skb = VAR_3;
 VAR_8.portid = FUNC_0(VAR_4->skb).portid;
 VAR_8.seq = VAR_4->nlh->nlmsg_seq;

 FUNC_4();
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_7 = FUNC_3(VAR_10->bearer_list[VAR_6]);
  if (!VAR_7)
   continue;

  VAR_5 = FUNC_1(&VAR_8, VAR_7, VAR_1);
  if (VAR_5)
   break;
 }
 FUNC_5();

 VAR_4->args[0] = VAR_6;
 return VAR_3->len;
}
