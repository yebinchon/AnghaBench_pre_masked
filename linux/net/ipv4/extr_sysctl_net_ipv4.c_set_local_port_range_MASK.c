
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int warned; int* range; int lock; } ;
struct TYPE_4__ {TYPE_1__ ip_local_ports; } ;
struct net {TYPE_2__ ipv4; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net *VAR_0, int VAR_1[2])
{
 bool VAR_2 = !((VAR_1[0] ^ VAR_1[1]) & 1);

 FUNC_1(&VAR_0->ipv4.ip_local_ports.lock);
 if (VAR_2 && !VAR_0->ipv4.ip_local_ports.warned) {
  VAR_0->ipv4.ip_local_ports.warned = 1;
  FUNC_0("ip_local_port_range: prefer different parity for start/end values.\n");
 }
 VAR_0->ipv4.ip_local_ports.range[0] = VAR_1[0];
 VAR_0->ipv4.ip_local_ports.range[1] = VAR_1[1];
 FUNC_2(&VAR_0->ipv4.ip_local_ports.lock);
}
