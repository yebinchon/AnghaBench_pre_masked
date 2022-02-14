
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_action_param {struct nf_nat_ipv4_multi_range_compat* targinfo; } ;
struct sk_buff {int dummy; } ;
struct nf_nat_range2 {int max_proto; int min_proto; int flags; } ;
struct nf_nat_ipv4_multi_range_compat {TYPE_1__* range; } ;
struct TYPE_2__ {int max; int min; int flags; } ;


 unsigned int FUNC_0 (struct sk_buff*,int ,struct nf_nat_range2*,int ) ;
 int FUNC_1 (struct xt_action_param const*) ;
 int FUNC_2 (struct xt_action_param const*) ;

__attribute__((used)) static unsigned int
FUNC_3(struct sk_buff *VAR_0, const struct xt_action_param *VAR_1)
{
 struct nf_nat_range2 VAR_2;
 const struct nf_nat_ipv4_multi_range_compat *VAR_3;

 VAR_3 = VAR_1->targinfo;
 VAR_2.flags = VAR_3->range[0].flags;
 VAR_2.min_proto = VAR_3->range[0].min;
 VAR_2.max_proto = VAR_3->range[0].max;

 return FUNC_0(VAR_0, FUNC_1(VAR_1), &VAR_2,
          FUNC_2(VAR_1));
}
