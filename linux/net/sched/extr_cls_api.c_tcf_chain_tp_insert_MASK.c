
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int next; } ;
struct tcf_chain_info {scalar_t__* pprev; } ;
struct tcf_chain {scalar_t__ filter_chain; scalar_t__ flushing; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,struct tcf_proto*) ;
 int FUNC_2 (struct tcf_chain*,struct tcf_proto*) ;
 int FUNC_3 (struct tcf_chain*,struct tcf_chain_info*) ;
 int FUNC_4 (struct tcf_proto*) ;

__attribute__((used)) static int FUNC_5(struct tcf_chain *VAR_1,
          struct tcf_chain_info *VAR_2,
          struct tcf_proto *VAR_3)
{
 if (VAR_1->flushing)
  return -VAR_0;

 if (*VAR_2->pprev == VAR_1->filter_chain)
  FUNC_2(VAR_1, VAR_3);
 FUNC_4(VAR_3);
 FUNC_0(VAR_3->next, FUNC_3(VAR_1, VAR_2));
 FUNC_1(*VAR_2->pprev, VAR_3);

 return 0;
}
