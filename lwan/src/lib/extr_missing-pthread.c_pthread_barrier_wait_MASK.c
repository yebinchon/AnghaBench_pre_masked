
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ in; scalar_t__ count; int mutex; int cond; } ;
typedef TYPE_1__ pthread_barrier_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(pthread_barrier_t *VAR_1)
{
    FUNC_2(&VAR_1->mutex);

    VAR_1->in++;
    if (VAR_1->in >= VAR_1->count) {
        VAR_1->in = 0;
        FUNC_0(&VAR_1->cond);
        FUNC_3(&VAR_1->mutex);

        return VAR_0;
    }

    FUNC_1(&VAR_1->cond, &VAR_1->mutex);
    FUNC_3(&VAR_1->mutex);

    return 0;
}
