
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enabled; int timer; int state; } ;
struct ncsi_channel {TYPE_1__ monitor; int lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct ncsi_channel *VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(&VAR_3->lock, VAR_4);
 FUNC_0(VAR_3->monitor.enabled);
 VAR_3->monitor.enabled = 1;
 VAR_3->monitor.state = VAR_1;
 FUNC_3(&VAR_3->lock, VAR_4);

 FUNC_1(&VAR_3->monitor.timer, VAR_2 + VAR_0);
}
