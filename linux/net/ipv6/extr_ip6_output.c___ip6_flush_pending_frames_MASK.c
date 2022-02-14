
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct inet_cork_full {int dummy; } ;
struct inet6_cork {int dummy; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 struct sk_buff* FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct inet_cork_full*,struct inet6_cork*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_1,
           struct sk_buff_head *VAR_2,
           struct inet_cork_full *VAR_3,
           struct inet6_cork *VAR_4)
{
 struct sk_buff *VAR_5;

 while ((VAR_5 = FUNC_1(VAR_2)) != ((void*)0)) {
  if (FUNC_5(VAR_5))
   FUNC_0(FUNC_6(VAR_1), FUNC_3(FUNC_5(VAR_5)),
          VAR_0);
  FUNC_4(VAR_5);
 }

 FUNC_2(VAR_3, VAR_4);
}
