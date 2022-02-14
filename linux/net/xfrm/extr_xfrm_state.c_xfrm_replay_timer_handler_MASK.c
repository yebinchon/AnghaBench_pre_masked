
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; } ;
struct xfrm_state {int lock; int xflags; TYPE_2__* repl; TYPE_1__ km; } ;
struct timer_list {int dummy; } ;
struct TYPE_4__ {int (* notify ) (struct xfrm_state*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct xfrm_state* FUNC_0 (int ,struct timer_list*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct xfrm_state*,int ) ;
 struct xfrm_state* VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct xfrm_state*) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_5)
{
 struct xfrm_state *VAR_6 = FUNC_0(VAR_6, VAR_5, VAR_3);

 FUNC_1(&VAR_6->lock);

 if (VAR_6->km.state == VAR_1) {
  if (FUNC_4(FUNC_5(VAR_6)))
   VAR_6->repl->notify(VAR_6, VAR_0);
  else
   VAR_6->xflags |= VAR_2;
 }

 FUNC_2(&VAR_6->lock);
}
