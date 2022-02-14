
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct ip_vs_service {int af; } ;
struct ip_vs_mh_state {TYPE_1__* lookup; int hash1; } ;
struct ip_vs_dest {int dummy; } ;
typedef int __be16 ;
struct TYPE_2__ {int dest; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ,union nf_inet_addr const*,int ,int *,int ) ;
 scalar_t__ FUNC_1 (struct ip_vs_dest*) ;
 struct ip_vs_dest* FUNC_2 (int ) ;

__attribute__((used)) static inline struct ip_vs_dest *
FUNC_3(struct ip_vs_service *VAR_1, struct ip_vs_mh_state *VAR_2,
      const union nf_inet_addr *VAR_3, __be16 VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_1->af, VAR_3, VAR_4, &VAR_2->hash1, 0)
          % VAR_0;
 struct ip_vs_dest *VAR_6 = FUNC_2(VAR_2->lookup[VAR_5].dest);

 return (!VAR_6 || FUNC_1(VAR_6)) ? ((void*)0) : VAR_6;
}
