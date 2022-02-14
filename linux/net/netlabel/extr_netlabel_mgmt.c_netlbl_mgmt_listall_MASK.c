
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct sk_buff {int len; } ;
struct netlink_callback {void** args; TYPE_1__* nlh; } ;
struct netlbl_domhsh_walk_arg {int seq; struct sk_buff* skb; struct netlink_callback* nl_cb; } ;
struct TYPE_2__ {int nlmsg_seq; } ;


 int FUNC_0 (void**,void**,int ,struct netlbl_domhsh_walk_arg*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_1,
          struct netlink_callback *VAR_2)
{
 struct netlbl_domhsh_walk_arg VAR_3;
 u32 VAR_4 = VAR_2->args[0];
 u32 VAR_5 = VAR_2->args[1];

 VAR_3.nl_cb = VAR_2;
 VAR_3.skb = VAR_1;
 VAR_3.seq = VAR_2->nlh->nlmsg_seq;

 FUNC_0(&VAR_4,
      &VAR_5,
      VAR_0,
      &VAR_3);

 VAR_2->args[0] = VAR_4;
 VAR_2->args[1] = VAR_5;
 return VAR_1->len;
}
