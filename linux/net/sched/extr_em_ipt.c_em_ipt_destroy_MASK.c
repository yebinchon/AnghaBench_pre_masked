
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_mtdtor_param {int family; int matchinfo; TYPE_1__* match; int net; } ;
struct tcf_ematch {int net; scalar_t__ data; } ;
struct em_ipt_match {TYPE_1__* match; int match_data; } ;
struct TYPE_2__ {int me; int (* destroy ) (struct xt_mtdtor_param*) ;int family; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xt_mtdtor_param*) ;

__attribute__((used)) static void FUNC_3(struct tcf_ematch *VAR_0)
{
 struct em_ipt_match *VAR_1 = (void *)VAR_0->data;

 if (!VAR_1)
  return;

 if (VAR_1->match->destroy) {
  struct xt_mtdtor_param VAR_2 = {
   .net = VAR_0->net,
   .match = VAR_1->match,
   .matchinfo = VAR_1->match_data,
   .family = VAR_1->match->family
  };
  VAR_1->match->destroy(&VAR_2);
 }
 FUNC_1(VAR_1->match->me);
 FUNC_0((void *)VAR_1);
}
