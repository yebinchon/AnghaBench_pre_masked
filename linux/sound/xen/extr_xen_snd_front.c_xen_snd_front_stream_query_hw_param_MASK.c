
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xensnd_query_hw_param {int dummy; } ;
struct TYPE_5__ {struct xensnd_query_hw_param hw_param; } ;
struct xensnd_req {TYPE_1__ op; } ;
struct TYPE_6__ {struct xensnd_query_hw_param hw_param; } ;
struct TYPE_8__ {int req_io_lock; TYPE_2__ resp; } ;
struct TYPE_7__ {TYPE_4__ req; } ;
struct xen_snd_front_evtchnl {TYPE_3__ u; int ring_io_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct xen_snd_front_evtchnl*) ;
 struct xensnd_req* FUNC_1 (struct xen_snd_front_evtchnl*,int ) ;
 int FUNC_2 (struct xen_snd_front_evtchnl*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct xen_snd_front_evtchnl *VAR_1,
     struct xensnd_query_hw_param *VAR_2,
     struct xensnd_query_hw_param *VAR_3)
{
 struct xensnd_req *VAR_4;
 int VAR_5;

 FUNC_3(&VAR_1->u.req.req_io_lock);

 FUNC_3(&VAR_1->ring_io_lock);
 VAR_4 = FUNC_1(VAR_1, VAR_0);
 VAR_4->op.hw_param = *VAR_2;
 FUNC_4(&VAR_1->ring_io_lock);

 VAR_5 = FUNC_0(VAR_1);

 if (VAR_5 == 0)
  VAR_5 = FUNC_2(VAR_1);

 if (VAR_5 == 0)
  *VAR_3 = VAR_1->u.req.resp.hw_param;

 FUNC_4(&VAR_1->u.req.req_io_lock);
 return VAR_5;
}
