
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pthread_mutexattr_t ;
struct TYPE_3__ {int mutex; } ;
typedef TYPE_1__ nn_mutex_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5 (nn_mutex_t *VAR_1)
{
    int VAR_2;
    pthread_mutexattr_t VAR_3;

    FUNC_3(&VAR_3);
    VAR_2 = FUNC_4(&VAR_3, VAR_0);
    FUNC_0 (VAR_2 == 0, VAR_2);
    VAR_2 = FUNC_1 (&VAR_1->mutex, ((void*)0));
    FUNC_0 (VAR_2 == 0, VAR_2);
    FUNC_2(&VAR_3);
}
