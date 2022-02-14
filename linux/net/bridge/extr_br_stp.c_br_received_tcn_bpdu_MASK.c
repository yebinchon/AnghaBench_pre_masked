
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge_port {int br; TYPE_1__* dev; scalar_t__ port_no; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int ,char*,unsigned int,int ) ;
 scalar_t__ FUNC_1 (struct net_bridge_port*) ;
 int FUNC_2 (struct net_bridge_port*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct net_bridge_port *VAR_0)
{
 if (FUNC_1(VAR_0)) {
  FUNC_0(VAR_0->br, "port %u(%s) received tcn bpdu\n",
   (unsigned int) VAR_0->port_no, VAR_0->dev->name);

  FUNC_3(VAR_0->br);
  FUNC_2(VAR_0);
 }
}
