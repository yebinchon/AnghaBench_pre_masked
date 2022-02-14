
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; int sk_refcnt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sock*) ;

void FUNC_6(struct sock *VAR_2)
{
 if (!FUNC_3(&VAR_2->sk_refcnt))
  return;

 if (VAR_2->sk_state == VAR_1)
  FUNC_2(FUNC_1(VAR_2));
 else if (VAR_2->sk_state == VAR_0)
  FUNC_4(FUNC_0(VAR_2));
 else
  FUNC_5(VAR_2);
}
