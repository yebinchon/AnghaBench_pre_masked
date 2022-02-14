
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ csum_not_inet; int ip_summed; } ;
struct sctphdr {int checksum; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 struct sctphdr* FUNC_4 (struct sk_buff*,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3)
{
 struct sctphdr *VAR_4;

 if (FUNC_1(VAR_1) && FUNC_2(VAR_1))
  return 1;

 VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3, sizeof(*VAR_4));
 if (!VAR_4)
  return 0;

 VAR_4->checksum = FUNC_0(VAR_1,
          FUNC_3(VAR_1) + VAR_2);
 VAR_1->ip_summed = VAR_0;
 VAR_1->csum_not_inet = 0;

 return 1;
}
