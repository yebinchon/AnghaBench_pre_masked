
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svcxprt_rdma {int dummy; } ;
struct TYPE_2__ {int opcode; } ;
struct svc_rdma_send_ctxt {TYPE_1__ sc_send_wr; } ;
struct rpc_rqst {int rq_buffer; int rq_snd_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct svcxprt_rdma*,struct svc_rdma_send_ctxt*,int *,int *) ;
 int FUNC_2 (struct svcxprt_rdma*,TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct svcxprt_rdma *VAR_2,
         struct rpc_rqst *VAR_3,
         struct svc_rdma_send_ctxt *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_4, &VAR_3->rq_snd_buf, ((void*)0));
 if (VAR_5 < 0)
  return -VAR_0;




 FUNC_0(FUNC_3(VAR_3->rq_buffer));
 VAR_4->sc_send_wr.opcode = VAR_1;
 return FUNC_2(VAR_2, &VAR_4->sc_send_wr);
}
