
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {scalar_t__ check; } ;
struct sk_buff {int ip_summed; int csum; } ;
struct ipv6hdr {int daddr; int saddr; } ;
struct TYPE_2__ {int gso_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,unsigned int,int ,int ) ;
 int FUNC_1 (struct tcphdr*,unsigned int,int ) ;
 struct ipv6hdr* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 struct tcphdr* FUNC_5 (struct sk_buff*,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_3, unsigned int VAR_4,
        unsigned int VAR_5)
{
 struct tcphdr *VAR_6;
 const struct ipv6hdr *VAR_7;

 if (FUNC_3(VAR_3) && FUNC_4(VAR_3)->gso_type & VAR_2)
  return 1;

 VAR_6 = FUNC_5(VAR_3, VAR_4, VAR_5, sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  return 0;

 VAR_7 = FUNC_2(VAR_3);
 VAR_6->check = 0;
 VAR_3->csum = FUNC_1(VAR_6, VAR_5 - VAR_4, 0);
 VAR_6->check = FUNC_0(&VAR_7->saddr, &VAR_7->daddr,
          VAR_5 - VAR_4, VAR_1,
          VAR_3->csum);

 VAR_3->ip_summed = VAR_0;

 return 1;
}
