
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct tcf_chain_info {int * pprev; } ;
struct tcf_chain {int dummy; } ;


 struct tcf_proto* FUNC_0 (int ,struct tcf_chain*) ;

__attribute__((used)) static struct tcf_proto *FUNC_1(struct tcf_chain *VAR_0,
        struct tcf_chain_info *VAR_1)
{
 return FUNC_0(*VAR_1->pprev, VAR_0);
}
