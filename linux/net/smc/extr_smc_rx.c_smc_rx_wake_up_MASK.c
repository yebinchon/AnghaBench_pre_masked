
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_wq {int wait; } ;
struct sock {scalar_t__ sk_shutdown; scalar_t__ sk_state; int sk_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct socket_wq* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct sock*,int ,int ) ;
 scalar_t__ FUNC_4 (struct socket_wq*) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_9)
{
 struct socket_wq *VAR_10;



 FUNC_1();
 VAR_10 = FUNC_0(VAR_9->sk_wq);
 if (FUNC_4(VAR_10))
  FUNC_5(&VAR_10->wait, VAR_0 | VAR_1 |
      VAR_3 | VAR_2);
 FUNC_3(VAR_9, VAR_8, VAR_5);
 if ((VAR_9->sk_shutdown == VAR_6) ||
     (VAR_9->sk_state == VAR_7))
  FUNC_3(VAR_9, VAR_8, VAR_4);
 FUNC_2();
}
