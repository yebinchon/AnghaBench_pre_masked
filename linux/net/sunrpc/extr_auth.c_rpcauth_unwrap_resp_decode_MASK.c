
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_4__ {int rpc_resp; TYPE_1__* rpc_proc; } ;
struct rpc_task {TYPE_2__ tk_msg; int tk_rqstp; } ;
typedef int (* kxdrdproc_t ) (int ,struct xdr_stream*,int ) ;
struct TYPE_3__ {int (* p_decode ) (int ,struct xdr_stream*,int ) ;} ;



int
FUNC_0(struct rpc_task *VAR_0, struct xdr_stream *VAR_1)
{
 kxdrdproc_t VAR_2 = VAR_0->tk_msg.rpc_proc->p_decode;

 return VAR_2(VAR_0->tk_rqstp, VAR_1, VAR_0->tk_msg.rpc_resp);
}
