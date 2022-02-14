
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct rpcbind_args {int r_owner; int r_addr; int r_netid; int r_vers; int r_prog; } ;
struct rpc_rqst {TYPE_3__* rq_task; } ;
typedef void* __be32 ;
struct TYPE_5__ {TYPE_1__* rpc_proc; } ;
struct TYPE_6__ {TYPE_2__ tk_msg; int tk_pid; } ;
struct TYPE_4__ {int p_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct xdr_stream*,int ,int ) ;
 void** FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_4(struct rpc_rqst *VAR_5, struct xdr_stream *VAR_6,
        const void *VAR_7)
{
 const struct rpcbind_args *VAR_8 = VAR_7;
 __be32 *VAR_9;

 FUNC_1("RPC: %5u encoding RPCB_%s call (%u, %u, '%s', '%s')\n",
   VAR_5->rq_task->tk_pid,
   VAR_5->rq_task->tk_msg.rpc_proc->p_name,
   VAR_8->r_prog, VAR_8->r_vers,
   VAR_8->r_netid, VAR_8->r_addr);

 VAR_9 = FUNC_3(VAR_6, (VAR_3 + VAR_4) << 2);
 *VAR_9++ = FUNC_0(VAR_8->r_prog);
 *VAR_9 = FUNC_0(VAR_8->r_vers);

 FUNC_2(VAR_6, VAR_8->r_netid, VAR_0);
 FUNC_2(VAR_6, VAR_8->r_addr, VAR_1);
 FUNC_2(VAR_6, VAR_8->r_owner, VAR_2);
}
