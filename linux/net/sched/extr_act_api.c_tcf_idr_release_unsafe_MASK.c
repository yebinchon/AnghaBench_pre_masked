
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_action {int tcfa_index; TYPE_1__* idrinfo; int tcfa_refcnt; int tcfa_bindcnt; } ;
struct TYPE_2__ {int action_idr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct tc_action*) ;

__attribute__((used)) static int FUNC_4(struct tc_action *VAR_2)
{
 if (FUNC_0(&VAR_2->tcfa_bindcnt) > 0)
  return -VAR_1;

 if (FUNC_2(&VAR_2->tcfa_refcnt)) {
  FUNC_1(&VAR_2->idrinfo->action_idr, VAR_2->tcfa_index);
  FUNC_3(VAR_2);
  return VAR_0;
 }

 return 0;
}
