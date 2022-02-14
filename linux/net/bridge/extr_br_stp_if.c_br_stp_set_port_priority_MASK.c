
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge_port {unsigned long priority; TYPE_1__* br; void* designated_port; void* port_id; int designated_bridge; int port_no; } ;
typedef void* port_id ;
struct TYPE_2__ {int bridge_id; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_bridge_port*) ;
 scalar_t__ FUNC_1 (struct net_bridge_port*) ;
 void* FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int *,int) ;

int FUNC_5(struct net_bridge_port *VAR_2, unsigned long VAR_3)
{
 port_id VAR_4;

 if (VAR_3 > VAR_0)
  return -VAR_1;

 VAR_4 = FUNC_2(VAR_3, VAR_2->port_no);
 if (FUNC_1(VAR_2))
  VAR_2->designated_port = VAR_4;

 VAR_2->port_id = VAR_4;
 VAR_2->priority = VAR_3;
 if (!FUNC_4(&VAR_2->br->bridge_id, &VAR_2->designated_bridge, 8) &&
     VAR_2->port_id < VAR_2->designated_port) {
  FUNC_0(VAR_2);
  FUNC_3(VAR_2->br);
 }

 return 0;
}
