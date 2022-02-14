
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_buf {int page_len; } ;
struct svcxprt_rdma {int dummy; } ;
struct svc_rdma_write_info {int wi_cc; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct svc_rdma_write_info*,struct xdr_buf*) ;
 struct svc_rdma_write_info* FUNC_2 (struct svcxprt_rdma*,int *) ;
 int FUNC_3 (struct svc_rdma_write_info*) ;
 int FUNC_4 (int) ;

int FUNC_5(struct svcxprt_rdma *VAR_1, __be32 *VAR_2,
         struct xdr_buf *VAR_3)
{
 struct svc_rdma_write_info *VAR_4;
 int VAR_5;

 if (!VAR_3->page_len)
  return 0;

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_4, VAR_3);
 if (VAR_5 < 0)
  goto out_err;

 VAR_5 = FUNC_0(&VAR_4->wi_cc);
 if (VAR_5 < 0)
  goto out_err;

 FUNC_4(VAR_3->page_len);
 return VAR_3->page_len;

out_err:
 FUNC_3(VAR_4);
 return VAR_5;
}
