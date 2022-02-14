
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rfkill {int registered; int node; int dev; int sync_work; int uevent_work; int poll_work; TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ poll; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int VAR_1 ;
 int FUNC_8 (struct rfkill*) ;
 int FUNC_9 (struct rfkill*,int ) ;

void FUNC_10(struct rfkill *VAR_2)
{
 FUNC_0(!VAR_2);

 if (VAR_2->ops->poll)
  FUNC_1(&VAR_2->poll_work);

 FUNC_2(&VAR_2->uevent_work);
 FUNC_2(&VAR_2->sync_work);

 VAR_2->registered = 0;

 FUNC_3(&VAR_2->dev);

 FUNC_5(&VAR_1);
 FUNC_9(VAR_2, VAR_0);
 FUNC_4(&VAR_2->node);
 FUNC_7();
 FUNC_6(&VAR_1);

 FUNC_8(VAR_2);
}
