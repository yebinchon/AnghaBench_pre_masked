
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state {int dummy; } ;
struct TYPE_2__ {int xfrm_state_lock; } ;
struct net {TYPE_1__ xfrm; } ;


 int FUNC_0 (struct xfrm_state*) ;
 int FUNC_1 (struct xfrm_state*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct net* FUNC_4 (struct xfrm_state*) ;

void FUNC_5(struct xfrm_state *VAR_0)
{
 struct net *VAR_1 = FUNC_4(VAR_0);

 FUNC_2(&VAR_1->xfrm.xfrm_state_lock);
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
 FUNC_3(&VAR_1->xfrm.xfrm_state_lock);
}
