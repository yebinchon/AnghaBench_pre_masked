
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_rqst {int rq_pin; TYPE_1__* rq_task; } ;
struct TYPE_2__ {int tk_runstate; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct rpc_rqst *VAR_1)
{
 if (!FUNC_2(VAR_0, &VAR_1->rq_task->tk_runstate)) {
  FUNC_0(&VAR_1->rq_pin);
  return;
 }
 if (FUNC_1(&VAR_1->rq_pin))
  FUNC_3(&VAR_1->rq_pin);
}
