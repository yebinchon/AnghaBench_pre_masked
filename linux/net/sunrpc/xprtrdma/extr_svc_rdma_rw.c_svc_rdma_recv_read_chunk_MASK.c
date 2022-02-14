
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svcxprt_rdma {int dummy; } ;
struct TYPE_4__ {int buflen; int len; int * tail; int * head; } ;
struct svc_rqst {TYPE_2__ rq_arg; } ;
struct TYPE_3__ {int buflen; int len; scalar_t__ page_len; scalar_t__ page_base; int pages; int * tail; int * head; } ;
struct svc_rdma_recv_ctxt {TYPE_1__ rc_arg; int rc_pages; } ;
struct svc_rdma_read_info {int ri_cc; scalar_t__ ri_position; scalar_t__ ri_pageoff; scalar_t__ ri_pageno; struct svc_rdma_recv_ctxt* ri_readctxt; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct svc_rqst*,struct svc_rdma_read_info*,int *) ;
 int FUNC_2 (struct svc_rqst*,struct svc_rdma_read_info*,int *) ;
 int FUNC_3 (int *) ;
 struct svc_rdma_read_info* FUNC_4 (struct svcxprt_rdma*) ;
 int FUNC_5 (struct svc_rdma_read_info*) ;

int FUNC_6(struct svcxprt_rdma *VAR_1, struct svc_rqst *VAR_2,
        struct svc_rdma_recv_ctxt *VAR_3, __be32 *VAR_4)
{
 struct svc_rdma_read_info *VAR_5;
 int VAR_6;





 VAR_3->rc_arg.head[0] = VAR_2->rq_arg.head[0];
 VAR_3->rc_arg.tail[0] = VAR_2->rq_arg.tail[0];
 VAR_3->rc_arg.pages = VAR_3->rc_pages;
 VAR_3->rc_arg.page_base = 0;
 VAR_3->rc_arg.page_len = 0;
 VAR_3->rc_arg.len = VAR_2->rq_arg.len;
 VAR_3->rc_arg.buflen = VAR_2->rq_arg.buflen;

 VAR_5 = FUNC_4(VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->ri_readctxt = VAR_3;
 VAR_5->ri_pageno = 0;
 VAR_5->ri_pageoff = 0;

 VAR_5->ri_position = FUNC_0(VAR_4 + 1);
 if (VAR_5->ri_position)
  VAR_6 = FUNC_1(VAR_2, VAR_5, VAR_4);
 else
  VAR_6 = FUNC_2(VAR_2, VAR_5, VAR_4);
 if (VAR_6 < 0)
  goto out_err;

 VAR_6 = FUNC_3(&VAR_5->ri_cc);
 if (VAR_6 < 0)
  goto out_err;
 return 0;

out_err:
 FUNC_5(VAR_5);
 return VAR_6;
}
