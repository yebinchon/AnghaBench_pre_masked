
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_hook_state {scalar_t__ hook; TYPE_2__* net; } ;
struct TYPE_3__ {int iptable_mangle; } ;
struct TYPE_4__ {TYPE_1__ ipv4; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct sk_buff*,struct nf_hook_state const*,int ) ;
 unsigned int FUNC_1 (struct sk_buff*,struct nf_hook_state const*) ;

__attribute__((used)) static unsigned int
FUNC_2(void *VAR_1,
       struct sk_buff *VAR_2,
       const struct nf_hook_state *VAR_3)
{
 if (VAR_3->hook == VAR_0)
  return FUNC_1(VAR_2, VAR_3);
 return FUNC_0(VAR_2, VAR_3, VAR_3->net->ipv4.iptable_mangle);
}
