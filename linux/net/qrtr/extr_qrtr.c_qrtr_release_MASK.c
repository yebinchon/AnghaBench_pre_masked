
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_receive_queue; int (* sk_state_change ) (struct sock*) ;int sk_shutdown; } ;
struct qrtr_sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct qrtr_sock*) ;
 struct qrtr_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (struct sock*) ;

__attribute__((used)) static int FUNC_9(struct socket *VAR_3)
{
 struct sock *VAR_4 = VAR_3->sk;
 struct qrtr_sock *VAR_5;

 if (!VAR_4)
  return 0;

 FUNC_0(VAR_4);

 VAR_5 = FUNC_2(VAR_4);
 VAR_4->sk_shutdown = VAR_0;
 if (!FUNC_5(VAR_4, VAR_1))
  VAR_4->sk_state_change(VAR_4);

 FUNC_7(VAR_4, VAR_1);
 VAR_3->sk = ((void*)0);

 if (!FUNC_5(VAR_4, VAR_2))
  FUNC_1(VAR_5);

 FUNC_4(&VAR_4->sk_receive_queue);

 FUNC_3(VAR_4);
 FUNC_6(VAR_4);

 return 0;
}
