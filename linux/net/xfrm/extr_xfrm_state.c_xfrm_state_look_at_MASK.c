
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ family; } ;
struct TYPE_5__ {scalar_t__ state; scalar_t__ dying; } ;
struct TYPE_4__ {scalar_t__ add_time; } ;
struct xfrm_state {TYPE_3__ sel; TYPE_2__ km; TYPE_1__ curlft; } ;
struct xfrm_policy {int dummy; } ;
struct flowi {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct xfrm_state*,struct xfrm_policy*,struct flowi const*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,struct flowi const*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct xfrm_policy *VAR_5, struct xfrm_state *VAR_6,
          const struct flowi *VAR_7, unsigned short VAR_8,
          struct xfrm_state **VAR_9, int *VAR_10,
          int *VAR_11)
{
 if (VAR_6->km.state == VAR_4) {
  if ((VAR_6->sel.family &&
       !FUNC_1(&VAR_6->sel, VAR_7, VAR_6->sel.family)) ||
      !FUNC_0(VAR_6, VAR_5, VAR_7))
   return;

  if (!*VAR_9 ||
      (*VAR_9)->km.dying > VAR_6->km.dying ||
      ((*VAR_9)->km.dying == VAR_6->km.dying &&
       (*VAR_9)->curlft.add_time < VAR_6->curlft.add_time))
   *VAR_9 = VAR_6;
 } else if (VAR_6->km.state == VAR_1) {
  *VAR_10 = 1;
 } else if (VAR_6->km.state == VAR_2 ||
     VAR_6->km.state == VAR_3) {
  if (FUNC_1(&VAR_6->sel, VAR_7, VAR_6->sel.family) &&
      FUNC_0(VAR_6, VAR_5, VAR_7))
   *VAR_11 = -VAR_0;
 }
}
