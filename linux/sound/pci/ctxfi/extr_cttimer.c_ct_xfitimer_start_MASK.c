
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ct_timer_instance {int running; int running_list; scalar_t__ need_update; struct ct_timer* timer_base; } ;
struct ct_timer {int lock; int running_head; int wc; } ;


 int FUNC_0 (struct ct_timer*) ;
 int FUNC_1 (struct ct_timer*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct ct_timer_instance *VAR_0)
{
 struct ct_timer *VAR_1 = VAR_0->timer_base;
 unsigned long VAR_2;

 FUNC_4(&VAR_1->lock, VAR_2);
 if (FUNC_3(&VAR_0->running_list))
  VAR_1->wc = FUNC_0(VAR_1);
 VAR_0->running = 1;
 VAR_0->need_update = 0;
 FUNC_2(&VAR_0->running_list, &VAR_1->running_head);
 FUNC_5(&VAR_1->lock, VAR_2);
 FUNC_1(VAR_1);
}
