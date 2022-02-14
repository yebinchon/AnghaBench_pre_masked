
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct ip_vs_sh_state {TYPE_1__* buckets; } ;
struct ip_vs_service {int af; } ;
struct ip_vs_dest {int dummy; } ;
typedef int __be16 ;
struct TYPE_2__ {int dest; } ;


 unsigned int FUNC_0 (int ,union nf_inet_addr const*,int ,int ) ;
 scalar_t__ FUNC_1 (struct ip_vs_dest*) ;
 struct ip_vs_dest* FUNC_2 (int ) ;

__attribute__((used)) static inline struct ip_vs_dest *
FUNC_3(struct ip_vs_service *VAR_0, struct ip_vs_sh_state *VAR_1,
      const union nf_inet_addr *VAR_2, __be16 VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_0->af, VAR_2, VAR_3, 0);
 struct ip_vs_dest *VAR_5 = FUNC_2(VAR_1->buckets[VAR_4].dest);

 return (!VAR_5 || FUNC_1(VAR_5)) ? ((void*)0) : VAR_5;
}
