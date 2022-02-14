
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_buf {TYPE_1__* head; } ;
struct rpc_rqst {struct xdr_buf rq_snd_buf; struct xdr_buf rq_rcv_buf; int rq_bc_pa_state; } ;
struct TYPE_2__ {scalar_t__ iov_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,struct rpc_rqst*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct rpc_rqst*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct rpc_rqst *VAR_1)
{
 struct xdr_buf *VAR_2;

 FUNC_1("RPC:        free allocations for req= %p\n", VAR_1);
 FUNC_0(FUNC_4(VAR_0, &VAR_1->rq_bc_pa_state));
 VAR_2 = &VAR_1->rq_rcv_buf;
 FUNC_2((unsigned long)VAR_2->head[0].iov_base);
 VAR_2 = &VAR_1->rq_snd_buf;
 FUNC_2((unsigned long)VAR_2->head[0].iov_base);
 FUNC_3(VAR_1);
}
