
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_ack_backlog; } ;
struct TYPE_2__ {int lock; struct request_sock* rskq_rst_head; } ;
struct request_sock_queue {TYPE_1__ fastopenq; } ;
struct request_sock {struct request_sock* dl_next; struct sock* sk; } ;
struct inet_connection_sock {struct request_sock_queue icsk_accept_queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct sock*,struct request_sock*,struct sock*) ;
 struct inet_connection_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct request_sock*) ;
 struct request_sock* FUNC_10 (struct request_sock_queue*,struct sock*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

void FUNC_16(struct sock *VAR_0)
{
 struct inet_connection_sock *VAR_1 = FUNC_6(VAR_0);
 struct request_sock_queue *VAR_2 = &VAR_1->icsk_accept_queue;
 struct request_sock *VAR_3, *VAR_4;
 while ((VAR_4 = FUNC_10(VAR_2, VAR_0)) != ((void*)0)) {
  struct sock *VAR_5 = VAR_4->sk;

  FUNC_7();
  FUNC_2(VAR_5);
  FUNC_0(FUNC_12(VAR_5));
  FUNC_11(VAR_5);

  FUNC_5(VAR_0, VAR_4, VAR_5);
  FUNC_9(VAR_4);
  FUNC_3(VAR_5);
  FUNC_8();
  FUNC_13(VAR_5);

  FUNC_4();
 }
 if (VAR_2->fastopenq.rskq_rst_head) {

  FUNC_14(&VAR_2->fastopenq.lock);
  VAR_4 = VAR_2->fastopenq.rskq_rst_head;
  VAR_2->fastopenq.rskq_rst_head = ((void*)0);
  FUNC_15(&VAR_2->fastopenq.lock);
  while (VAR_4 != ((void*)0)) {
   VAR_3 = VAR_4->dl_next;
   FUNC_9(VAR_4);
   VAR_4 = VAR_3;
  }
 }
 FUNC_1(VAR_0->sk_ack_backlog);
}
