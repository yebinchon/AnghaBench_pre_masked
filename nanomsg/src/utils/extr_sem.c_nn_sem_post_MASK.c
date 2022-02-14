
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_sem {int signaled; int mutex; int cond; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5 (struct nn_sem *VAR_0)
{
    int VAR_1;

    VAR_1 = FUNC_3 (&VAR_0->mutex);
    FUNC_0 (VAR_1 == 0, VAR_1);
    FUNC_1 (VAR_0->signaled == 0);
    VAR_0->signaled = 1;
    VAR_1 = FUNC_2 (&VAR_0->cond);
    FUNC_0 (VAR_1 == 0, VAR_1);
    VAR_1 = FUNC_4 (&VAR_0->mutex);
    FUNC_0 (VAR_1 == 0, VAR_1);
}
