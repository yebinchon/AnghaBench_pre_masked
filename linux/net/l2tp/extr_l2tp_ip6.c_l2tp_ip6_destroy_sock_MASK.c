
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {struct l2tp_tunnel* sk_user_data; } ;
struct l2tp_tunnel {int dummy; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct l2tp_tunnel*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0)
{
 struct l2tp_tunnel *VAR_1 = VAR_0->sk_user_data;

 FUNC_3(VAR_0);
 FUNC_1(VAR_0);
 FUNC_4(VAR_0);

 if (VAR_1)
  FUNC_2(VAR_1);

 FUNC_0(VAR_0);
}
