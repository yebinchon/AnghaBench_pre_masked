
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_idrinfo {int lock; int action_idr; } ;
struct tc_action_net {struct tcf_idrinfo* idrinfo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct tc_action_net *VAR_0, u32 VAR_1)
{
 struct tcf_idrinfo *VAR_2 = VAR_0->idrinfo;

 FUNC_3(&VAR_2->lock);

 FUNC_1(!FUNC_0(FUNC_2(&VAR_2->action_idr, VAR_1)));
 FUNC_4(&VAR_2->lock);
}
