
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alarm_base {int timerqueue; } ;
struct alarm {int state; int node; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct alarm_base *VAR_1, struct alarm *VAR_2)
{
 if (VAR_2->state & VAR_0)
  FUNC_1(&VAR_1->timerqueue, &VAR_2->node);

 FUNC_0(&VAR_1->timerqueue, &VAR_2->node);
 VAR_2->state |= VAR_0;
}
