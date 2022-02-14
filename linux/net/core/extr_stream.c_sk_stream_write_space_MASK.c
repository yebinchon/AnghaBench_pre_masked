
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_wq {scalar_t__ fasync_list; int wait; } ;
struct socket {int flags; } ;
struct sock {int sk_shutdown; int sk_wq; struct socket* sk_socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct sock*,int) ;
 int FUNC_1 (int ,int *) ;
 struct socket_wq* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct socket_wq*) ;
 int FUNC_6 (struct socket_wq*,int ,int ) ;
 int FUNC_7 (int *,int) ;

void FUNC_8(struct sock *VAR_7)
{
 struct socket *VAR_8 = VAR_7->sk_socket;
 struct socket_wq *VAR_9;

 if (FUNC_0(VAR_7, 1) && VAR_8) {
  FUNC_1(VAR_5, &VAR_8->flags);

  FUNC_3();
  VAR_9 = FUNC_2(VAR_7->sk_wq);
  if (FUNC_5(VAR_9))
   FUNC_7(&VAR_9->wait, VAR_0 |
      VAR_2 | VAR_1);
  if (VAR_9 && VAR_9->fasync_list && !(VAR_7->sk_shutdown & VAR_4))
   FUNC_6(VAR_9, VAR_6, VAR_3);
  FUNC_4();
 }
}
