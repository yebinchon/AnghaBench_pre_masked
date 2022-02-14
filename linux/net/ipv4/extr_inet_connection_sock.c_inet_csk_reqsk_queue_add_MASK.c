
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; } ;
struct request_sock_queue {int rskq_lock; struct request_sock* rskq_accept_tail; int * rskq_accept_head; } ;
struct request_sock {struct request_sock* dl_next; struct sock* sk; } ;
struct TYPE_2__ {struct request_sock_queue icsk_accept_queue; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct request_sock*) ;
 int FUNC_1 (struct sock*,struct request_sock*,struct sock*) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

struct sock *FUNC_7(struct sock *VAR_1,
          struct request_sock *VAR_2,
          struct sock *VAR_3)
{
 struct request_sock_queue *VAR_4 = &FUNC_2(VAR_1)->icsk_accept_queue;

 FUNC_4(&VAR_4->rskq_lock);
 if (FUNC_6(VAR_1->sk_state != VAR_0)) {
  FUNC_1(VAR_1, VAR_2, VAR_3);
  VAR_3 = ((void*)0);
 } else {
  VAR_2->sk = VAR_3;
  VAR_2->dl_next = ((void*)0);
  if (VAR_4->rskq_accept_head == ((void*)0))
   FUNC_0(VAR_4->rskq_accept_head, VAR_2);
  else
   VAR_4->rskq_accept_tail->dl_next = VAR_2;
  VAR_4->rskq_accept_tail = VAR_2;
  FUNC_3(VAR_1);
 }
 FUNC_5(&VAR_4->rskq_lock);
 return VAR_3;
}
