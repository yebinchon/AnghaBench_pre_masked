
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcphdr {int seq; int dest; int source; } ;
struct ipv6hdr {int daddr; int saddr; } ;
typedef scalar_t__ __u16 ;


 int FUNC_0 (scalar_t__ const*) ;
 scalar_t__ const* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int ,int ,int ,int) ;

u32 FUNC_3(const struct ipv6hdr *VAR_1,
         const struct tcphdr *VAR_2, __u16 *VAR_3)
{
 int VAR_4;
 const __u16 VAR_5 = *VAR_3;

 for (VAR_4 = FUNC_0(VAR_0) - 1; VAR_4 ; VAR_4--)
  if (VAR_5 >= VAR_0[VAR_4])
   break;

 *VAR_3 = VAR_0[VAR_4];

 return FUNC_2(&VAR_1->saddr, &VAR_1->daddr, VAR_2->source,
         VAR_2->dest, FUNC_1(VAR_2->seq), VAR_4);
}
