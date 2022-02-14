
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svcxprt_rdma {int dummy; } ;
struct svc_rqst {int dummy; } ;
struct TYPE_2__ {int opcode; } ;
struct svc_rdma_send_ctxt {TYPE_1__ sc_send_wr; int * sc_xprt_buf; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct svc_rqst*,struct svc_rdma_send_ctxt*) ;
 int FUNC_1 (struct svcxprt_rdma*,TYPE_1__*) ;
 int FUNC_2 (struct svcxprt_rdma*,struct svc_rdma_send_ctxt*) ;
 int FUNC_3 (struct svcxprt_rdma*,struct svc_rdma_send_ctxt*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct svcxprt_rdma *VAR_4,
       struct svc_rdma_send_ctxt *VAR_5,
       struct svc_rqst *VAR_6)
{
 __be32 *VAR_7;
 int VAR_8;

 VAR_7 = VAR_5->sc_xprt_buf;
 FUNC_4(*VAR_7);
 VAR_7 += 3;
 *VAR_7++ = VAR_3;
 *VAR_7 = VAR_2;
 FUNC_3(VAR_4, VAR_5, VAR_1);

 FUNC_0(VAR_6, VAR_5);

 VAR_5->sc_send_wr.opcode = VAR_0;
 VAR_8 = FUNC_1(VAR_4, &VAR_5->sc_send_wr);
 if (VAR_8) {
  FUNC_2(VAR_4, VAR_5);
  return VAR_8;
 }

 return 0;
}
