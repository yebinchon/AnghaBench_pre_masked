
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct rpcbind_args {unsigned long r_port; } ;
struct rpc_rqst {TYPE_3__* rq_task; } ;
typedef int __be32 ;
struct TYPE_5__ {TYPE_1__* rpc_proc; } ;
struct TYPE_6__ {TYPE_2__ tk_msg; int tk_pid; } ;
struct TYPE_4__ {int p_name; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,int ,unsigned long) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_4(struct rpc_rqst *VAR_2, struct xdr_stream *VAR_3,
       void *VAR_4)
{
 struct rpcbind_args *VAR_5 = VAR_4;
 unsigned long VAR_6;
 __be32 *VAR_7;

 VAR_5->r_port = 0;

 VAR_7 = FUNC_3(VAR_3, 4);
 if (FUNC_2(VAR_7 == ((void*)0)))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_7);
 FUNC_1("RPC: %5u PMAP_%s result: %lu\n", VAR_2->rq_task->tk_pid,
   VAR_2->rq_task->tk_msg.rpc_proc->p_name, VAR_6);
 if (FUNC_2(VAR_6 > VAR_1))
  return -VAR_0;

 VAR_5->r_port = VAR_6;
 return 0;
}
