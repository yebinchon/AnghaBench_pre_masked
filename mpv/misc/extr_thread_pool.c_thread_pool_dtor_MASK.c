
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_thread_pool {int terminate; int num_threads; scalar_t__ num_work; int lock; int wakeup; int * threads; } ;
typedef int pthread_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(void *VAR_0)
{
    struct mp_thread_pool *VAR_1 = VAR_0;


    FUNC_5(&VAR_1->lock);

    VAR_1->terminate = 1;
    FUNC_1(&VAR_1->wakeup);

    pthread_t *VAR_2 = VAR_1->threads;
    int VAR_3 = VAR_1->num_threads;

    VAR_1->threads = ((void*)0);
    VAR_1->num_threads = 0;

    FUNC_6(&VAR_1->lock);

    for (int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
        FUNC_3(VAR_2[VAR_4], ((void*)0));

    FUNC_0(VAR_1->num_work == 0);
    FUNC_0(VAR_1->num_threads == 0);
    FUNC_2(&VAR_1->wakeup);
    FUNC_4(&VAR_1->lock);
}
