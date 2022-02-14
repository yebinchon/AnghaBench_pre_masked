
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_4__ {int expires; } ;
struct request_sock {struct request_sock* dl_next; TYPE_1__ rsk_timer; } ;
struct fastopen_queue {scalar_t__ max_qlen; scalar_t__ qlen; int lock; struct request_sock* rskq_rst_head; } ;
struct TYPE_5__ {struct fastopen_queue fastopenq; } ;
struct TYPE_6__ {TYPE_2__ icsk_accept_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_3__* FUNC_1 (struct sock*) ;
 int VAR_1 ;
 int FUNC_2 (struct request_sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static bool FUNC_7(struct sock *VAR_2)
{
 struct fastopen_queue *VAR_3;
 VAR_3 = &FUNC_1(VAR_2)->icsk_accept_queue.fastopenq;
 if (VAR_3->max_qlen == 0)
  return 0;

 if (VAR_3->qlen >= VAR_3->max_qlen) {
  struct request_sock *VAR_4;
  FUNC_4(&VAR_3->lock);
  VAR_4 = VAR_3->rskq_rst_head;
  if (!VAR_4 || FUNC_6(VAR_4->rsk_timer.expires, VAR_1)) {
   FUNC_0(FUNC_3(VAR_2),
     VAR_0);
   FUNC_5(&VAR_3->lock);
   return 0;
  }
  VAR_3->rskq_rst_head = VAR_4->dl_next;
  VAR_3->qlen--;
  FUNC_5(&VAR_3->lock);
  FUNC_2(VAR_4);
 }
 return 1;
}
