
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int ip_summed; int csum; } ;
struct igmphdr {scalar_t__ csum; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct igmphdr*,unsigned int,int ) ;
 struct igmphdr* FUNC_2 (struct sk_buff*,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1,
         unsigned int VAR_2, unsigned int VAR_3)
{
 struct igmphdr *VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3, sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  return 0;

 VAR_4->csum = 0;
 VAR_1->csum = FUNC_1(VAR_4, VAR_3 - VAR_2, 0);
 VAR_4->csum = FUNC_0(VAR_1->csum);

 VAR_1->ip_summed = VAR_0;

 return 1;
}
