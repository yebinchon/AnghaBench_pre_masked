
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt0_hdr {struct in6_addr* addr; } ;
struct ipv6_txoptions {TYPE_1__* srcrt; } ;
struct ipv6_sr_hdr {size_t segments_left; struct in6_addr* segments; } ;
struct in6_addr {int dummy; } ;
struct flowi6 {struct in6_addr daddr; } ;
struct TYPE_2__ {int type; } ;







struct in6_addr *FUNC_0(struct flowi6 *VAR_0,
    const struct ipv6_txoptions *VAR_1,
    struct in6_addr *VAR_2)
{
 if (!VAR_1 || !VAR_1->srcrt)
  return ((void*)0);

 *VAR_2 = VAR_0->daddr;

 switch (VAR_1->srcrt->type) {
 case 130:
 case 131:
 case 129:
  VAR_0->daddr = *((struct rt0_hdr *)VAR_1->srcrt)->addr;
  break;
 case 128:
 {
  struct ipv6_sr_hdr *VAR_3 = (struct ipv6_sr_hdr *)VAR_1->srcrt;

  VAR_0->daddr = VAR_3->segments[VAR_3->segments_left];
  break;
 }
 default:
  return ((void*)0);
 }

 return VAR_2;
}
