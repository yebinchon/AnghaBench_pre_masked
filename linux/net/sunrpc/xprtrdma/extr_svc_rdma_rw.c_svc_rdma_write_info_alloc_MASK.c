
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svcxprt_rdma {int dummy; } ;
struct TYPE_3__ {int done; } ;
struct TYPE_4__ {TYPE_1__ cc_cqe; } ;
struct svc_rdma_write_info {TYPE_2__ wi_cc; int * wi_segs; int wi_nsegs; scalar_t__ wi_seg_no; scalar_t__ wi_seg_off; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct svc_rdma_write_info* FUNC_1 (int,int ) ;
 int FUNC_2 (struct svcxprt_rdma*,TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static struct svc_rdma_write_info *
FUNC_3(struct svcxprt_rdma *VAR_2, __be32 *VAR_3)
{
 struct svc_rdma_write_info *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return VAR_4;

 VAR_4->wi_seg_off = 0;
 VAR_4->wi_seg_no = 0;
 VAR_4->wi_nsegs = FUNC_0(++VAR_3);
 VAR_4->wi_segs = ++VAR_3;
 FUNC_2(VAR_2, &VAR_4->wi_cc);
 VAR_4->wi_cc.cc_cqe.done = VAR_1;
 return VAR_4;
}
