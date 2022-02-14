
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int dest; int source; int seq; } ;
struct ipv6hdr {int daddr; int saddr; } ;
typedef size_t __u32 ;


 size_t FUNC_0 (int*) ;
 size_t FUNC_1 (size_t,int *,int *,int ,int ,size_t) ;
 int* VAR_0 ;
 size_t FUNC_2 (int ) ;

int FUNC_3(const struct ipv6hdr *VAR_1, const struct tcphdr *VAR_2,
        __u32 VAR_3)
{
 __u32 VAR_4 = FUNC_2(VAR_2->seq) - 1;
 __u32 VAR_5 = FUNC_1(VAR_3, &VAR_1->saddr, &VAR_1->daddr,
         VAR_2->source, VAR_2->dest, VAR_4);

 return VAR_5 < FUNC_0(VAR_0) ? VAR_0[VAR_5] : 0;
}
