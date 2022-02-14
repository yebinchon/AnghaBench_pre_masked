
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alarm_base {int (* gettime ) () ;int lock; } ;
struct alarm {size_t type; int timer; } ;


 struct alarm_base* VAR_0 ;
 int FUNC_0 (struct alarm_base*,struct alarm*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 (struct alarm*,int ) ;

int FUNC_6(struct alarm *VAR_1)
{
 struct alarm_base *VAR_2 = &VAR_0[VAR_1->type];
 unsigned long VAR_3;
 int VAR_4;

 FUNC_2(&VAR_2->lock, VAR_3);
 VAR_4 = FUNC_1(&VAR_1->timer);
 if (VAR_4 >= 0)
  FUNC_0(VAR_2, VAR_1);
 FUNC_3(&VAR_2->lock, VAR_3);

 FUNC_5(VAR_1, VAR_2->gettime());
 return VAR_4;
}
