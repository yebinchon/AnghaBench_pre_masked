
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct tcf_filter_chain_list_item {int chain_head_change_priv; int (* chain_head_change ) (struct tcf_proto*,int ) ;} ;


 int FUNC_0 (struct tcf_proto*,int ) ;

__attribute__((used)) static void FUNC_1(struct tcf_filter_chain_list_item *VAR_0,
           struct tcf_proto *VAR_1)
{
 if (VAR_0->chain_head_change)
  VAR_0->chain_head_change(VAR_1, VAR_0->chain_head_change_priv);
}
