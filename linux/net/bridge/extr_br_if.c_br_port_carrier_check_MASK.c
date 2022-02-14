
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net_bridge_port {int flags; scalar_t__ state; int path_cost; struct net_bridge* br; struct net_device* dev; } ;
struct net_bridge {int lock; struct net_device* dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_bridge_port*) ;
 int FUNC_1 (struct net_bridge_port*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct net_bridge_port *VAR_2, bool *VAR_3)
{
 struct net_device *VAR_4 = VAR_2->dev;
 struct net_bridge *VAR_5 = VAR_2->br;

 if (!(VAR_2->flags & VAR_0) &&
     FUNC_3(VAR_4) && FUNC_2(VAR_4))
  VAR_2->path_cost = FUNC_4(VAR_4);

 *VAR_3 = 0;
 if (!FUNC_3(VAR_5->dev))
  return;

 FUNC_5(&VAR_5->lock);
 if (FUNC_3(VAR_4) && FUNC_2(VAR_4)) {
  if (VAR_2->state == VAR_1) {
   FUNC_1(VAR_2);
   *VAR_3 = 1;
  }
 } else {
  if (VAR_2->state != VAR_1) {
   FUNC_0(VAR_2);
   *VAR_3 = 1;
  }
 }
 FUNC_6(&VAR_5->lock);
}
