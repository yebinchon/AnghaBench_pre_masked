
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_bridge_info {int ipv6_daddr; } ;
struct TYPE_2__ {int daddr; } ;


 TYPE_1__* FUNC_0 (struct sk_buff const*) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;

__attribute__((used)) static inline bool
FUNC_2(const struct sk_buff *VAR_0,
        const struct nf_bridge_info *VAR_1)
{
 return FUNC_1(&VAR_1->ipv6_daddr, &FUNC_0(VAR_0)->daddr,
        sizeof(FUNC_0(VAR_0)->daddr)) != 0;
}
