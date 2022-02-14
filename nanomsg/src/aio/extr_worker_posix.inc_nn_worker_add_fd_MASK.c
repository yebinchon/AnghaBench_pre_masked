
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_worker_fd {int hndl; } ;
struct nn_worker {int poller; } ;


 int FUNC_0 (int *,int,int *) ;

void FUNC_1 (struct nn_worker *VAR_0, int VAR_1, struct nn_worker_fd *VAR_2)
{
    FUNC_0 (&VAR_0->poller, VAR_1, &VAR_2->hndl);
}
