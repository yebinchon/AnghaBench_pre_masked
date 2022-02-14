
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pthread_barrierattr_t ;
struct TYPE_3__ {unsigned int count; int mutex; int cond; scalar_t__ in; } ;
typedef TYPE_1__ pthread_barrier_t ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;

int
FUNC_3(pthread_barrier_t *restrict VAR_0,
        const pthread_barrierattr_t *restrict VAR_1 __attribute__((unused)),
        unsigned int VAR_2) {
    if (VAR_2 == 0) {
        return -1;
    }

    VAR_0->count = VAR_2;
    VAR_0->in = 0;

    if (FUNC_2(&VAR_0->mutex, ((void*)0)) < 0)
        return -1;

    if (FUNC_0(&VAR_0->cond, ((void*)0)) < 0) {
        FUNC_1(&VAR_0->mutex);
        return -1;
    }

    return 0;
}
