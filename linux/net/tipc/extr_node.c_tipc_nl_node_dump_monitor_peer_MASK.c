
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct tipc_nl_msg {int seq; int portid; struct sk_buff* skb; } ;
struct sk_buff {int len; int sk; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {int* args; TYPE_1__* nlh; int skb; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 int VAR_0 ;
 void* VAR_1 ;
 TYPE_2__ FUNC_0 (int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 void* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct net* FUNC_5 (int ) ;
 int FUNC_6 (struct net*,struct tipc_nl_msg*,void*,void**) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_1__*,struct nlattr***) ;

int FUNC_8(struct sk_buff *VAR_6,
       struct netlink_callback *VAR_7)
{
 struct net *VAR_8 = FUNC_5(VAR_6->sk);
 u32 VAR_9 = VAR_7->args[1];
 u32 VAR_10 = VAR_7->args[2];
 int VAR_11 = VAR_7->args[0];
 struct tipc_nl_msg VAR_12;
 int VAR_13;

 if (!VAR_9) {
  struct nlattr **VAR_14;
  struct nlattr *VAR_15[VAR_3 + 1];

  VAR_13 = FUNC_7(VAR_7->nlh, &VAR_14);
  if (VAR_13)
   return VAR_13;

  if (!VAR_14[VAR_2])
   return -VAR_0;

  VAR_13 = FUNC_2(VAR_15, VAR_3,
        VAR_14[VAR_2],
        VAR_5,
        ((void*)0));
  if (VAR_13)
   return VAR_13;

  if (!VAR_15[VAR_4])
   return -VAR_0;

  VAR_10 = FUNC_1(VAR_15[VAR_4]);

  if (VAR_10 >= VAR_1)
   return -VAR_0;
 }

 if (VAR_11)
  return 0;

 VAR_12.skb = VAR_6;
 VAR_12.portid = FUNC_0(VAR_7->skb).portid;
 VAR_12.seq = VAR_7->nlh->nlmsg_seq;

 FUNC_3();
 VAR_13 = FUNC_6(VAR_8, &VAR_12, VAR_10, &VAR_9);
 if (!VAR_13)
  VAR_11 = 1;

 FUNC_4();
 VAR_7->args[0] = VAR_11;
 VAR_7->args[1] = VAR_9;
 VAR_7->args[2] = VAR_10;

 return VAR_6->len;
}
