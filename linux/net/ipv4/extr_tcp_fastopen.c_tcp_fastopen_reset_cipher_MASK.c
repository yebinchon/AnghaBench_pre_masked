
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcp_fastopen_context {int num; int rcu; TYPE_1__* key; } ;
struct sock {int dummy; } ;
struct TYPE_7__ {int tcp_fastopen_ctx_lock; int tcp_fastopen_ctx; } ;
struct net {TYPE_3__ ipv4; } ;
struct fastopen_queue {int ctx; } ;
struct TYPE_6__ {struct fastopen_queue fastopenq; } ;
struct TYPE_8__ {TYPE_2__ icsk_accept_queue; } ;
struct TYPE_5__ {void** key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 void* FUNC_1 (void*) ;
 TYPE_4__* FUNC_2 (struct sock*) ;
 struct tcp_fastopen_context* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct tcp_fastopen_context*) ;
 struct tcp_fastopen_context* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;

int FUNC_9(struct net *VAR_3, struct sock *VAR_4,
         void *VAR_5, void *VAR_6)
{
 struct tcp_fastopen_context *VAR_7, *VAR_8;
 struct fastopen_queue *VAR_9;
 int VAR_10 = 0;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_7->key[0].key[0] = FUNC_1(VAR_5);
 VAR_7->key[0].key[1] = FUNC_1(VAR_5 + 8);
 if (VAR_6) {
  VAR_7->key[1].key[0] = FUNC_1(VAR_6);
  VAR_7->key[1].key[1] = FUNC_1(VAR_6 + 8);
  VAR_7->num = 2;
 } else {
  VAR_7->num = 1;
 }

 FUNC_7(&VAR_3->ipv4.tcp_fastopen_ctx_lock);
 if (VAR_4) {
  VAR_9 = &FUNC_2(VAR_4)->icsk_accept_queue.fastopenq;
  VAR_8 = FUNC_6(VAR_9->ctx,
   FUNC_4(&VAR_3->ipv4.tcp_fastopen_ctx_lock));
  FUNC_5(VAR_9->ctx, VAR_7);
 } else {
  VAR_8 = FUNC_6(VAR_3->ipv4.tcp_fastopen_ctx,
   FUNC_4(&VAR_3->ipv4.tcp_fastopen_ctx_lock));
  FUNC_5(VAR_3->ipv4.tcp_fastopen_ctx, VAR_7);
 }
 FUNC_8(&VAR_3->ipv4.tcp_fastopen_ctx_lock);

 if (VAR_8)
  FUNC_0(&VAR_8->rcu, VAR_2);
out:
 return VAR_10;
}
