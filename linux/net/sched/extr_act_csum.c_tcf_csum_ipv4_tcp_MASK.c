
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {scalar_t__ check; } ;
struct sk_buff {int ip_summed; int csum; } ;
struct iphdr {int daddr; int saddr; } ;
struct TYPE_2__ {int gso_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tcphdr*,unsigned int,int ) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 struct tcphdr* FUNC_4 (struct sk_buff*,unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_5 (unsigned int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_2, unsigned int VAR_3,
        unsigned int VAR_4)
{
 struct tcphdr *VAR_5;
 const struct iphdr *VAR_6;

 if (FUNC_2(VAR_2) && FUNC_3(VAR_2)->gso_type & VAR_1)
  return 1;

 VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4, sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return 0;

 VAR_6 = FUNC_1(VAR_2);
 VAR_5->check = 0;
 VAR_2->csum = FUNC_0(VAR_5, VAR_4 - VAR_3, 0);
 VAR_5->check = FUNC_5(VAR_4 - VAR_3,
       VAR_6->saddr, VAR_6->daddr, VAR_2->csum);

 VAR_2->ip_summed = VAR_0;

 return 1;
}
