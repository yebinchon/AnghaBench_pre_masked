
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct rpc_rqst {TYPE_2__* rq_task; } ;
typedef scalar_t__ __be32 ;
struct TYPE_6__ {int p_name; } ;
struct TYPE_4__ {TYPE_3__* rpc_proc; } ;
struct TYPE_5__ {TYPE_1__ tk_msg; int tk_pid; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__* FUNC_2 (struct xdr_stream*,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_3(struct rpc_rqst *VAR_2, struct xdr_stream *VAR_3,
   void *VAR_4)
{
 unsigned int *VAR_5 = VAR_4;
 __be32 *VAR_6;

 VAR_6 = FUNC_2(VAR_3, 4);
 if (FUNC_1(VAR_6 == ((void*)0)))
  return -VAR_0;

 *VAR_5 = 0;
 if (*VAR_6 != VAR_1)
  *VAR_5 = 1;

 FUNC_0("RPC: %5u RPCB_%s call %s\n",
   VAR_2->rq_task->tk_pid,
   VAR_2->rq_task->tk_msg.rpc_proc->p_name,
   (*VAR_5 ? "succeeded" : "failed"));
 return 0;
}
