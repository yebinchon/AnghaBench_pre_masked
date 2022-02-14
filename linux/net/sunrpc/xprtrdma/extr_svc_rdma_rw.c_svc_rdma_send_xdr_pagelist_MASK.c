
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_buf {int page_len; } ;
struct svc_rdma_write_info {scalar_t__ wi_next_off; struct xdr_buf* wi_xdr; } ;


 int FUNC_0 (struct svc_rdma_write_info*,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct svc_rdma_write_info *VAR_1,
          struct xdr_buf *VAR_2)
{
 VAR_1->wi_xdr = VAR_2;
 VAR_1->wi_next_off = 0;
 return FUNC_0(VAR_1, VAR_0,
         VAR_2->page_len);
}
