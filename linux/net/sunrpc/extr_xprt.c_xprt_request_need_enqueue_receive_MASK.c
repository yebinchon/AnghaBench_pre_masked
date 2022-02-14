
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {TYPE_1__* tk_rqstp; int tk_runstate; } ;
struct rpc_rqst {int dummy; } ;
struct TYPE_2__ {int rq_reply_bytes_recvd; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static bool
FUNC_2(struct rpc_task *VAR_1, struct rpc_rqst *VAR_2)
{
 return !FUNC_1(VAR_0, &VAR_1->tk_runstate) &&
  FUNC_0(VAR_1->tk_rqstp->rq_reply_bytes_recvd) == 0;
}
