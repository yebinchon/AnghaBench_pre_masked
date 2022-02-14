
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_fsm {int dummy; } ;
struct nn_backoff {int minivl; int maxivl; int n; int timer; } ;


 int FUNC_0 (int *,int,struct nn_fsm*) ;

void FUNC_1 (struct nn_backoff *VAR_0, int VAR_1, int VAR_2, int VAR_3,
    struct nn_fsm *VAR_4)
{
    FUNC_0 (&VAR_0->timer, VAR_1, VAR_4);
    VAR_0->minivl = VAR_2;
    VAR_0->maxivl = VAR_3;
    VAR_0->n = 1;
}
