
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct net_bridge {int lock; scalar_t__ bridge_hello_time; int tcn_timer; TYPE_1__* dev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 struct net_bridge* VAR_1 ;
 int FUNC_0 (struct net_bridge*,char*) ;
 int FUNC_1 (struct net_bridge*) ;
 int FUNC_2 (struct net_bridge*) ;
 struct net_bridge* FUNC_3 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_4)
{
 struct net_bridge *VAR_5 = FUNC_3(VAR_5, VAR_4, VAR_3);

 FUNC_0(VAR_5, "tcn timer expired\n");
 FUNC_5(&VAR_5->lock);
 if (!FUNC_1(VAR_5) && (VAR_5->dev->flags & VAR_0)) {
  FUNC_2(VAR_5);

  FUNC_4(&VAR_5->tcn_timer, VAR_2 + VAR_5->bridge_hello_time);
 }
 FUNC_6(&VAR_5->lock);
}
