
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ spi; } ;
struct TYPE_4__ {scalar_t__ state; int all; } ;
struct xfrm_state {int byspi; TYPE_2__ id; int bysrc; int bydst; TYPE_1__ km; } ;
struct TYPE_6__ {int xfrm_state_lock; int state_num; } ;
struct net {TYPE_3__ xfrm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct xfrm_state*) ;
 int FUNC_5 (struct xfrm_state*) ;
 struct net* FUNC_6 (struct xfrm_state*) ;

int FUNC_7(struct xfrm_state *VAR_2)
{
 struct net *VAR_3 = FUNC_6(VAR_2);
 int VAR_4 = -VAR_0;

 if (VAR_2->km.state != VAR_1) {
  VAR_2->km.state = VAR_1;
  FUNC_2(&VAR_3->xfrm.xfrm_state_lock);
  FUNC_1(&VAR_2->km.all);
  FUNC_0(&VAR_2->bydst);
  FUNC_0(&VAR_2->bysrc);
  if (VAR_2->id.spi)
   FUNC_0(&VAR_2->byspi);
  VAR_3->xfrm.state_num--;
  FUNC_3(&VAR_3->xfrm.xfrm_state_lock);

  FUNC_4(VAR_2);





  FUNC_5(VAR_2);
  VAR_4 = 0;
 }

 return VAR_4;
}
