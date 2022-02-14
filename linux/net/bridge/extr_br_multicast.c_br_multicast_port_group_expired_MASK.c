
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct net_bridge_port_group {int flags; int mglist; int timer; TYPE_1__* port; } ;
struct net_bridge {int multicast_lock; int dev; } ;
struct TYPE_2__ {struct net_bridge* br; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_bridge*,struct net_bridge_port_group*) ;
 struct net_bridge_port_group* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct net_bridge_port_group* VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_3)
{
 struct net_bridge_port_group *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);
 struct net_bridge *VAR_5 = VAR_4->port->br;

 FUNC_4(&VAR_5->multicast_lock);
 if (!FUNC_3(VAR_5->dev) || FUNC_6(&VAR_4->timer) ||
     FUNC_2(&VAR_4->mglist) || VAR_4->flags & VAR_0)
  goto out;

 FUNC_0(VAR_5, VAR_4);

out:
 FUNC_5(&VAR_5->multicast_lock);
}
