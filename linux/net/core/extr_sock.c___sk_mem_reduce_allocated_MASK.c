
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_memcg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int) ;
 scalar_t__ FUNC_4 (struct sock*,int ) ;
 scalar_t__ FUNC_5 (struct sock*) ;

void FUNC_6(struct sock *VAR_1, int VAR_2)
{
 FUNC_3(VAR_1, VAR_2);

 if (VAR_0 && VAR_1->sk_memcg)
  FUNC_0(VAR_1->sk_memcg, VAR_2);

 if (FUNC_5(VAR_1) &&
     (FUNC_2(VAR_1) < FUNC_4(VAR_1, 0)))
  FUNC_1(VAR_1);
}
