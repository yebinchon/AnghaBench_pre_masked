
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_idrinfo {int lock; int action_idr; } ;
struct tc_action_net {struct tcf_idrinfo* idrinfo; } ;
struct tc_action {int tcfa_refcnt; } ;


 scalar_t__ FUNC_0 (struct tc_action*) ;
 struct tc_action* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct tc_action_net *VAR_0, struct tc_action **VAR_1, u32 VAR_2)
{
 struct tcf_idrinfo *VAR_3 = VAR_0->idrinfo;
 struct tc_action *VAR_4;

 FUNC_2(&VAR_3->lock);
 VAR_4 = FUNC_1(&VAR_3->action_idr, VAR_2);
 if (FUNC_0(VAR_4))
  VAR_4 = ((void*)0);
 else if (VAR_4)
  FUNC_4(&VAR_4->tcfa_refcnt);
 FUNC_3(&VAR_3->lock);

 if (VAR_4) {
  *VAR_1 = VAR_4;
  return 1;
 }
 return 0;
}
