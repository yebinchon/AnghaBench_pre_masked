
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_wq {int wait; } ;
struct sock {int sk_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct socket_wq* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct sock*,int ,int ) ;
 scalar_t__ FUNC_4 (struct socket_wq*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_3)
{
 struct socket_wq *VAR_4;

 FUNC_1();
 VAR_4 = FUNC_0(VAR_3->sk_wq);
 if (FUNC_4(VAR_4))
  FUNC_5(&VAR_4->wait, VAR_0);
 FUNC_3(VAR_3, VAR_2, VAR_1);
 FUNC_2();
}
