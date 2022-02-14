
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xensnd_req {int dummy; } ;
struct TYPE_3__ {int req_io_lock; } ;
struct TYPE_4__ {TYPE_1__ req; } ;
struct xen_snd_front_evtchnl {TYPE_2__ u; int ring_io_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct xen_snd_front_evtchnl*) ;
 struct xensnd_req* FUNC_1 (struct xen_snd_front_evtchnl*,int ) ;
 int FUNC_2 (struct xen_snd_front_evtchnl*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct xen_snd_front_evtchnl *VAR_1)
{
 struct xensnd_req *VAR_2;
 int VAR_3;

 FUNC_3(&VAR_1->u.req.req_io_lock);

 FUNC_3(&VAR_1->ring_io_lock);
 VAR_2 = FUNC_1(VAR_1, VAR_0);
 FUNC_4(&VAR_1->ring_io_lock);

 VAR_3 = FUNC_0(VAR_1);

 if (VAR_3 == 0)
  VAR_3 = FUNC_2(VAR_1);

 FUNC_4(&VAR_1->u.req.req_io_lock);
 return VAR_3;
}
