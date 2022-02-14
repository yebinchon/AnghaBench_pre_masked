
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* slot; } ;
struct TYPE_8__ {int pid; } ;
struct TYPE_6__ {scalar_t__ bgw_notify_pid; } ;
struct TYPE_7__ {size_t rw_shmem_slot; TYPE_1__ rw_worker; int rw_pid; } ;
typedef TYPE_2__ RegisteredBgWorker ;
typedef TYPE_3__ BackgroundWorkerSlot ;


 int FUNC_0 (int) ;
 TYPE_5__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;
 size_t VAR_2 ;

void
FUNC_2(RegisteredBgWorker *VAR_3)
{
 BackgroundWorkerSlot *VAR_4;

 FUNC_0(VAR_3->rw_shmem_slot < VAR_2);
 VAR_4 = &VAR_0->slot[VAR_3->rw_shmem_slot];
 VAR_4->pid = VAR_3->rw_pid;

 if (VAR_3->rw_worker.bgw_notify_pid != 0)
  FUNC_1(VAR_3->rw_worker.bgw_notify_pid, VAR_1);
}
