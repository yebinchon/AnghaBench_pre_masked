
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enabled; int timer; } ;
struct ncsi_channel {TYPE_1__ monitor; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct ncsi_channel *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->lock, VAR_1);
 if (!VAR_0->monitor.enabled) {
  FUNC_2(&VAR_0->lock, VAR_1);
  return;
 }
 VAR_0->monitor.enabled = 0;
 FUNC_2(&VAR_0->lock, VAR_1);

 FUNC_0(&VAR_0->monitor.timer);
}
