
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct mini_Qdisc {int rcu; struct tcf_proto* filter_list; } ;
struct mini_Qdisc_pair {int * p_miniq; struct mini_Qdisc miniq2; struct mini_Qdisc miniq1; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct mini_Qdisc*) ;
 int FUNC_3 () ;
 struct mini_Qdisc* FUNC_4 (int ,int) ;

void FUNC_5(struct mini_Qdisc_pair *VAR_1,
     struct tcf_proto *VAR_2)
{



 struct mini_Qdisc *VAR_3 =
  FUNC_4(*VAR_1->p_miniq, 1);
 struct mini_Qdisc *VAR_4;

 if (!VAR_2) {
  FUNC_0(*VAR_1->p_miniq, ((void*)0));

  FUNC_3();
  return;
 }

 VAR_4 = !VAR_3 || VAR_3 == &VAR_1->miniq2 ?
  &VAR_1->miniq1 : &VAR_1->miniq2;





 FUNC_3();
 VAR_4->filter_list = VAR_2;
 FUNC_2(*VAR_1->p_miniq, VAR_4);

 if (VAR_3)




  FUNC_1(&VAR_3->rcu, VAR_0);
}
