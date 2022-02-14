
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int workers_attached; int workers_total; int mutex; int workers_ready; } ;
typedef TYPE_1__ test_shm_mq_header ;
typedef int shm_toc ;
typedef int shm_mq_handle ;
typedef int dsm_segment ;
struct TYPE_8__ {int bgw_notify_pid; } ;
struct TYPE_7__ {int procLatch; } ;
typedef TYPE_2__ PGPROC ;
typedef int Datum ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int,int **,int **) ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 int VAR_6 ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int) ;
 int * FUNC_17 (int ,int ) ;
 TYPE_1__* FUNC_18 (int *,int ,int) ;

void
FUNC_19(Datum VAR_7)
{
 dsm_segment *VAR_8;
 shm_toc *VAR_9;
 shm_mq_handle *VAR_10;
 shm_mq_handle *VAR_11;
 volatile test_shm_mq_header *VAR_12;
 int VAR_13;
 PGPROC *VAR_14;
 FUNC_15(VAR_5, VAR_6);
 FUNC_1();
 VAR_8 = FUNC_8(FUNC_2(VAR_7));
 if (VAR_8 == ((void*)0))
  FUNC_12(VAR_2,
    (FUNC_13(VAR_1),
     FUNC_14("unable to map dynamic shared memory segment")));
 VAR_9 = FUNC_17(VAR_4, FUNC_10(VAR_8));
 if (VAR_9 == ((void*)0))
  FUNC_12(VAR_2,
    (FUNC_13(VAR_1),
     FUNC_14("bad magic number in dynamic shared memory segment")));
 VAR_12 = FUNC_18(VAR_9, 0, 0);
 FUNC_4(&VAR_12->mutex);
 VAR_13 = ++VAR_12->workers_attached;
 FUNC_5(&VAR_12->mutex);
 if (VAR_13 > VAR_12->workers_total)
  FUNC_12(VAR_2,
    (FUNC_13(VAR_1),
     FUNC_14("too many message queue testing workers already")));




 FUNC_6(VAR_8, VAR_9, VAR_13, &VAR_10, &VAR_11);
 FUNC_4(&VAR_12->mutex);
 ++VAR_12->workers_ready;
 FUNC_5(&VAR_12->mutex);
 VAR_14 = FUNC_0(VAR_3->bgw_notify_pid);
 if (VAR_14 == ((void*)0))
 {
  FUNC_11(VAR_0, "registrant backend has exited prematurely");
  FUNC_16(1);
 }
 FUNC_3(&VAR_14->procLatch);


 FUNC_7(VAR_10, VAR_11);





 FUNC_9(VAR_8);
 FUNC_16(1);
}
