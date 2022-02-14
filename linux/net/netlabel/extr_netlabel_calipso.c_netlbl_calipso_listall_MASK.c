
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; } ;
struct netlink_callback {int * args; TYPE_1__* nlh; } ;
struct netlbl_calipso_doiwalk_arg {int seq; struct sk_buff* skb; struct netlink_callback* nl_cb; } ;
struct TYPE_2__ {int nlmsg_seq; } ;


 int FUNC_0 (int *,int ,struct netlbl_calipso_doiwalk_arg*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_1,
      struct netlink_callback *VAR_2)
{
 struct netlbl_calipso_doiwalk_arg VAR_3;
 u32 VAR_4 = VAR_2->args[0];

 VAR_3.nl_cb = VAR_2;
 VAR_3.skb = VAR_1;
 VAR_3.seq = VAR_2->nlh->nlmsg_seq;

 FUNC_0(&VAR_4, VAR_0, &VAR_3);

 VAR_2->args[0] = VAR_4;
 return VAR_1->len;
}
