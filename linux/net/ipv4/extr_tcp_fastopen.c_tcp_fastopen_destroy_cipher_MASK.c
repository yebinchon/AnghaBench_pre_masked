
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcp_fastopen_context {int rcu; } ;
struct sock {int dummy; } ;
struct TYPE_4__ {int ctx; } ;
struct TYPE_5__ {TYPE_1__ fastopenq; } ;
struct TYPE_6__ {TYPE_2__ icsk_accept_queue; } ;


 int FUNC_0 (int *,int ) ;
 TYPE_3__* FUNC_1 (struct sock*) ;
 struct tcp_fastopen_context* FUNC_2 (int ,int) ;
 int VAR_0 ;

void FUNC_3(struct sock *VAR_1)
{
 struct tcp_fastopen_context *VAR_2;

 VAR_2 = FUNC_2(
   FUNC_1(VAR_1)->icsk_accept_queue.fastopenq.ctx, 1);
 if (VAR_2)
  FUNC_0(&VAR_2->rcu, VAR_0);
}
