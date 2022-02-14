
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct TYPE_6__ {int page_len; int len; int buflen; TYPE_2__* head; TYPE_1__* tail; } ;
struct svc_rdma_recv_ctxt {TYPE_3__ rc_arg; scalar_t__ rc_hdr_count; } ;
struct svc_rdma_read_info {int ri_chunklen; scalar_t__ ri_position; struct svc_rdma_recv_ctxt* ri_readctxt; } ;
typedef int __be32 ;
struct TYPE_5__ {scalar_t__ iov_len; scalar_t__ iov_base; } ;
struct TYPE_4__ {scalar_t__ iov_len; scalar_t__ iov_base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct svc_rqst*,struct svc_rdma_read_info*,int *) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct svc_rqst *VAR_0,
         struct svc_rdma_read_info *VAR_1,
         __be32 *VAR_2)
{
 struct svc_rdma_recv_ctxt *VAR_3 = VAR_1->ri_readctxt;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_4 < 0)
  goto out;

 FUNC_2(VAR_1->ri_chunklen, VAR_1->ri_position);

 VAR_3->rc_hdr_count = 0;






 VAR_3->rc_arg.tail[0].iov_base =
  VAR_3->rc_arg.head[0].iov_base + VAR_1->ri_position;
 VAR_3->rc_arg.tail[0].iov_len =
  VAR_3->rc_arg.head[0].iov_len - VAR_1->ri_position;
 VAR_3->rc_arg.head[0].iov_len = VAR_1->ri_position;
 VAR_1->ri_chunklen = FUNC_0(VAR_1->ri_chunklen) << 2;

 VAR_3->rc_arg.page_len = VAR_1->ri_chunklen;
 VAR_3->rc_arg.len += VAR_1->ri_chunklen;
 VAR_3->rc_arg.buflen += VAR_1->ri_chunklen;

out:
 return VAR_4;
}
