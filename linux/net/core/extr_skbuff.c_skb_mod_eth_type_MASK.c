
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; int csum; } ;
struct ethhdr {int h_proto; } ;
typedef int diff ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_1, struct ethhdr *VAR_2,
        __be16 VAR_3)
{
 if (VAR_1->ip_summed == VAR_0) {
  __be16 VAR_4[] = { ~VAR_2->h_proto, VAR_3 };

  VAR_1->csum = FUNC_0((char *)VAR_4, sizeof(VAR_4), VAR_1->csum);
 }

 VAR_2->h_proto = VAR_3;
}
