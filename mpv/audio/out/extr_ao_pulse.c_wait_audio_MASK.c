
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int wakeup_lock; scalar_t__ wakeup_status; int wakeup; } ;
struct ao {struct priv* priv; } ;
typedef int pthread_mutex_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ao *VAR_0, pthread_mutex_t *VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;


    FUNC_2(VAR_1);
    FUNC_1(&VAR_2->wakeup_lock);
    while (!VAR_2->wakeup_status)
        FUNC_0(&VAR_2->wakeup, &VAR_2->wakeup_lock);
    VAR_2->wakeup_status = 0;
    FUNC_2(&VAR_2->wakeup_lock);
    FUNC_1(VAR_1);
    return 0;
}
