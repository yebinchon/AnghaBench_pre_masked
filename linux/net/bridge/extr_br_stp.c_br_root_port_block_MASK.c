
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge_port {int forward_delay_timer; TYPE_1__* dev; scalar_t__ port_no; } ;
struct net_bridge {scalar_t__ forward_delay; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,struct net_bridge_port*) ;
 int FUNC_1 (struct net_bridge const*,char*,unsigned int,int ) ;
 int FUNC_2 (struct net_bridge_port*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_4(const struct net_bridge *VAR_3,
          struct net_bridge_port *VAR_4)
{

 FUNC_1(VAR_3, "port %u(%s) tried to become root port (blocked)",
    (unsigned int) VAR_4->port_no, VAR_4->dev->name);

 FUNC_2(VAR_4, VAR_0);
 FUNC_0(VAR_1, ((void*)0), VAR_4);

 if (VAR_3->forward_delay > 0)
  FUNC_3(&VAR_4->forward_delay_timer, VAR_2 + VAR_3->forward_delay);
}
