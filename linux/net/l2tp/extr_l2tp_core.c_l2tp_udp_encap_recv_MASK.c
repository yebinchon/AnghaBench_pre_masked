
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct l2tp_tunnel {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct l2tp_tunnel*,int ,char*,int ,int ) ;
 scalar_t__ FUNC_1 (struct l2tp_tunnel*,struct sk_buff*) ;
 struct l2tp_tunnel* FUNC_2 (struct sock*) ;

int FUNC_3(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct l2tp_tunnel *VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 == ((void*)0))
  goto pass_up;

 FUNC_0(VAR_3, VAR_0, "%s: received %d bytes\n",
   VAR_3->name, VAR_2->len);

 if (FUNC_1(VAR_3, VAR_2))
  goto pass_up;

 return 0;

pass_up:
 return 1;
}
