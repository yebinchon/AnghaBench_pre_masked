
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mq_detached; int mq_mutex; TYPE_2__* mq_sender; TYPE_2__* mq_receiver; } ;
typedef TYPE_1__ shm_mq ;
struct TYPE_6__ {int procLatch; } ;
typedef TYPE_2__ PGPROC ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(shm_mq *VAR_1)
{
 PGPROC *VAR_2;

 FUNC_2(&VAR_1->mq_mutex);
 if (VAR_1->mq_sender == VAR_0)
  VAR_2 = VAR_1->mq_receiver;
 else
 {
  FUNC_0(VAR_1->mq_receiver == VAR_0);
  VAR_2 = VAR_1->mq_sender;
 }
 VAR_1->mq_detached = 1;
 FUNC_3(&VAR_1->mq_mutex);

 if (VAR_2 != ((void*)0))
  FUNC_1(&VAR_2->procLatch);
}
