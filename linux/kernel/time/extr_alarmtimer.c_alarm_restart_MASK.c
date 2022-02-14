
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct alarm_base {int lock; } ;
struct TYPE_2__ {int expires; } ;
struct alarm {size_t type; int timer; TYPE_1__ node; } ;


 struct alarm_base* VAR_0 ;
 int FUNC_0 (struct alarm_base*,struct alarm*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct alarm *VAR_1)
{
 struct alarm_base *VAR_2 = &VAR_0[VAR_1->type];
 unsigned long VAR_3;

 FUNC_3(&VAR_2->lock, VAR_3);
 FUNC_2(&VAR_1->timer, VAR_1->node.expires);
 FUNC_1(&VAR_1->timer);
 FUNC_0(VAR_2, VAR_1);
 FUNC_4(&VAR_2->lock, VAR_3);
}
