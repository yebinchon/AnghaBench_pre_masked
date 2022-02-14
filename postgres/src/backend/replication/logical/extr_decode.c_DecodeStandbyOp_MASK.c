
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int oldestRunningXid; } ;
typedef TYPE_1__ xl_running_xacts ;
struct TYPE_9__ {int msgs; int nmsgs; } ;
typedef TYPE_2__ xl_invalidations ;
typedef int uint8 ;
struct TYPE_10__ {int origptr; int * record; } ;
typedef TYPE_3__ XLogRecordBuffer ;
typedef int XLogReaderState ;
struct TYPE_11__ {int reorder; int fast_forward; int * snapshot_builder; } ;
typedef int SnapBuild ;
typedef TYPE_4__ LogicalDecodingContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int ,TYPE_1__*) ;



 int VAR_1 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_8(LogicalDecodingContext *VAR_2, XLogRecordBuffer *VAR_3)
{
 SnapBuild *VAR_4 = VAR_2->snapshot_builder;
 XLogReaderState *VAR_5 = VAR_3->record;
 uint8 VAR_6 = FUNC_5(VAR_5) & ~VAR_1;

 FUNC_2(VAR_2->reorder, FUNC_6(VAR_5), VAR_3->origptr);

 switch (VAR_6)
 {
  case 129:
   {
    xl_running_xacts *VAR_7 = (xl_running_xacts *) FUNC_4(VAR_5);

    FUNC_3(VAR_4, VAR_3->origptr, VAR_7);
    FUNC_0(VAR_2->reorder, VAR_7->oldestRunningXid);
   }
   break;
  case 128:
   break;
  case 130:
   {
    xl_invalidations *VAR_8 =
    (xl_invalidations *) FUNC_4(VAR_5);

    if (!VAR_2->fast_forward)
     FUNC_1(VAR_2->reorder,
                VAR_8->nmsgs,
                VAR_8->msgs);
   }
   break;
  default:
   FUNC_7(VAR_0, "unexpected RM_STANDBY_ID record type: %u", VAR_6);
 }
}
