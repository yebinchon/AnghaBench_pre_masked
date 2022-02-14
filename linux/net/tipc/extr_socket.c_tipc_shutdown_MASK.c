
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int (* sk_state_change ) (struct sock*) ;int sk_receive_queue; int sk_shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct socket*,int ) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int *,int ,char*) ;

__attribute__((used)) static int FUNC_6(struct socket *VAR_7, int VAR_8)
{
 struct sock *VAR_9 = VAR_7->sk;
 int VAR_10;

 if (VAR_8 != VAR_3)
  return -VAR_0;

 FUNC_2(VAR_9);

 FUNC_5(VAR_9, ((void*)0), VAR_6, " ");
 FUNC_1(VAR_7, VAR_4);
 VAR_9->sk_shutdown = VAR_2;

 if (VAR_9->sk_state == VAR_5) {

  FUNC_0(&VAR_9->sk_receive_queue);


  VAR_9->sk_state_change(VAR_9);
  VAR_10 = 0;
 } else {
  VAR_10 = -VAR_1;
 }

 FUNC_3(VAR_9);
 return VAR_10;
}
