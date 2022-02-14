
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int next; } ;
struct tcf_chain {int flushing; int filter_chain_lock; int filter_chain; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct tcf_proto* FUNC_3 (int ,int) ;
 int FUNC_4 (struct tcf_chain*,int *) ;
 struct tcf_proto* FUNC_5 (int ,struct tcf_chain*) ;
 int FUNC_6 (struct tcf_proto*,int,int *) ;
 int FUNC_7 (struct tcf_chain*,struct tcf_proto*) ;

__attribute__((used)) static void FUNC_8(struct tcf_chain *VAR_0, bool VAR_1)
{
 struct tcf_proto *VAR_2, *VAR_3;

 FUNC_1(&VAR_0->filter_chain_lock);
 VAR_2 = FUNC_5(VAR_0->filter_chain, VAR_0);
 while (VAR_2) {
  VAR_3 = FUNC_3(VAR_2->next, 1);
  FUNC_7(VAR_0, VAR_2);
  VAR_2 = VAR_3;
 }
 VAR_2 = FUNC_5(VAR_0->filter_chain, VAR_0);
 FUNC_0(VAR_0->filter_chain, ((void*)0));
 FUNC_4(VAR_0, ((void*)0));
 VAR_0->flushing = 1;
 FUNC_2(&VAR_0->filter_chain_lock);

 while (VAR_2) {
  VAR_3 = FUNC_3(VAR_2->next, 1);
  FUNC_6(VAR_2, VAR_1, ((void*)0));
  VAR_2 = VAR_3;
 }
}
