
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tipc_nl_msg {int seq; int portid; struct sk_buff* skb; } ;
struct sk_buff {int len; } ;
struct netlink_callback {int* args; TYPE_1__* nlh; int skb; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct tipc_nl_msg*,int *,int ) ;
 int ** VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(struct sk_buff *VAR_3, struct netlink_callback *VAR_4)
{
 int VAR_5;
 int VAR_6 = VAR_4->args[0];
 struct tipc_nl_msg VAR_7;

 if (VAR_6 == VAR_0)
  return 0;

 VAR_7.skb = VAR_3;
 VAR_7.portid = FUNC_0(VAR_4->skb).portid;
 VAR_7.seq = VAR_4->nlh->nlmsg_seq;

 FUNC_2();
 for (; VAR_2[VAR_6] != ((void*)0); VAR_6++) {
  VAR_5 = FUNC_1(&VAR_7, VAR_2[VAR_6],
       VAR_1);
  if (VAR_5)
   break;
 }
 FUNC_3();

 VAR_4->args[0] = VAR_6;
 return VAR_3->len;
}
