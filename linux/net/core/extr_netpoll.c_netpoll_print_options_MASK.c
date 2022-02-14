
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ip; int in6; } ;
struct TYPE_3__ {int ip; int in6; } ;
struct netpoll {int * remote_mac; TYPE_2__ remote_ip; scalar_t__ ipv6; int * remote_port; int * dev_name; TYPE_1__ local_ip; int * local_port; } ;


 int FUNC_0 (struct netpoll*,char*,int *) ;

void FUNC_1(struct netpoll *VAR_0)
{
 FUNC_0(VAR_0, "local port %d\n", VAR_0->local_port);
 if (VAR_0->ipv6)
  FUNC_0(VAR_0, "local IPv6 address %pI6c\n", &VAR_0->local_ip.in6);
 else
  FUNC_0(VAR_0, "local IPv4 address %pI4\n", &VAR_0->local_ip.ip);
 FUNC_0(VAR_0, "interface '%s'\n", VAR_0->dev_name);
 FUNC_0(VAR_0, "remote port %d\n", VAR_0->remote_port);
 if (VAR_0->ipv6)
  FUNC_0(VAR_0, "remote IPv6 address %pI6c\n", &VAR_0->remote_ip.in6);
 else
  FUNC_0(VAR_0, "remote IPv4 address %pI4\n", &VAR_0->remote_ip.ip);
 FUNC_0(VAR_0, "remote ethernet address %pM\n", VAR_0->remote_mac);
}
