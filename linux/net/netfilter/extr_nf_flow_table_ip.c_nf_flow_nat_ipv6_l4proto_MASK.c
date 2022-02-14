
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ipv6hdr {int nexthdr; } ;
struct in6_addr {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,unsigned int,struct in6_addr*,struct in6_addr*) ;
 int FUNC_1 (struct sk_buff*,unsigned int,struct in6_addr*,struct in6_addr*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, struct ipv6hdr *VAR_2,
        unsigned int VAR_3, struct in6_addr *VAR_4,
        struct in6_addr *VAR_5)
{
 switch (VAR_2->nexthdr) {
 case 129:
  if (FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5) < 0)
   return VAR_0;
  break;
 case 128:
  if (FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5) < 0)
   return VAR_0;
  break;
 }

 return 0;
}
