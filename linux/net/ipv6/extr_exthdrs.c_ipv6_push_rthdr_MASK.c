
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ipv6_rt_hdr {int type; } ;
struct in6_addr {int dummy; } ;






 int FUNC_0 (struct sk_buff*,int *,struct ipv6_rt_hdr*,struct in6_addr**,struct in6_addr*) ;
 int FUNC_1 (struct sk_buff*,int *,struct ipv6_rt_hdr*,struct in6_addr**,struct in6_addr*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0, u8 *VAR_1,
       struct ipv6_rt_hdr *VAR_2,
       struct in6_addr **VAR_3, struct in6_addr *VAR_4)
{
 switch (VAR_2->type) {
 case 130:
 case 131:
 case 129:
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  break;
 case 128:
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  break;
 default:
  break;
 }
}
