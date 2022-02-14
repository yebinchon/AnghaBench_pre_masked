
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svcxprt_rdma {int dummy; } ;
struct TYPE_3__ {int done; } ;
struct TYPE_4__ {TYPE_1__ cc_cqe; } ;
struct svc_rdma_read_info {TYPE_2__ ri_cc; } ;


 int VAR_0 ;
 struct svc_rdma_read_info* FUNC_0 (int,int ) ;
 int FUNC_1 (struct svcxprt_rdma*,TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static struct svc_rdma_read_info *
FUNC_2(struct svcxprt_rdma *VAR_2)
{
 struct svc_rdma_read_info *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return VAR_3;

 FUNC_1(VAR_2, &VAR_3->ri_cc);
 VAR_3->ri_cc.cc_cqe.done = VAR_1;
 return VAR_3;
}
