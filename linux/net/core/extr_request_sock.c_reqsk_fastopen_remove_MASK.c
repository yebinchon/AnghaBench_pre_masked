
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; } ;
struct TYPE_7__ {scalar_t__ expires; } ;
struct request_sock {struct request_sock* dl_next; TYPE_2__ rsk_timer; scalar_t__ sk; struct sock* rsk_listener; } ;
struct fastopen_queue {int lock; int qlen; struct request_sock* rskq_rst_tail; struct request_sock* rskq_rst_head; } ;
struct TYPE_6__ {struct fastopen_queue fastopenq; } ;
struct TYPE_10__ {TYPE_1__ icsk_accept_queue; } ;
struct TYPE_9__ {int tfo_listener; } ;
struct TYPE_8__ {int fastopen_rsk; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_1 ;
 TYPE_5__* FUNC_1 (struct sock*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct request_sock*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_4__* FUNC_5 (struct request_sock*) ;
 TYPE_3__* FUNC_6 (struct sock*) ;

void FUNC_7(struct sock *VAR_3, struct request_sock *VAR_4,
      bool VAR_5)
{
 struct sock *VAR_6 = VAR_4->rsk_listener;
 struct fastopen_queue *VAR_7;

 VAR_7 = &FUNC_1(VAR_6)->icsk_accept_queue.fastopenq;

 FUNC_0(FUNC_6(VAR_3)->fastopen_rsk, ((void*)0));
 FUNC_3(&VAR_7->lock);
 VAR_7->qlen--;
 FUNC_5(VAR_4)->tfo_listener = 0;
 if (VAR_4->sk)
  goto out;

 if (!VAR_5 || VAR_6->sk_state != VAR_1) {



  FUNC_4(&VAR_7->lock);
  FUNC_2(VAR_4);
  return;
 }







 VAR_4->rsk_timer.expires = VAR_2 + 60*VAR_0;
 if (VAR_7->rskq_rst_head == ((void*)0))
  VAR_7->rskq_rst_head = VAR_4;
 else
  VAR_7->rskq_rst_tail->dl_next = VAR_4;

 VAR_4->dl_next = ((void*)0);
 VAR_7->rskq_rst_tail = VAR_4;
 VAR_7->qlen++;
out:
 FUNC_4(&VAR_7->lock);
}
