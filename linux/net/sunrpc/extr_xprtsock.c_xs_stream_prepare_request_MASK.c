
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_rqst {int rq_rcv_buf; TYPE_1__* rq_task; } ;
struct TYPE_2__ {int tk_status; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct rpc_rqst *VAR_1)
{
 FUNC_1(&VAR_1->rq_rcv_buf);
 VAR_1->rq_task->tk_status = FUNC_0(&VAR_1->rq_rcv_buf, VAR_0);
}
