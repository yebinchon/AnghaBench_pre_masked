
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; int sk; } ;
struct netlink_callback {int* args; TYPE_1__* nlh; int skb; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 TYPE_2__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct net_device*,int,int ,int ,int ) ;
 struct net_device* FUNC_2 (struct net*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct net* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_1, struct netlink_callback *VAR_2)
{
 struct net *VAR_3 = FUNC_5(VAR_1->sk);
 u8 VAR_4;

 FUNC_3();
 for (VAR_4 = VAR_2->args[0]; VAR_4 < 64; VAR_4++) {
  struct net_device *VAR_5 = FUNC_2(VAR_3, VAR_4 << 2);

  if (!VAR_5)
   continue;

  if (FUNC_1(VAR_1, VAR_5, VAR_4 << 2, FUNC_0(VAR_2->skb).portid,
          VAR_2->nlh->nlmsg_seq, VAR_0) < 0)
   goto out;
 }

out:
 FUNC_4();
 VAR_2->args[0] = VAR_4;

 return VAR_1->len;
}
