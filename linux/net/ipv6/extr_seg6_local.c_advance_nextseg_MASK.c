
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6_sr_hdr {int segments_left; struct in6_addr* segments; } ;
struct in6_addr {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct ipv6_sr_hdr *VAR_0, struct in6_addr *VAR_1)
{
 struct in6_addr *VAR_2;

 VAR_0->segments_left--;
 VAR_2 = VAR_0->segments + VAR_0->segments_left;
 *VAR_1 = *VAR_2;
}
