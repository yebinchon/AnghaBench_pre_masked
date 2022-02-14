
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct net_bridge {scalar_t__ stp_enabled; int lock; scalar_t__ hello_time; int hello_timer; TYPE_1__* dev; } ;
struct TYPE_2__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct net_bridge* VAR_2 ;
 int FUNC_0 (struct net_bridge*) ;
 int FUNC_1 (struct net_bridge*,char*) ;
 struct net_bridge* FUNC_2 (int ,struct timer_list*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_5)
{
 struct net_bridge *VAR_6 = FUNC_2(VAR_6, VAR_5, VAR_3);

 FUNC_1(VAR_6, "hello timer expired\n");
 FUNC_5(&VAR_6->lock);
 if (VAR_6->dev->flags & VAR_1) {
  FUNC_0(VAR_6);

  if (VAR_6->stp_enabled == VAR_0)
   FUNC_3(&VAR_6->hello_timer,
      FUNC_4(VAR_4 + VAR_6->hello_time));
 }
 FUNC_6(&VAR_6->lock);
}
