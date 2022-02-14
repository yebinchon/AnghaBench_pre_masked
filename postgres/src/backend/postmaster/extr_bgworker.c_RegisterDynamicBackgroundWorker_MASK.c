
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_13__ {scalar_t__ parallel_register_count; scalar_t__ parallel_terminate_count; int total_slots; TYPE_1__* slot; } ;
struct TYPE_12__ {int bgw_flags; } ;
struct TYPE_11__ {int slot; scalar_t__ generation; } ;
struct TYPE_10__ {int in_use; int terminate; scalar_t__ generation; int pid; int worker; } ;
typedef TYPE_1__ BackgroundWorkerSlot ;
typedef TYPE_2__ BackgroundWorkerHandle ;
typedef TYPE_3__ BackgroundWorker ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_9__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int *,TYPE_3__*,int) ;
 TYPE_2__* FUNC_6 (int) ;
 int FUNC_7 () ;

bool
FUNC_8(BackgroundWorker *VAR_10,
        BackgroundWorkerHandle **VAR_11)
{
 int VAR_12;
 bool VAR_13 = 0;
 bool VAR_14;
 uint64 VAR_15 = 0;
 if (!VAR_5)
  return 0;

 if (!FUNC_3(VAR_10, VAR_3))
  return 0;

 VAR_14 = (VAR_10->bgw_flags & VAR_0) != 0;

 FUNC_1(VAR_2, VAR_6);
 if (VAR_14 && (VAR_1->parallel_register_count -
      VAR_1->parallel_terminate_count) >=
  VAR_9)
 {
  FUNC_0(VAR_1->parallel_register_count -
      VAR_1->parallel_terminate_count <=
      VAR_7);
  FUNC_2(VAR_2);
  return 0;
 }




 for (VAR_12 = 0; VAR_12 < VAR_1->total_slots; ++VAR_12)
 {
  BackgroundWorkerSlot *VAR_16 = &VAR_1->slot[VAR_12];

  if (!VAR_16->in_use)
  {
   FUNC_5(&VAR_16->worker, VAR_10, sizeof(BackgroundWorker));
   VAR_16->pid = VAR_4;
   VAR_16->generation++;
   VAR_16->terminate = 0;
   VAR_15 = VAR_16->generation;
   if (VAR_14)
    VAR_1->parallel_register_count++;





   FUNC_7();

   VAR_16->in_use = 1;
   VAR_13 = 1;
   break;
  }
 }

 FUNC_2(VAR_2);


 if (VAR_13)
  FUNC_4(VAR_8);




 if (VAR_13 && VAR_11)
 {
  *VAR_11 = FUNC_6(sizeof(BackgroundWorkerHandle));
  (*VAR_11)->slot = VAR_12;
  (*VAR_11)->generation = VAR_15;
 }

 return VAR_13;
}
