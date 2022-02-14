
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cs; } ;
struct TYPE_5__ {TYPE_1__ lock; scalar_t__ use_cs; } ;
typedef TYPE_2__ pthread_mutex_t ;


 int FUNC_0 (int *) ;

int FUNC_1(pthread_mutex_t *VAR_0)
{
    if (VAR_0->use_cs)
        FUNC_0(&VAR_0->lock.cs);
    return 0;
}
