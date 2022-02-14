
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {int dummy; } ;
typedef int __u32 ;
typedef int __u16 ;


 int FUNC_0 (struct ipv6hdr const*,struct tcphdr const*,int *) ;
 struct ipv6hdr* FUNC_1 (struct sk_buff const*) ;
 struct tcphdr* FUNC_2 (struct sk_buff const*) ;

__u32 FUNC_3(const struct sk_buff *VAR_0, __u16 *VAR_1)
{
 const struct ipv6hdr *VAR_2 = FUNC_1(VAR_0);
 const struct tcphdr *VAR_3 = FUNC_2(VAR_0);

 return FUNC_0(VAR_2, VAR_3, VAR_1);
}
