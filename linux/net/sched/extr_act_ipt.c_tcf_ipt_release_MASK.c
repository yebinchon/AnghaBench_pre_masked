
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_ipt {scalar_t__ tcfi_tname; scalar_t__ tcfi_t; } ;
struct tc_action {TYPE_1__* idrinfo; } ;
struct TYPE_2__ {int net; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 struct tcf_ipt* FUNC_2 (struct tc_action*) ;

__attribute__((used)) static void FUNC_3(struct tc_action *VAR_0)
{
 struct tcf_ipt *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->tcfi_t) {
  FUNC_0(VAR_1->tcfi_t, VAR_0->idrinfo->net);
  FUNC_1(VAR_1->tcfi_t);
 }
 FUNC_1(VAR_1->tcfi_tname);
}
