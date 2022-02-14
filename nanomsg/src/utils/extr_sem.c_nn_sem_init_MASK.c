
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_sem {scalar_t__ signaled; int cond; int mutex; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3 (struct nn_sem *VAR_0)
{
    int VAR_1;

    VAR_1 = FUNC_2 (&VAR_0->mutex, ((void*)0));
    FUNC_0 (VAR_1 == 0, VAR_1);
    VAR_1 = FUNC_1 (&VAR_0->cond, ((void*)0));
    FUNC_0 (VAR_1 == 0, VAR_1);
    VAR_0->signaled = 0;
}
