
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int ring_io_lock; } ;
struct TYPE_4__ {int state; int ring_io_lock; } ;
struct xen_snd_front_evtchnl_pair {TYPE_1__ evt; TYPE_2__ req; } ;
typedef enum xen_snd_front_evtchnl_state { ____Placeholder_xen_snd_front_evtchnl_state } xen_snd_front_evtchnl_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct xen_snd_front_evtchnl_pair *VAR_2,
           bool VAR_3)
{
 enum xen_snd_front_evtchnl_state VAR_4;

 if (VAR_3)
  VAR_4 = VAR_0;
 else
  VAR_4 = VAR_1;

 FUNC_0(&VAR_2->req.ring_io_lock);
 VAR_2->req.state = VAR_4;
 FUNC_1(&VAR_2->req.ring_io_lock);

 FUNC_0(&VAR_2->evt.ring_io_lock);
 VAR_2->evt.state = VAR_4;
 FUNC_1(&VAR_2->evt.ring_io_lock);
}
