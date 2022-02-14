
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_wq {int wait; } ;
struct sock {int sk_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct sock*) ;
 struct socket_wq* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int ,int ) ;
 scalar_t__ FUNC_6 (struct socket_wq*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct sock *VAR_2)
{
 FUNC_0("%p", VAR_2);
 FUNC_2();
 if (FUNC_4(VAR_2)) {
  struct socket_wq *VAR_3 = FUNC_1(VAR_2->sk_wq);

  if (FUNC_6(VAR_3))
   FUNC_7(&VAR_3->wait);
  FUNC_5(VAR_2, VAR_1, VAR_0);
 }
 FUNC_3();
}
