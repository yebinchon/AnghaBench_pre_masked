
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct inet_cork {int dummy; } ;


 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct inet_cork*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0,
          struct sk_buff_head *VAR_1,
          struct inet_cork *VAR_2)
{
 struct sk_buff *VAR_3;

 while ((VAR_3 = FUNC_0(VAR_1)) != ((void*)0))
  FUNC_2(VAR_3);

 FUNC_1(VAR_2);
}
