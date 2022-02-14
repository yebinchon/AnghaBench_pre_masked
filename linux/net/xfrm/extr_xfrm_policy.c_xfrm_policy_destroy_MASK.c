
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int hold_timer; } ;
struct TYPE_3__ {int dead; } ;
struct xfrm_policy {int rcu; TYPE_2__ polq; int timer; TYPE_1__ walk; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_0 ;

void FUNC_4(struct xfrm_policy *VAR_1)
{
 FUNC_1(!VAR_1->walk.dead);

 if (FUNC_3(&VAR_1->timer) || FUNC_3(&VAR_1->polq.hold_timer))
  FUNC_0();

 FUNC_2(&VAR_1->rcu, VAR_0);
}
