
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_wq {int wait; } ;
struct sock {int sk_wq; } ;


 struct socket_wq* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct socket_wq*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0)
{
 struct socket_wq *VAR_1;

 FUNC_1();
 VAR_1 = FUNC_0(VAR_0->sk_wq);
 if (FUNC_3(VAR_1))
  FUNC_4(&VAR_1->wait);
 FUNC_2();
}
