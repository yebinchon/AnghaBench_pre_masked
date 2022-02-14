
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state_walk {int all; int filter; } ;
struct TYPE_2__ {int xfrm_state_lock; } ;
struct net {TYPE_1__ xfrm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct xfrm_state_walk *VAR_0, struct net *VAR_1)
{
 FUNC_0(VAR_0->filter);

 if (FUNC_2(&VAR_0->all))
  return;

 FUNC_3(&VAR_1->xfrm.xfrm_state_lock);
 FUNC_1(&VAR_0->all);
 FUNC_4(&VAR_1->xfrm.xfrm_state_lock);
}
