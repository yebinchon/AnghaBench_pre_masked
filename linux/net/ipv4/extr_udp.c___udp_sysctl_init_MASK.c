
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sysctl_udp_l3mdev_accept; void* sysctl_udp_wmem_min; void* sysctl_udp_rmem_min; } ;
struct net {TYPE_1__ ipv4; } ;


 void* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct net *VAR_1)
{
 VAR_1->ipv4.sysctl_udp_rmem_min = VAR_0;
 VAR_1->ipv4.sysctl_udp_wmem_min = VAR_0;




}
