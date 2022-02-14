
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_wq {int wait; } ;
struct sock {int sk_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct socket_wq* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct sock*,int ,int ) ;
 scalar_t__ FUNC_4 (struct socket_wq*) ;
 scalar_t__ FUNC_5 (struct sock*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct sock *VAR_2)
{
 struct socket_wq *VAR_3;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_2->sk_wq);
 if (FUNC_4(VAR_3))
  FUNC_6(&VAR_3->wait);

 if (FUNC_5(VAR_2))
  FUNC_3(VAR_2, VAR_1, VAR_0);

 FUNC_2();
}
