
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_queue {int cs; } ;
struct queue_timer {scalar_t__ runcount; scalar_t__ destroy; struct timer_queue* q; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct queue_timer*) ;

__attribute__((used)) static void FUNC_4(struct queue_timer *VAR_0)
{
    struct timer_queue *VAR_1 = VAR_0->q;
    FUNC_0(&VAR_1->cs);

    FUNC_2(0 < VAR_0->runcount);
    --VAR_0->runcount;

    if (VAR_0->destroy && VAR_0->runcount == 0)
        FUNC_3(VAR_0);

    FUNC_1(&VAR_1->cs);
}
