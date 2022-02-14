
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ring_io_lock; scalar_t__ evt_next_id; } ;
struct TYPE_3__ {int ring_io_lock; scalar_t__ evt_next_id; } ;
struct xen_snd_front_evtchnl_pair {TYPE_2__ evt; TYPE_1__ req; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct xen_snd_front_evtchnl_pair *VAR_0)
{
 FUNC_0(&VAR_0->req.ring_io_lock);
 VAR_0->req.evt_next_id = 0;
 FUNC_1(&VAR_0->req.ring_io_lock);

 FUNC_0(&VAR_0->evt.ring_io_lock);
 VAR_0->evt.evt_next_id = 0;
 FUNC_1(&VAR_0->evt.ring_io_lock);
}
