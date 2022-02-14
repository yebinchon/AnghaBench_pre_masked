
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_worker {int thread; int timerset; int efd_hndl; int poller; int efd; int stop; int tasks; int sync; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,struct nn_worker*) ;
 int FUNC_9 (int *) ;
 int VAR_0 ;

int FUNC_10 (struct nn_worker *VAR_1)
{
    int VAR_2;

    VAR_2 = FUNC_1 (&VAR_1->efd);
    if (VAR_2 < 0)
        return VAR_2;

    FUNC_2 (&VAR_1->sync);
    FUNC_6 (&VAR_1->tasks);
    FUNC_7 (&VAR_1->stop);
    FUNC_4 (&VAR_1->poller);
    FUNC_3 (&VAR_1->poller, FUNC_0 (&VAR_1->efd), &VAR_1->efd_hndl);
    FUNC_5 (&VAR_1->poller, &VAR_1->efd_hndl);
    FUNC_9 (&VAR_1->timerset);
    FUNC_8 (&VAR_1->thread, VAR_0, VAR_1);

    return 0;
}
