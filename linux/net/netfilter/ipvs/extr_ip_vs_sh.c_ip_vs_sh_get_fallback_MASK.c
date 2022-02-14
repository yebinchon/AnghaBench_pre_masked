
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct ip_vs_sh_state {TYPE_1__* buckets; } ;
struct ip_vs_service {int af; } ;
struct ip_vs_dest {int port; int addr; int af; } ;
typedef int __be16 ;
struct TYPE_2__ {int dest; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,char*,int ,int ,...) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_2 (int ,union nf_inet_addr const*,int ,unsigned int) ;
 int FUNC_3 (struct ip_vs_dest*) ;
 int FUNC_4 (int ) ;
 struct ip_vs_dest* FUNC_5 (int ) ;

__attribute__((used)) static inline struct ip_vs_dest *
FUNC_6(struct ip_vs_service *VAR_1, struct ip_vs_sh_state *VAR_2,
        const union nf_inet_addr *VAR_3, __be16 VAR_4)
{
 unsigned int VAR_5, VAR_6;
 unsigned int VAR_7, VAR_8;
 struct ip_vs_dest *VAR_9;


 VAR_8 = FUNC_2(VAR_1->af, VAR_3, VAR_4, 0);
 VAR_9 = FUNC_5(VAR_2->buckets[VAR_8].dest);
 if (!VAR_9)
  return ((void*)0);
 if (!FUNC_3(VAR_9))
  return VAR_9;

 FUNC_1(6, "SH: selected unavailable server %s:%d, reselecting",
        FUNC_0(VAR_9->af, &VAR_9->addr), FUNC_4(VAR_9->port));




 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_6 = (VAR_5 + VAR_8) % VAR_0;
  VAR_7 = FUNC_2(VAR_1->af, VAR_3, VAR_4, VAR_6);
  VAR_9 = FUNC_5(VAR_2->buckets[VAR_7].dest);
  if (!VAR_9)
   break;
  if (!FUNC_3(VAR_9))
   return VAR_9;
  FUNC_1(6, "SH: selected unavailable "
         "server %s:%d (offset %d), reselecting",
         FUNC_0(VAR_9->af, &VAR_9->addr),
         FUNC_4(VAR_9->port), VAR_6);
 }

 return ((void*)0);
}
