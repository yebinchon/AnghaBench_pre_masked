
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rdma_write_info {unsigned int wi_base; } ;
struct TYPE_2__ {struct scatterlist* sgl; } ;
struct svc_rdma_rw_ctxt {int rw_nents; TYPE_1__ rw_sg_table; } ;
struct scatterlist {int dummy; } ;


 int FUNC_0 (struct scatterlist*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct svc_rdma_write_info *VAR_0,
          unsigned int VAR_1,
          struct svc_rdma_rw_ctxt *VAR_2)
{
 struct scatterlist *VAR_3 = VAR_2->rw_sg_table.sgl;

 FUNC_0(&VAR_3[0], VAR_0->wi_base, VAR_1);
 VAR_0->wi_base += VAR_1;

 VAR_2->rw_nents = 1;
}
