
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* mq_sender; int mq_bytes_read; } ;
typedef TYPE_1__ shm_mq ;
struct TYPE_5__ {int procLatch; } ;
typedef scalar_t__ Size ;
typedef TYPE_2__ PGPROC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(shm_mq *VAR_0, Size VAR_1)
{
 PGPROC *VAR_2;
 FUNC_4();





 FUNC_3(&VAR_0->mq_bytes_read,
      FUNC_2(&VAR_0->mq_bytes_read) + VAR_1);





 VAR_2 = VAR_0->mq_sender;
 FUNC_0(VAR_2 != ((void*)0));
 FUNC_1(&VAR_2->procLatch);
}
