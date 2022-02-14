
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket_wq {scalar_t__ fasync_list; int wait; } ;
struct socket {int flags; } ;
struct sock {int sk_shutdown; int sk_wq; struct socket* sk_socket; } ;
struct TYPE_2__ {int sndbuf_space; } ;
struct smc_sock {TYPE_1__ conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 struct socket_wq* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct socket_wq*) ;
 struct smc_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct socket_wq*,int ,int ) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_7)
{
 struct socket *VAR_8 = VAR_7->sk_socket;
 struct smc_sock *VAR_9 = FUNC_6(VAR_7);
 struct socket_wq *VAR_10;


 if (FUNC_0(&VAR_9->conn.sndbuf_space) && VAR_8) {
  FUNC_1(VAR_5, &VAR_8->flags);
  FUNC_3();
  VAR_10 = FUNC_2(VAR_7->sk_wq);
  if (FUNC_5(VAR_10))
   FUNC_8(&VAR_10->wait,
         VAR_0 | VAR_2 |
         VAR_1);
  if (VAR_10 && VAR_10->fasync_list && !(VAR_7->sk_shutdown & VAR_4))
   FUNC_7(VAR_10, VAR_6, VAR_3);
  FUNC_4();
 }
}
