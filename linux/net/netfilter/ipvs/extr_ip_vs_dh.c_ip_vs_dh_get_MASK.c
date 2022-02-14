
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct ip_vs_dh_state {TYPE_1__* buckets; } ;
struct ip_vs_dest {int dummy; } ;
struct TYPE_2__ {int dest; } ;


 size_t FUNC_0 (int,union nf_inet_addr const*) ;
 struct ip_vs_dest* FUNC_1 (int ) ;

__attribute__((used)) static inline struct ip_vs_dest *
FUNC_2(int VAR_0, struct ip_vs_dh_state *VAR_1, const union nf_inet_addr *VAR_2)
{
 return FUNC_1(VAR_1->buckets[FUNC_0(VAR_0, VAR_2)].dest);
}
