
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* range; int lock; } ;
struct TYPE_4__ {TYPE_1__ ip_local_ports; } ;
struct net {TYPE_2__ ipv4; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;

void FUNC_2(struct net *VAR_0, int *VAR_1, int *VAR_2)
{
 unsigned int VAR_3;

 do {
  VAR_3 = FUNC_0(&VAR_0->ipv4.ip_local_ports.lock);

  *VAR_1 = VAR_0->ipv4.ip_local_ports.range[0];
  *VAR_2 = VAR_0->ipv4.ip_local_ports.range[1];
 } while (FUNC_1(&VAR_0->ipv4.ip_local_ports.lock, VAR_3));
}
