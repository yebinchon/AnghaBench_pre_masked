
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rfkill {int polling_paused; int poll_work; scalar_t__ suspended; TYPE_1__* ops; } ;
struct TYPE_2__ {int poll; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_0 ;

void FUNC_2(struct rfkill *VAR_1)
{
 FUNC_0(!VAR_1);

 if (!VAR_1->ops->poll)
  return;

 VAR_1->polling_paused = 0;

 if (VAR_1->suspended)
  return;

 FUNC_1(VAR_0,
      &VAR_1->poll_work, 0);
}
