
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pthread_mutexattr_t ;
struct TYPE_4__ {int srw; int cs; } ;
struct TYPE_5__ {int use_cs; TYPE_1__ lock; } ;
typedef TYPE_2__ pthread_mutex_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int const VAR_0 ;

int FUNC_2(pthread_mutex_t *restrict VAR_1,
                       const pthread_mutexattr_t *restrict VAR_2)
{
    VAR_1->use_cs = VAR_2 && (*VAR_2 & VAR_0);
    if (VAR_1->use_cs) {
        FUNC_0(&VAR_1->lock.cs);
    } else {
        FUNC_1(&VAR_1->lock.srw);
    }
    return 0;
}
