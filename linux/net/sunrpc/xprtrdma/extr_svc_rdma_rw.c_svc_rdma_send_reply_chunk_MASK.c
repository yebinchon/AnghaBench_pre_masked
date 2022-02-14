
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_buf {TYPE_1__* tail; scalar_t__ page_len; TYPE_1__* head; } ;
struct svcxprt_rdma {int dummy; } ;
struct svc_rdma_write_info {int wi_cc; } ;
typedef int __be32 ;
struct TYPE_2__ {int iov_len; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct svc_rdma_write_info*,TYPE_1__*) ;
 int FUNC_2 (struct svc_rdma_write_info*,struct xdr_buf*) ;
 struct svc_rdma_write_info* FUNC_3 (struct svcxprt_rdma*,int *) ;
 int FUNC_4 (struct svc_rdma_write_info*) ;
 int FUNC_5 (int) ;

int FUNC_6(struct svcxprt_rdma *VAR_1, __be32 *VAR_2,
         bool VAR_3, struct xdr_buf *VAR_4)
{
 struct svc_rdma_write_info *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_3(VAR_1, VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_5, &VAR_4->head[0]);
 if (VAR_7 < 0)
  goto out_err;
 VAR_6 = VAR_4->head[0].iov_len;




 if (!VAR_3 && VAR_4->page_len) {
  VAR_7 = FUNC_2(VAR_5, VAR_4);
  if (VAR_7 < 0)
   goto out_err;
  VAR_6 += VAR_4->page_len;
 }

 if (VAR_4->tail[0].iov_len) {
  VAR_7 = FUNC_1(VAR_5, &VAR_4->tail[0]);
  if (VAR_7 < 0)
   goto out_err;
  VAR_6 += VAR_4->tail[0].iov_len;
 }

 VAR_7 = FUNC_0(&VAR_5->wi_cc);
 if (VAR_7 < 0)
  goto out_err;

 FUNC_5(VAR_6);
 return VAR_6;

out_err:
 FUNC_4(VAR_5);
 return VAR_7;
}
