
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ qlen; int * rskq_rst_tail; int * rskq_rst_head; int lock; } ;
struct request_sock_queue {int * rskq_accept_head; TYPE_1__ fastopenq; int rskq_lock; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct request_sock_queue *VAR_0)
{
 FUNC_0(&VAR_0->rskq_lock);

 FUNC_0(&VAR_0->fastopenq.lock);
 VAR_0->fastopenq.rskq_rst_head = ((void*)0);
 VAR_0->fastopenq.rskq_rst_tail = ((void*)0);
 VAR_0->fastopenq.qlen = 0;

 VAR_0->rskq_accept_head = ((void*)0);
}
