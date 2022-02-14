
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_worker {int sync; int tasks; int stop; int efd; int poller; int timerset; int thread; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11 (struct nn_worker *VAR_0)
{

    FUNC_2 (&VAR_0->sync);
    FUNC_7 (&VAR_0->tasks, &VAR_0->stop);
    FUNC_0 (&VAR_0->efd);
    FUNC_4 (&VAR_0->sync);


    FUNC_9 (&VAR_0->thread);


    FUNC_10 (&VAR_0->timerset);
    FUNC_5 (&VAR_0->poller);
    FUNC_1 (&VAR_0->efd);
    FUNC_6 (&VAR_0->stop);
    FUNC_8 (&VAR_0->tasks);
    FUNC_3 (&VAR_0->sync);
}
