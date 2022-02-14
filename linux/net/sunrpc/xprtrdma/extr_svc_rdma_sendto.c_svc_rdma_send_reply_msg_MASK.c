
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svcxprt_rdma {int dummy; } ;
struct svc_rqst {int rq_res; } ;
struct TYPE_3__ {scalar_t__ invalidate_rkey; } ;
struct TYPE_4__ {int num_sge; int opcode; TYPE_1__ ex; } ;
struct svc_rdma_send_ctxt {TYPE_2__ sc_send_wr; } ;
struct svc_rdma_recv_ctxt {scalar_t__ rc_inv_rkey; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct svcxprt_rdma*,struct svc_rdma_send_ctxt*,int *,int *) ;
 int FUNC_2 (struct svc_rqst*,struct svc_rdma_send_ctxt*) ;
 int FUNC_3 (struct svcxprt_rdma*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct svcxprt_rdma *VAR_2,
       struct svc_rdma_send_ctxt *VAR_3,
       struct svc_rdma_recv_ctxt *VAR_4,
       struct svc_rqst *VAR_5,
       __be32 *VAR_6, __be32 *VAR_7)
{
 int VAR_8;

 if (!VAR_7) {
  VAR_8 = FUNC_1(VAR_2, VAR_3,
          &VAR_5->rq_res, VAR_6);
  if (VAR_8 < 0)
   return VAR_8;
 }

 FUNC_2(VAR_5, VAR_3);

 if (VAR_4->rc_inv_rkey) {
  VAR_3->sc_send_wr.opcode = VAR_1;
  VAR_3->sc_send_wr.ex.invalidate_rkey = VAR_4->rc_inv_rkey;
 } else {
  VAR_3->sc_send_wr.opcode = VAR_0;
 }
 FUNC_0("svcrdma: posting Send WR with %u sge(s)\n",
  VAR_3->sc_send_wr.num_sge);
 return FUNC_3(VAR_2, &VAR_3->sc_send_wr);
}
