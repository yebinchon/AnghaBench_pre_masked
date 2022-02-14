
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_queue {scalar_t__ event; int timers; scalar_t__ quit; } ;
struct queue_timer {scalar_t__ runcount; int destroy; scalar_t__ event; int entry; struct timer_queue* q; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int ,int ,struct queue_timer*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct queue_timer *VAR_0)
{



    struct timer_queue *VAR_1 = VAR_0->q;

    FUNC_3(VAR_0->runcount == 0);
    FUNC_3(VAR_0->destroy);

    FUNC_5(&VAR_0->entry);
    if (VAR_0->event)
        FUNC_0(VAR_0->event, ((void*)0));
    FUNC_1(FUNC_2(), 0, VAR_0);

    if (VAR_1->quit && FUNC_4(&VAR_1->timers))
        FUNC_0(VAR_1->event, ((void*)0));
}
