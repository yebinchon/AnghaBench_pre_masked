
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_ctx {int sync; int events; int eventsto; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2 (struct nn_ctx *VAR_0)
{
    FUNC_1 (&VAR_0->eventsto);
    FUNC_1 (&VAR_0->events);
    FUNC_0 (&VAR_0->sync);
}
