
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rdma_write_info {int wi_base; } ;
struct kvec {int iov_len; int iov_base; } ;


 int FUNC_0 (struct svc_rdma_write_info*,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct svc_rdma_write_info *VAR_1,
      struct kvec *VAR_2)
{
 VAR_1->wi_base = VAR_2->iov_base;
 return FUNC_0(VAR_1, VAR_0,
         VAR_2->iov_len);
}
