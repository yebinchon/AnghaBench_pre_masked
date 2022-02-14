
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svcxprt_rdma {int dummy; } ;
struct svc_rdma_recv_ctxt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct svcxprt_rdma*,struct svc_rdma_recv_ctxt*) ;
 struct svc_rdma_recv_ctxt* FUNC_1 (struct svcxprt_rdma*) ;

__attribute__((used)) static int FUNC_2(struct svcxprt_rdma *VAR_1)
{
 struct svc_rdma_recv_ctxt *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2)
  return -VAR_0;
 return FUNC_0(VAR_1, VAR_2);
}
