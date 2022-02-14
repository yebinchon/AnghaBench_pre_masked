
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct net_bridge_port {scalar_t__ state; int forward_delay_timer; TYPE_1__* dev; scalar_t__ port_no; struct net_bridge* br; } ;
struct net_bridge {int lock; int dev; scalar_t__ forward_delay; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_bridge*,char*,unsigned int,int ) ;
 int FUNC_1 (int ,int *,struct net_bridge_port*) ;
 scalar_t__ FUNC_2 (struct net_bridge*) ;
 int FUNC_3 (struct net_bridge_port*,scalar_t__) ;
 int FUNC_4 (struct net_bridge*) ;
 int VAR_4 ;
 struct net_bridge_port* FUNC_5 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int ) ;
 struct net_bridge_port* VAR_6 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct timer_list *VAR_7)
{
 struct net_bridge_port *VAR_8 = FUNC_5(VAR_8, VAR_7, VAR_4);
 struct net_bridge *VAR_9 = VAR_8->br;

 FUNC_0(VAR_9, "port %u(%s) forward delay timer\n",
   (unsigned int) VAR_8->port_no, VAR_8->dev->name);
 FUNC_10(&VAR_9->lock);
 if (VAR_8->state == VAR_2) {
  FUNC_3(VAR_8, VAR_1);
  FUNC_6(&VAR_8->forward_delay_timer,
     VAR_5 + VAR_9->forward_delay);
 } else if (VAR_8->state == VAR_1) {
  FUNC_3(VAR_8, VAR_0);
  if (FUNC_2(VAR_9))
   FUNC_4(VAR_9);
  FUNC_7(VAR_9->dev);
 }
 FUNC_8();
 FUNC_1(VAR_3, ((void*)0), VAR_8);
 FUNC_9();
 FUNC_11(&VAR_9->lock);
}
