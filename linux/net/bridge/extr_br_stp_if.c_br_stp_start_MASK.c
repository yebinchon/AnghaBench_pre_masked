
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge {scalar_t__ bridge_forward_delay; int lock; scalar_t__ hello_time; int hello_timer; TYPE_1__* dev; int stp_enabled; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_bridge*,scalar_t__) ;
 int FUNC_1 (struct net_bridge*,char*) ;
 int FUNC_2 (struct net_bridge*,char*,int) ;
 int FUNC_3 (struct net_bridge*) ;
 int FUNC_4 (struct net_bridge*,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct net_bridge *VAR_8)
{
 int VAR_9 = -VAR_4;

 if (FUNC_7(FUNC_5(VAR_8->dev), &VAR_6))
  VAR_9 = FUNC_4(VAR_8, "start");

 if (VAR_9 && VAR_9 != -VAR_4)
  FUNC_2(VAR_8, "failed to start userspace STP (%d)\n", VAR_9);

 FUNC_8(&VAR_8->lock);

 if (VAR_8->bridge_forward_delay < VAR_2)
  FUNC_0(VAR_8, VAR_2);
 else if (VAR_8->bridge_forward_delay > VAR_1)
  FUNC_0(VAR_8, VAR_1);

 if (!VAR_9) {
  VAR_8->stp_enabled = VAR_3;
  FUNC_1(VAR_8, "userspace STP started\n");
 } else {
  VAR_8->stp_enabled = VAR_0;
  FUNC_1(VAR_8, "using kernel STP\n");


  if (VAR_8->dev->flags & VAR_5)
   FUNC_6(&VAR_8->hello_timer, VAR_7 + VAR_8->hello_time);
  FUNC_3(VAR_8);
 }

 FUNC_9(&VAR_8->lock);
}
