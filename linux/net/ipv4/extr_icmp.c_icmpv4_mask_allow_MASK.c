
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sysctl_icmp_ratemask; } ;
struct net {TYPE_1__ ipv4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct net *VAR_3, int VAR_4, int VAR_5)
{
 if (VAR_4 > VAR_2)
  return 1;


 if (VAR_4 == VAR_0 && VAR_5 == VAR_1)
  return 1;


 if (!((1 << VAR_4) & VAR_3->ipv4.sysctl_icmp_ratemask))
  return 1;

 return 0;
}
