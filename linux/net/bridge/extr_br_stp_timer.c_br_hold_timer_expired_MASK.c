
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct net_bridge_port {TYPE_2__* br; scalar_t__ config_pending; TYPE_1__* dev; scalar_t__ port_no; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (TYPE_2__*,char*,unsigned int,int ) ;
 int FUNC_1 (struct net_bridge_port*) ;
 struct net_bridge_port* FUNC_2 (int ,struct timer_list*,int ) ;
 int VAR_0 ;
 struct net_bridge_port* VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_2)
{
 struct net_bridge_port *VAR_3 = FUNC_2(VAR_3, VAR_2, VAR_0);

 FUNC_0(VAR_3->br, "port %u(%s) hold timer expired\n",
   (unsigned int) VAR_3->port_no, VAR_3->dev->name);

 FUNC_3(&VAR_3->br->lock);
 if (VAR_3->config_pending)
  FUNC_1(VAR_3);
 FUNC_4(&VAR_3->br->lock);
}
