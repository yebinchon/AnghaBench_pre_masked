
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_7__ {TYPE_1__* slot; } ;
struct TYPE_6__ {size_t slot; scalar_t__ generation; } ;
struct TYPE_5__ {scalar_t__ generation; scalar_t__ pid; int in_use; } ;
typedef int BgwHandleStatus ;
typedef TYPE_1__ BackgroundWorkerSlot ;
typedef TYPE_2__ BackgroundWorkerHandle ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 size_t VAR_7 ;

BgwHandleStatus
FUNC_3(BackgroundWorkerHandle *VAR_8, pid_t *VAR_9)
{
 BackgroundWorkerSlot *VAR_10;
 pid_t VAR_11;

 FUNC_0(VAR_8->slot < VAR_7);
 VAR_10 = &VAR_3->slot[VAR_8->slot];







 FUNC_1(VAR_4, VAR_6);
 if (VAR_8->generation != VAR_10->generation || !VAR_10->in_use)
  VAR_11 = 0;
 else
  VAR_11 = VAR_10->pid;


 FUNC_2(VAR_4);

 if (VAR_11 == 0)
  return VAR_2;
 else if (VAR_11 == VAR_5)
  return VAR_0;
 *VAR_9 = VAR_11;
 return VAR_1;
}
