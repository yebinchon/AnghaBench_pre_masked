
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int family; } ;
struct xfrm_userpolicy_info {int dir; int share; int flags; int action; TYPE_1__ sel; int index; int priority; TYPE_1__ curlft; TYPE_1__ lft; } ;
struct xfrm_policy {int flags; int action; int family; int index; int priority; int curlft; int lft; int selector; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int) ;
 int FUNC_1 (struct xfrm_userpolicy_info*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct xfrm_policy *VAR_1, struct xfrm_userpolicy_info *VAR_2, int VAR_3)
{
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 FUNC_0(&VAR_2->sel, &VAR_1->selector, sizeof(VAR_2->sel));
 FUNC_0(&VAR_2->lft, &VAR_1->lft, sizeof(VAR_2->lft));
 FUNC_0(&VAR_2->curlft, &VAR_1->curlft, sizeof(VAR_2->curlft));
 VAR_2->priority = VAR_1->priority;
 VAR_2->index = VAR_1->index;
 VAR_2->sel.family = VAR_1->family;
 VAR_2->dir = VAR_3;
 VAR_2->action = VAR_1->action;
 VAR_2->flags = VAR_1->flags;
 VAR_2->share = VAR_0;
}
