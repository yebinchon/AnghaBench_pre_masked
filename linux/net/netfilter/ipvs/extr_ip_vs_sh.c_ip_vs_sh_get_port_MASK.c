
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ip_vs_iphdr {int protocol; int len; } ;
typedef int _ports ;
typedef int __be16 ;





 int FUNC_0 (struct ip_vs_iphdr*) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (struct sk_buff const*,int ,int,int **) ;
 int FUNC_3 (int) ;

__attribute__((used)) static inline __be16
FUNC_4(const struct sk_buff *VAR_0, struct ip_vs_iphdr *VAR_1)
{
 __be16 VAR_2[2], *VAR_3;






 switch (VAR_1->protocol) {
 case 129:
 case 128:
 case 130:
  VAR_3 = FUNC_2(VAR_0, VAR_1->len, sizeof(VAR_2),
        &VAR_2);
  if (FUNC_3(!VAR_3))
   return 0;

  if (FUNC_1(!FUNC_0(VAR_1)))
   return VAR_3[0];
  else
   return VAR_3[1];
 default:
  return 0;
 }
}
