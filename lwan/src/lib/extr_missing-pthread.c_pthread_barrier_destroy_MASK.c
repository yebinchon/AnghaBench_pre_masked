
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ in; int cond; int mutex; } ;
typedef TYPE_1__ pthread_barrier_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(pthread_barrier_t *VAR_0)
{
    FUNC_1(&VAR_0->mutex);
    FUNC_0(&VAR_0->cond);
    VAR_0->in = 0;

    return 0;
}
