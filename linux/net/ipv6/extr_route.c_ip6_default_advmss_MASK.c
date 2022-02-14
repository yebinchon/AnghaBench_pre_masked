
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcphdr {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {unsigned int ip6_rt_min_advmss; } ;
struct TYPE_4__ {TYPE_1__ sysctl; } ;
struct net {TYPE_2__ ipv6; } ;
struct ipv6hdr {int dummy; } ;
struct dst_entry {struct net_device* dev; } ;


 int VAR_0 ;
 struct net* FUNC_0 (struct net_device*) ;
 unsigned int FUNC_1 (struct dst_entry const*) ;

__attribute__((used)) static unsigned int FUNC_2(const struct dst_entry *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->dev;
 unsigned int VAR_3 = FUNC_1(VAR_1);
 struct net *VAR_4 = FUNC_0(VAR_2);

 VAR_3 -= sizeof(struct ipv6hdr) + sizeof(struct tcphdr);

 if (VAR_3 < VAR_4->ipv6.sysctl.ip6_rt_min_advmss)
  VAR_3 = VAR_4->ipv6.sysctl.ip6_rt_min_advmss;







 if (VAR_3 > VAR_0 - sizeof(struct tcphdr))
  VAR_3 = VAR_0;
 return VAR_3;
}
