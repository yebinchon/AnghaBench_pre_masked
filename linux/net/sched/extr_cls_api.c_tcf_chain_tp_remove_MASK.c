
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct tcf_chain_info {int * pprev; int next; } ;
struct tcf_chain {struct tcf_proto* filter_chain; } ;


 int FUNC_0 (int ,struct tcf_proto*) ;
 int FUNC_1 (struct tcf_chain*,struct tcf_proto*) ;
 struct tcf_proto* FUNC_2 (int ,struct tcf_chain*) ;
 int FUNC_3 (struct tcf_proto*) ;

__attribute__((used)) static void FUNC_4(struct tcf_chain *VAR_0,
    struct tcf_chain_info *VAR_1,
    struct tcf_proto *VAR_2)
{
 struct tcf_proto *VAR_3 = FUNC_2(VAR_1->next, VAR_0);

 FUNC_3(VAR_2);
 if (VAR_2 == VAR_0->filter_chain)
  FUNC_1(VAR_0, VAR_3);
 FUNC_0(*VAR_1->pprev, VAR_3);
}
