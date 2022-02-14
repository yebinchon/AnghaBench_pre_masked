
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_idrinfo {int lock; int action_idr; } ;
struct tc_action {int tcfa_bindcnt; int tcfa_index; int tcfa_refcnt; struct tcf_idrinfo* idrinfo; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (struct tc_action*) ;

__attribute__((used)) static int FUNC_5(struct tc_action *VAR_0, bool VAR_1)
{
 struct tcf_idrinfo *VAR_2 = VAR_0->idrinfo;

 if (FUNC_3(&VAR_0->tcfa_refcnt, &VAR_2->lock)) {
  if (VAR_1)
   FUNC_0(&VAR_0->tcfa_bindcnt);
  FUNC_1(&VAR_2->action_idr, VAR_0->tcfa_index);
  FUNC_2(&VAR_2->lock);

  FUNC_4(VAR_0);
  return 1;
 }

 if (VAR_1)
  FUNC_0(&VAR_0->tcfa_bindcnt);

 return 0;
}
