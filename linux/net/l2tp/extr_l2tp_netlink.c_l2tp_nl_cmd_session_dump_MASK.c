
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
struct l2tp_session {int dummy; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ,int ,struct l2tp_session*,int ) ;
 int FUNC_2 (struct l2tp_session*) ;
 struct l2tp_session* FUNC_3 (struct l2tp_tunnel*,int) ;
 int FUNC_4 (struct l2tp_tunnel*) ;
 struct l2tp_tunnel* FUNC_5 (struct net*,int) ;
 struct net* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_2, struct netlink_callback *VAR_3)
{
 struct net *VAR_4 = FUNC_6(VAR_2->sk);
 struct l2tp_session *VAR_5;
 struct l2tp_tunnel *VAR_6 = ((void*)0);
 int VAR_7 = VAR_3->args[0];
 int VAR_8 = VAR_3->args[1];

 for (;;) {
  if (VAR_6 == ((void*)0)) {
   VAR_6 = FUNC_5(VAR_4, VAR_7);
   if (VAR_6 == ((void*)0))
    goto out;
  }

  VAR_5 = FUNC_3(VAR_6, VAR_8);
  if (VAR_5 == ((void*)0)) {
   VAR_7++;
   FUNC_4(VAR_6);
   VAR_6 = ((void*)0);
   VAR_8 = 0;
   continue;
  }

  if (FUNC_1(VAR_2, FUNC_0(VAR_3->skb).portid,
      VAR_3->nlh->nlmsg_seq, VAR_1,
      VAR_5, VAR_0) < 0) {
   FUNC_2(VAR_5);
   FUNC_4(VAR_6);
   break;
  }
  FUNC_2(VAR_5);

  VAR_8++;
 }

out:
 VAR_3->args[0] = VAR_7;
 VAR_3->args[1] = VAR_8;

 return VAR_2->len;
}
