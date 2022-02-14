
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; int sk; } ;
struct netlink_callback {int* args; TYPE_1__* nlh; int skb; } ;
struct net {int dummy; } ;
struct l2tp_tunnel {int dummy; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ,int ,struct l2tp_tunnel*,int ) ;
 int FUNC_2 (struct l2tp_tunnel*) ;
 struct l2tp_tunnel* FUNC_3 (struct net*,int) ;
 struct net* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2, struct netlink_callback *VAR_3)
{
 int VAR_4 = VAR_3->args[0];
 struct l2tp_tunnel *VAR_5;
 struct net *VAR_6 = FUNC_4(VAR_2->sk);

 for (;;) {
  VAR_5 = FUNC_3(VAR_6, VAR_4);
  if (VAR_5 == ((void*)0))
   goto out;

  if (FUNC_1(VAR_2, FUNC_0(VAR_3->skb).portid,
     VAR_3->nlh->nlmsg_seq, VAR_1,
     VAR_5, VAR_0) < 0) {
   FUNC_2(VAR_5);
   goto out;
  }
  FUNC_2(VAR_5);

  VAR_4++;
 }

out:
 VAR_3->args[0] = VAR_4;

 return VAR_2->len;
}
