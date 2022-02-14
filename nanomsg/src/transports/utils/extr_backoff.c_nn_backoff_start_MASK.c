
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_backoff {int n; int minivl; int maxivl; int timer; } ;


 int FUNC_0 (int *,int) ;

void FUNC_1 (struct nn_backoff *VAR_0)
{
     int VAR_1;



     VAR_1 = (VAR_0->n - 1) * VAR_0->minivl;
     if (VAR_1 > VAR_0->maxivl)
         VAR_1 = VAR_0->maxivl;
     else
         VAR_0->n *= 2;
     FUNC_0 (&VAR_0->timer, VAR_1);
}
