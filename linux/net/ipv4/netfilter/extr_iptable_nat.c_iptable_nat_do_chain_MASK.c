
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_hook_state {TYPE_2__* net; } ;
struct TYPE_3__ {int nat_table; } ;
struct TYPE_4__ {TYPE_1__ ipv4; } ;


 unsigned int FUNC_0 (struct sk_buff*,struct nf_hook_state const*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(void *VAR_0,
      struct sk_buff *VAR_1,
      const struct nf_hook_state *VAR_2)
{
 return FUNC_0(VAR_1, VAR_2, VAR_2->net->ipv4.nat_table);
}
