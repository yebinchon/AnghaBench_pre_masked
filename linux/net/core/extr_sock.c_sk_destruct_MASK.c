
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_rcu; int sk_reuseport_cb; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int (*) (int *)) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;

void FUNC_5(struct sock *VAR_1)
{
 bool VAR_2 = FUNC_4(VAR_1, VAR_0);

 if (FUNC_2(VAR_1->sk_reuseport_cb)) {
  FUNC_3(VAR_1);
  VAR_2 = 1;
 }

 if (VAR_2)
  FUNC_1(&VAR_1->sk_rcu, FUNC_0);
 else
  FUNC_0(&VAR_1->sk_rcu);
}
