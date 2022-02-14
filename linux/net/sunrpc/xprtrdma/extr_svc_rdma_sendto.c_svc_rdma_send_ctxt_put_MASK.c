
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct svcxprt_rdma {int sc_send_lock; int sc_send_ctxts; TYPE_1__* sc_cm_id; } ;
struct TYPE_5__ {unsigned int num_sge; } ;
struct svc_rdma_send_ctxt {unsigned int sc_page_count; int sc_list; int * sc_pages; TYPE_3__* sc_sges; TYPE_2__ sc_send_wr; } ;
struct ib_device {int dummy; } ;
struct TYPE_6__ {int length; int addr; } ;
struct TYPE_4__ {struct ib_device* device; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,int ,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct svcxprt_rdma *VAR_1,
       struct svc_rdma_send_ctxt *VAR_2)
{
 struct ib_device *VAR_3 = VAR_1->sc_cm_id->device;
 unsigned int VAR_4;




 for (VAR_4 = 1; VAR_4 < VAR_2->sc_send_wr.num_sge; VAR_4++)
  FUNC_0(VAR_3,
      VAR_2->sc_sges[VAR_4].addr,
      VAR_2->sc_sges[VAR_4].length,
      VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_2->sc_page_count; ++VAR_4)
  FUNC_2(VAR_2->sc_pages[VAR_4]);

 FUNC_3(&VAR_1->sc_send_lock);
 FUNC_1(&VAR_2->sc_list, &VAR_1->sc_send_ctxts);
 FUNC_4(&VAR_1->sc_send_lock);
}
