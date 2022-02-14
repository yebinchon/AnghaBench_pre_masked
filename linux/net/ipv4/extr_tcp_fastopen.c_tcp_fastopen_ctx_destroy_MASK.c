
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_fastopen_context {int rcu; } ;
struct TYPE_2__ {int tcp_fastopen_ctx_lock; int tcp_fastopen_ctx; } ;
struct net {TYPE_1__ ipv4; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 struct tcp_fastopen_context* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

void FUNC_6(struct net *VAR_1)
{
 struct tcp_fastopen_context *VAR_2;

 FUNC_4(&VAR_1->ipv4.tcp_fastopen_ctx_lock);

 VAR_2 = FUNC_3(VAR_1->ipv4.tcp_fastopen_ctx,
    FUNC_1(&VAR_1->ipv4.tcp_fastopen_ctx_lock));
 FUNC_2(VAR_1->ipv4.tcp_fastopen_ctx, ((void*)0));
 FUNC_5(&VAR_1->ipv4.tcp_fastopen_ctx_lock);

 if (VAR_2)
  FUNC_0(&VAR_2->rcu, VAR_0);
}
