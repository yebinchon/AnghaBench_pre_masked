
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; int sk; } ;
struct netlink_callback {int* args; TYPE_1__* nlh; int skb; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 TYPE_2__ FUNC_0 (int ) ;
 int FUNC_1 (struct net*,struct sk_buff*,int ,int ,int *,int) ;
 struct net* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0, struct netlink_callback *VAR_1)
{
 struct net *VAR_2 = FUNC_2(VAR_0->sk);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0, FUNC_0(VAR_1->skb).portid,
        VAR_1->nlh->nlmsg_seq, ((void*)0), VAR_1->args[0]);

 VAR_1->args[0] = VAR_3;
 return VAR_0->len;
}
