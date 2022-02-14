
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_4__ {int addr; int * prio; } ;
struct net_bridge_port {scalar_t__ state; TYPE_1__* dev; scalar_t__ port_no; TYPE_2__ designated_bridge; struct net_bridge* br; } ;
struct net_bridge {int lock; } ;
typedef TYPE_2__ bridge_id ;
struct TYPE_3__ {int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_bridge_port*) ;
 int FUNC_1 (struct net_bridge*) ;
 int FUNC_2 (struct net_bridge*) ;
 int FUNC_3 (struct net_bridge*,char*,unsigned int,int ,int ,int ,int *) ;
 int FUNC_4 (struct net_bridge*) ;
 int FUNC_5 (struct net_bridge*) ;
 struct net_bridge_port* FUNC_6 (int ,struct timer_list*,int ) ;
 int VAR_1 ;
 struct net_bridge_port* VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_3)
{
 struct net_bridge_port *VAR_4 = FUNC_6(VAR_4, VAR_3, VAR_1);
 struct net_bridge *VAR_5 = VAR_4->br;
 const bridge_id *VAR_6 = &VAR_4->designated_bridge;
 int VAR_7;

 if (VAR_4->state == VAR_0)
  return;

 FUNC_3(VAR_5, "port %u(%s) neighbor %.2x%.2x.%pM lost\n",
  (unsigned int) VAR_4->port_no, VAR_4->dev->name,
  VAR_6->prio[0], VAR_6->prio[1], &VAR_6->addr);






 FUNC_7(&VAR_5->lock);
 if (VAR_4->state == VAR_0)
  goto unlock;
 VAR_7 = FUNC_4(VAR_5);

 FUNC_0(VAR_4);
 FUNC_2(VAR_5);
 FUNC_5(VAR_5);
 if (FUNC_4(VAR_5) && !VAR_7)
  FUNC_1(VAR_5);
 unlock:
 FUNC_8(&VAR_5->lock);
}
