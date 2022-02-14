
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcp_metrics_block {int dummy; } ;
struct sk_buff {int dummy; } ;
struct netlink_callback {TYPE_1__* nlh; int skb; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct tcp_metrics_block*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_4,
     struct netlink_callback *VAR_5,
     struct tcp_metrics_block *VAR_6)
{
 void *VAR_7;

 VAR_7 = FUNC_3(VAR_4, FUNC_0(VAR_5->skb).portid, VAR_5->nlh->nlmsg_seq,
     &VAR_3, VAR_1,
     VAR_2);
 if (!VAR_7)
  return -VAR_0;

 if (FUNC_4(VAR_4, VAR_6) < 0)
  goto nla_put_failure;

 FUNC_2(VAR_4, VAR_7);
 return 0;

nla_put_failure:
 FUNC_1(VAR_4, VAR_7);
 return -VAR_0;
}
