
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcf_proto {scalar_t__ prio; int next; int deleting; } ;
struct tcf_chain {int filter_chain_lock; int filter_chain; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct tcf_proto* FUNC_3 (int ,struct tcf_chain*) ;
 int FUNC_4 (struct tcf_proto*) ;
 scalar_t__ FUNC_5 (struct tcf_proto*) ;

__attribute__((used)) static struct tcf_proto *
FUNC_6(struct tcf_chain *VAR_0, struct tcf_proto *VAR_1)
{
 u32 VAR_2 = 0;

 FUNC_0();
 FUNC_1(&VAR_0->filter_chain_lock);

 if (!VAR_1) {
  VAR_1 = FUNC_3(VAR_0->filter_chain, VAR_0);
 } else if (FUNC_5(VAR_1)) {




  VAR_2 = VAR_1->prio + 1;
  VAR_1 = FUNC_3(VAR_0->filter_chain, VAR_0);

  for (; VAR_1; VAR_1 = FUNC_3(VAR_1->next, VAR_0))
   if (!VAR_1->deleting && VAR_1->prio >= VAR_2)
    break;
 } else {
  VAR_1 = FUNC_3(VAR_1->next, VAR_0);
 }

 if (VAR_1)
  FUNC_4(VAR_1);

 FUNC_2(&VAR_0->filter_chain_lock);

 return VAR_1;
}
