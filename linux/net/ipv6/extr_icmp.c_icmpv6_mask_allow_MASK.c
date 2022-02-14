
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int icmpv6_ratemask; } ;
struct TYPE_4__ {TYPE_1__ sysctl; } ;
struct net {TYPE_2__ ipv6; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static bool FUNC_1(struct net *VAR_1, int VAR_2)
{
 if (VAR_2 > VAR_0)
  return 1;


 if (!FUNC_0(VAR_2, VAR_1->ipv6.sysctl.icmpv6_ratemask))
  return 1;

 return 0;
}
