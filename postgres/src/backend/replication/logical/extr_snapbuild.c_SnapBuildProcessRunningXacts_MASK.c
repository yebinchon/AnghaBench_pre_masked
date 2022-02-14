
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_14__ {scalar_t__ oldestRunningXid; } ;
typedef TYPE_1__ xl_running_xacts ;
typedef int XLogRecPtr ;
typedef scalar_t__ TransactionId ;
struct TYPE_16__ {scalar_t__ restart_decoding_lsn; } ;
struct TYPE_15__ {scalar_t__ state; scalar_t__ xmin; scalar_t__ last_serialized_snapshot; TYPE_10__* reorder; int xmax; } ;
struct TYPE_13__ {scalar_t__ current_restart_decoding_lsn; } ;
typedef TYPE_2__ SnapBuild ;
typedef TYPE_3__ ReorderBufferTXN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 TYPE_3__* FUNC_2 (TYPE_10__*) ;
 scalar_t__ FUNC_3 (TYPE_10__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (int ,char*,scalar_t__,int ,scalar_t__,scalar_t__) ;

void
FUNC_8(SnapBuild *VAR_4, XLogRecPtr VAR_5, xl_running_xacts *VAR_6)
{
 ReorderBufferTXN *VAR_7;
 TransactionId VAR_8;






 if (VAR_4->state < VAR_3)
 {

  if (!FUNC_4(VAR_4, VAR_5, VAR_6))
   return;
 }
 else
  FUNC_6(VAR_4, VAR_5);
 VAR_4->xmin = VAR_6->oldestRunningXid;


 FUNC_5(VAR_4);
 VAR_8 = FUNC_3(VAR_4->reorder);
 if (VAR_8 == VAR_1)
  VAR_8 = VAR_6->oldestRunningXid;
 FUNC_7(VAR_0, "xmin: %u, xmax: %u, oldest running: %u, oldest xmin: %u",
   VAR_4->xmin, VAR_4->xmax, VAR_6->oldestRunningXid, VAR_8);
 FUNC_1(VAR_5, VAR_8);
 if (VAR_4->state < VAR_3)
  return;

 VAR_7 = FUNC_2(VAR_4->reorder);





 if (VAR_7 != ((void*)0) && VAR_7->restart_decoding_lsn != VAR_2)
  FUNC_0(VAR_5, VAR_7->restart_decoding_lsn);





 else if (VAR_7 == ((void*)0) &&
    VAR_4->reorder->current_restart_decoding_lsn != VAR_2 &&
    VAR_4->last_serialized_snapshot != VAR_2)
  FUNC_0(VAR_5,
             VAR_4->last_serialized_snapshot);
}
