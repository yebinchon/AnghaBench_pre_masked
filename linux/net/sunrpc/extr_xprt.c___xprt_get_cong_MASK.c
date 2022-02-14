
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt {int cong; int cwnd; } ;
struct rpc_rqst {int rq_cong; TYPE_1__* rq_task; } ;
struct TYPE_2__ {int tk_pid; } ;


 scalar_t__ FUNC_0 (struct rpc_xprt*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (struct rpc_xprt*) ;

__attribute__((used)) static int
FUNC_3(struct rpc_xprt *VAR_1, struct rpc_rqst *VAR_2)
{
 if (VAR_2->rq_cong)
  return 1;
 FUNC_1("RPC: %5u xprt_cwnd_limited cong = %lu cwnd = %lu\n",
   VAR_2->rq_task->tk_pid, VAR_1->cong, VAR_1->cwnd);
 if (FUNC_0(VAR_1)) {
  FUNC_2(VAR_1);
  return 0;
 }
 VAR_2->rq_cong = 1;
 VAR_1->cong += VAR_0;
 return 1;
}
