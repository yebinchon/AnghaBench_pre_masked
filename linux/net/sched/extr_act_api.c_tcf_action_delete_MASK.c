
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_idrinfo {int dummy; } ;
struct tc_action_ops {int owner; } ;
struct tc_action {int tcfa_index; struct tcf_idrinfo* idrinfo; struct tc_action_ops* ops; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct tc_action*) ;
 int FUNC_2 (struct tcf_idrinfo*,int ) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_1, struct tc_action *VAR_2[])
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0 && VAR_2[VAR_3]; VAR_3++) {
  struct tc_action *VAR_4 = VAR_2[VAR_3];
  const struct tc_action_ops *VAR_5 = VAR_4->ops;



  struct tcf_idrinfo *VAR_6 = VAR_4->idrinfo;
  u32 VAR_7 = VAR_4->tcfa_index;

  VAR_2[VAR_3] = ((void*)0);
  if (FUNC_1(VAR_4)) {

   FUNC_0(VAR_5->owner);
  } else {
   int VAR_8;


   VAR_8 = FUNC_2(VAR_6, VAR_7);
   if (VAR_8 < 0)
    return VAR_8;
  }
 }
 return 0;
}
