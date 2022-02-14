
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_write_queue; struct l2tp_tunnel* sk_user_data; } ;
struct sk_buff {int dummy; } ;
struct l2tp_tunnel {int dummy; } ;


 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct l2tp_tunnel*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0)
{
 struct sk_buff *VAR_1;
 struct l2tp_tunnel *VAR_2 = VAR_0->sk_user_data;

 while ((VAR_1 = FUNC_0(&VAR_0->sk_write_queue)) != ((void*)0))
  FUNC_1(VAR_1);

 if (VAR_2)
  FUNC_2(VAR_2);
}
