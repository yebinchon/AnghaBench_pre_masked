
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_worker_task {int item; } ;
struct nn_worker {int sync; int efd; int tasks; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4 (struct nn_worker *VAR_0, struct nn_worker_task *VAR_1)
{
    FUNC_1 (&VAR_0->sync);
    FUNC_3 (&VAR_0->tasks, &VAR_1->item);
    FUNC_0 (&VAR_0->efd);
    FUNC_2 (&VAR_0->sync);
}
