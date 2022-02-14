
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct svcxprt_rdma {TYPE_3__* sc_cm_id; } ;
struct TYPE_5__ {int num_sge; } ;
struct svc_rdma_send_ctxt {size_t sc_cur_sge_no; TYPE_2__ sc_send_wr; TYPE_1__* sc_sges; } ;
struct page {int dummy; } ;
struct ib_device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {struct ib_device* device; } ;
struct TYPE_4__ {unsigned int length; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_device*,struct page*,unsigned long,unsigned int,int ) ;
 scalar_t__ FUNC_1 (struct ib_device*,int ) ;
 int FUNC_2 (struct svcxprt_rdma*,struct page*) ;

__attribute__((used)) static int FUNC_3(struct svcxprt_rdma *VAR_2,
     struct svc_rdma_send_ctxt *VAR_3,
     struct page *VAR_4,
     unsigned long VAR_5,
     unsigned int VAR_6)
{
 struct ib_device *VAR_7 = VAR_2->sc_cm_id->device;
 dma_addr_t VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_4, VAR_5, VAR_6, VAR_0);
 if (FUNC_1(VAR_7, VAR_8))
  goto out_maperr;

 VAR_3->sc_sges[VAR_3->sc_cur_sge_no].addr = VAR_8;
 VAR_3->sc_sges[VAR_3->sc_cur_sge_no].length = VAR_6;
 VAR_3->sc_send_wr.num_sge++;
 return 0;

out_maperr:
 FUNC_2(VAR_2, VAR_4);
 return -VAR_1;
}
