
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int family; } ;
struct xfrm_userpolicy_info {TYPE_1__ sel; int flags; int action; TYPE_1__ lft; int index; int priority; } ;
struct xfrm_policy {int family; int flags; int action; int lft; int selector; int index; int priority; } ;


 int FUNC_0 (int *,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(struct xfrm_policy *VAR_0, struct xfrm_userpolicy_info *VAR_1)
{
 VAR_0->priority = VAR_1->priority;
 VAR_0->index = VAR_1->index;
 FUNC_0(&VAR_0->selector, &VAR_1->sel, sizeof(VAR_0->selector));
 FUNC_0(&VAR_0->lft, &VAR_1->lft, sizeof(VAR_0->lft));
 VAR_0->action = VAR_1->action;
 VAR_0->flags = VAR_1->flags;
 VAR_0->family = VAR_1->sel.family;

}
