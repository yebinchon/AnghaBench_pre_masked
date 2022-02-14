
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_5__ {int mutex; } ;
typedef TYPE_1__ nn_mutex_t ;
struct TYPE_6__ {int cv; } ;
typedef TYPE_2__ nn_condvar_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (int *,int *,struct timespec*) ;
 int FUNC_3 (int *,int *) ;

int FUNC_4 (nn_condvar_t *VAR_1, nn_mutex_t *VAR_2, int VAR_3)
{
    int VAR_4;
    struct timeval VAR_5;
    struct timespec VAR_6;

    if (VAR_3 < 0) {


        (void) FUNC_3 (&VAR_1->cv, &VAR_2->mutex);
        return (0);
    }

    VAR_4 = FUNC_1(&VAR_5, ((void*)0));
    FUNC_0 (VAR_4 == 0, VAR_4);



    VAR_5.tv_sec += VAR_3 / 1000;
    VAR_5.tv_usec += (VAR_3 % 1000) * 1000;

    VAR_6.tv_sec = VAR_5.tv_sec + (VAR_5.tv_usec / 1000000);
    VAR_6.tv_nsec = (VAR_5.tv_usec % 1000000) * 1000;

    VAR_4 = FUNC_2 (&VAR_1->cv, &VAR_2->mutex, &VAR_6);
    if (VAR_4 == VAR_0)
        return (-VAR_0);

    return (0);
}
