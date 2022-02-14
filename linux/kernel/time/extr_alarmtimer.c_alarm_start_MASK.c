
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct alarm_base {int (* gettime ) () ;int lock; } ;
struct TYPE_2__ {int expires; } ;
struct alarm {size_t type; TYPE_1__ node; int timer; } ;
typedef int ktime_t ;


 int VAR_0 ;
 struct alarm_base* VAR_1 ;
 int FUNC_0 (struct alarm_base*,struct alarm*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 (struct alarm*,int ) ;

void FUNC_6(struct alarm *VAR_2, ktime_t VAR_3)
{
 struct alarm_base *VAR_4 = &VAR_1[VAR_2->type];
 unsigned long VAR_5;

 FUNC_2(&VAR_4->lock, VAR_5);
 VAR_2->node.expires = VAR_3;
 FUNC_0(VAR_4, VAR_2);
 FUNC_1(&VAR_2->timer, VAR_2->node.expires, VAR_0);
 FUNC_3(&VAR_4->lock, VAR_5);

 FUNC_5(VAR_2, VAR_4->gettime());
}
