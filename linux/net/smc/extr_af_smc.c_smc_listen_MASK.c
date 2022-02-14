
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_max_ack_backlog; scalar_t__ sk_ack_backlog; } ;
struct smc_sock {int tcp_listen_work; TYPE_2__* clcsock; int use_fallback; scalar_t__ connect_nonblock; } ;
struct TYPE_4__ {int sk; } ;
struct TYPE_3__ {int syn_smc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct smc_sock*) ;
 struct smc_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 TYPE_1__* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct socket *VAR_3, int VAR_4)
{
 struct sock *VAR_5 = VAR_3->sk;
 struct smc_sock *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(VAR_5);
 FUNC_1(VAR_5);

 VAR_7 = -VAR_0;
 if ((VAR_5->sk_state != VAR_1 && VAR_5->sk_state != VAR_2) ||
     VAR_6->connect_nonblock)
  goto out;

 VAR_7 = 0;
 if (VAR_5->sk_state == VAR_2) {
  VAR_5->sk_max_ack_backlog = VAR_4;
  goto out;
 }



 FUNC_4(VAR_6);
 if (!VAR_6->use_fallback)
  FUNC_8(VAR_6->clcsock->sk)->syn_smc = 1;

 VAR_7 = FUNC_0(VAR_6->clcsock, VAR_4);
 if (VAR_7)
  goto out;
 VAR_5->sk_max_ack_backlog = VAR_4;
 VAR_5->sk_ack_backlog = 0;
 VAR_5->sk_state = VAR_2;
 FUNC_6(VAR_5);
 if (!FUNC_3(&VAR_6->tcp_listen_work))
  FUNC_7(VAR_5);

out:
 FUNC_2(VAR_5);
 return VAR_7;
}
