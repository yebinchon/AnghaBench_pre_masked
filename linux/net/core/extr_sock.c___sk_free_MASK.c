
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_net_refcnt; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_0)
{
 if (FUNC_0(VAR_0->sk_net_refcnt))
  FUNC_4(FUNC_5(VAR_0), -1);

 if (FUNC_6(VAR_0->sk_net_refcnt && FUNC_3(VAR_0)))
  FUNC_2(VAR_0);
 else
  FUNC_1(VAR_0);
}
