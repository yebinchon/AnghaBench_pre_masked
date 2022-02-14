
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ethhdr {int h_proto; } ;
typedef int __be16 ;


 struct ethhdr* FUNC_0 (struct sk_buff const*) ;

__be16 FUNC_1(const struct sk_buff *VAR_0)
{
 const struct ethhdr *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->h_proto;
}
