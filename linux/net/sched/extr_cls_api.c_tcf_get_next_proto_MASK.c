
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct tcf_chain {int dummy; } ;


 struct tcf_proto* FUNC_0 (struct tcf_chain*,struct tcf_proto*) ;
 int FUNC_1 (struct tcf_proto*,int,int *) ;

struct tcf_proto *
FUNC_2(struct tcf_chain *VAR_0, struct tcf_proto *VAR_1,
     bool VAR_2)
{
 struct tcf_proto *VAR_3 = FUNC_0(VAR_0, VAR_1);

 if (VAR_1)
  FUNC_1(VAR_1, VAR_2, ((void*)0));

 return VAR_3;
}
