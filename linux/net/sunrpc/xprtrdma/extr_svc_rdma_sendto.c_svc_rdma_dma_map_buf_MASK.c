
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svcxprt_rdma {int dummy; } ;
struct svc_rdma_send_ctxt {int dummy; } ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (struct svcxprt_rdma*,struct svc_rdma_send_ctxt*,int ,int ,unsigned int) ;
 int FUNC_2 (unsigned char*) ;

__attribute__((used)) static int FUNC_3(struct svcxprt_rdma *VAR_0,
    struct svc_rdma_send_ctxt *VAR_1,
    unsigned char *VAR_2,
    unsigned int VAR_3)
{
 return FUNC_1(VAR_0, VAR_1, FUNC_2(VAR_2),
         FUNC_0(VAR_2), VAR_3);
}
