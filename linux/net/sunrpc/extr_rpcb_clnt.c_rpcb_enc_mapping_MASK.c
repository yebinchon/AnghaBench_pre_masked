
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct rpcbind_args {int r_port; int r_prot; int r_vers; int r_prog; } ;
struct rpc_rqst {TYPE_3__* rq_task; } ;
typedef void* __be32 ;
struct TYPE_5__ {TYPE_1__* rpc_proc; } ;
struct TYPE_6__ {TYPE_2__ tk_msg; int tk_pid; } ;
struct TYPE_4__ {int p_name; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ,int ) ;
 void** FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_3(struct rpc_rqst *VAR_1, struct xdr_stream *VAR_2,
        const void *VAR_3)
{
 const struct rpcbind_args *VAR_4 = VAR_3;
 __be32 *VAR_5;

 FUNC_1("RPC: %5u encoding PMAP_%s call (%u, %u, %d, %u)\n",
   VAR_1->rq_task->tk_pid,
   VAR_1->rq_task->tk_msg.rpc_proc->p_name,
   VAR_4->r_prog, VAR_4->r_vers, VAR_4->r_prot, VAR_4->r_port);

 VAR_5 = FUNC_2(VAR_2, VAR_0 << 2);
 *VAR_5++ = FUNC_0(VAR_4->r_prog);
 *VAR_5++ = FUNC_0(VAR_4->r_vers);
 *VAR_5++ = FUNC_0(VAR_4->r_prot);
 *VAR_5 = FUNC_0(VAR_4->r_port);
}
