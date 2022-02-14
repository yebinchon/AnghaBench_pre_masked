
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_sem {int mutex; scalar_t__ signaled; int cond; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6 (struct nn_sem *VAR_1)
{
    int VAR_2;






    VAR_2 = FUNC_4 (&VAR_1->mutex);
    FUNC_0 (VAR_2 == 0, VAR_2);
    if (FUNC_1 (VAR_1->signaled)) {
        VAR_2 = FUNC_5 (&VAR_1->mutex);
        FUNC_0 (VAR_2 == 0, VAR_2);
        return 0;
    }
    VAR_2 = FUNC_3 (&VAR_1->cond, &VAR_1->mutex);
    FUNC_0 (VAR_2 == 0, VAR_2);
    if (FUNC_2 (!VAR_1->signaled)) {
        VAR_2 = FUNC_5 (&VAR_1->mutex);
        FUNC_0 (VAR_2 == 0, VAR_2);
        return -VAR_0;
    }
    VAR_1->signaled = 0;
    VAR_2 = FUNC_5 (&VAR_1->mutex);
    FUNC_0 (VAR_2 == 0, VAR_2);

    return 0;
}
