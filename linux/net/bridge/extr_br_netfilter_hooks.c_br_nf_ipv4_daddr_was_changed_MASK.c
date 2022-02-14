
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_bridge_info {scalar_t__ ipv4_daddr; } ;
struct TYPE_2__ {scalar_t__ daddr; } ;


 TYPE_1__* FUNC_0 (struct sk_buff const*) ;

__attribute__((used)) static inline bool
FUNC_1(const struct sk_buff *VAR_0,
        const struct nf_bridge_info *VAR_1)
{
 return FUNC_0(VAR_0)->daddr != VAR_1->ipv4_daddr;
}
