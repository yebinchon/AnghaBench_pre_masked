
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_pkt_info {int dummy; } ;
struct tcf_ematch {TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int (* match ) (struct sk_buff*,struct tcf_ematch*,struct tcf_pkt_info*) ;} ;


 int FUNC_0 (struct sk_buff*,struct tcf_ematch*,struct tcf_pkt_info*) ;
 scalar_t__ FUNC_1 (struct tcf_ematch*) ;

__attribute__((used)) static inline int FUNC_2(struct sk_buff *VAR_0, struct tcf_ematch *VAR_1,
          struct tcf_pkt_info *VAR_2)
{
 int VAR_3 = VAR_1->ops->match(VAR_0, VAR_1, VAR_2);

 return FUNC_1(VAR_1) ? !VAR_3 : VAR_3;
}
