
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ct_timer_instance {int lock; int timer; scalar_t__ running; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ct_timer_instance *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->lock, VAR_1);
 VAR_0->running = 0;
 FUNC_0(&VAR_0->timer);
 FUNC_2(&VAR_0->lock, VAR_1);
}
