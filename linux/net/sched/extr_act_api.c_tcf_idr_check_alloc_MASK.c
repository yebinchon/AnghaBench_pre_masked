
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_idrinfo {int lock; int action_idr; } ;
struct tc_action_net {struct tcf_idrinfo* idrinfo; } ;
struct tc_action {int tcfa_bindcnt; int tcfa_refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct tc_action*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int*,int,int ) ;
 struct tc_action* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct tc_action_net *VAR_3, u32 *VAR_4,
   struct tc_action **VAR_5, int VAR_6)
{
 struct tcf_idrinfo *VAR_7 = VAR_3->idrinfo;
 struct tc_action *VAR_8;
 int VAR_9;

again:
 FUNC_6(&VAR_7->lock);
 if (*VAR_4) {
  VAR_8 = FUNC_4(&VAR_7->action_idr, *VAR_4);
  if (FUNC_1(VAR_8)) {



   FUNC_7(&VAR_7->lock);
   goto again;
  }

  if (VAR_8) {
   FUNC_8(&VAR_8->tcfa_refcnt);
   if (VAR_6)
    FUNC_2(&VAR_8->tcfa_bindcnt);
   *VAR_5 = VAR_8;
   VAR_9 = 1;
  } else {
   *VAR_5 = ((void*)0);
   VAR_9 = FUNC_3(&VAR_7->action_idr, ((void*)0), VAR_4,
         *VAR_4, VAR_1);
   if (!VAR_9)
    FUNC_5(&VAR_7->action_idr,
         FUNC_0(-VAR_0), *VAR_4);
  }
 } else {
  *VAR_4 = 1;
  *VAR_5 = ((void*)0);
  VAR_9 = FUNC_3(&VAR_7->action_idr, ((void*)0), VAR_4,
        VAR_2, VAR_1);
  if (!VAR_9)
   FUNC_5(&VAR_7->action_idr, FUNC_0(-VAR_0),
        *VAR_4);
 }
 FUNC_7(&VAR_7->lock);
 return VAR_9;
}
