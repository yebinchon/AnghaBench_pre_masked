
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct tipc_nl_msg {int seq; int portid; struct sk_buff* skb; } ;
struct sk_buff {int len; int sk; } ;
struct netlink_callback {int* args; int prev_seq; TYPE_1__* nlh; int skb; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct net* FUNC_3 (int ) ;
 int FUNC_4 (struct net*,struct tipc_nl_msg*,void**,void**,void**) ;

int FUNC_5(struct sk_buff *VAR_1, struct netlink_callback *VAR_2)
{
 struct net *VAR_3 = FUNC_3(VAR_1->sk);
 u32 VAR_4 = VAR_2->args[0];
 u32 VAR_5 = VAR_2->args[1];
 u32 VAR_6 = VAR_2->args[2];
 int VAR_7 = VAR_2->args[3];
 struct tipc_nl_msg VAR_8;
 int VAR_9;

 if (VAR_7)
  return 0;

 VAR_8.skb = VAR_1;
 VAR_8.portid = FUNC_0(VAR_2->skb).portid;
 VAR_8.seq = VAR_2->nlh->nlmsg_seq;

 FUNC_1();
 VAR_9 = FUNC_4(VAR_3, &VAR_8, &VAR_4,
       &VAR_5, &VAR_6);
 if (!VAR_9) {
  VAR_7 = 1;
 } else if (VAR_9 != -VAR_0) {






  VAR_2->prev_seq = 1;
 }
 FUNC_2();

 VAR_2->args[0] = VAR_4;
 VAR_2->args[1] = VAR_5;
 VAR_2->args[2] = VAR_6;
 VAR_2->args[3] = VAR_7;

 return VAR_1->len;
}
