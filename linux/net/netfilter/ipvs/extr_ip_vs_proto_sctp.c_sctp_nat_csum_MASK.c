
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int ip_summed; } ;
struct sctphdr {int checksum; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_1, struct sctphdr *VAR_2,
     unsigned int VAR_3)
{
 VAR_2->checksum = FUNC_0(VAR_1, VAR_3);
 VAR_1->ip_summed = VAR_0;
}
