
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mq_mutex; int * mq_receiver; } ;
typedef TYPE_1__ shm_mq ;
typedef int PGPROC ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

PGPROC *
FUNC_2(shm_mq *VAR_0)
{
 PGPROC *VAR_1;

 FUNC_0(&VAR_0->mq_mutex);
 VAR_1 = VAR_0->mq_receiver;
 FUNC_1(&VAR_0->mq_mutex);

 return VAR_1;
}
