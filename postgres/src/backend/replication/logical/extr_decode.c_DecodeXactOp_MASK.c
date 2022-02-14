
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int twophase_xid; } ;
typedef TYPE_1__ xl_xact_parsed_commit ;
struct TYPE_17__ {int twophase_xid; } ;
typedef TYPE_2__ xl_xact_parsed_abort ;
typedef int xl_xact_commit ;
struct TYPE_18__ {int nsubxacts; int xtop; int * xsub; } ;
typedef TYPE_3__ xl_xact_assignment ;
typedef int xl_xact_abort ;
typedef int uint8 ;
struct TYPE_19__ {int origptr; int * record; } ;
typedef TYPE_4__ XLogRecordBuffer ;
typedef int XLogReaderState ;
typedef int TransactionId ;
struct TYPE_20__ {int * reorder; int * snapshot_builder; } ;
typedef int SnapBuild ;
typedef int ReorderBuffer ;
typedef TYPE_5__ LogicalDecodingContext ;


 int FUNC_0 (TYPE_5__*,TYPE_4__*,TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*,TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int,int *,TYPE_2__*) ;
 int FUNC_3 (int,int *,TYPE_1__*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ) ;





 int VAR_2 ;

 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_12(LogicalDecodingContext *VAR_3, XLogRecordBuffer *VAR_4)
{
 SnapBuild *VAR_5 = VAR_3->snapshot_builder;
 ReorderBuffer *VAR_6 = VAR_3->reorder;
 XLogReaderState *VAR_7 = VAR_4->record;
 uint8 VAR_8 = FUNC_9(VAR_7) & VAR_2;
 if (FUNC_6(VAR_5) < VAR_1 &&
  VAR_8 != 131)
  return;

 switch (VAR_8)
 {
  case 130:
  case 129:
   {
    xl_xact_commit *VAR_9;
    xl_xact_parsed_commit VAR_10;
    TransactionId VAR_11;

    VAR_9 = (xl_xact_commit *) FUNC_8(VAR_7);
    FUNC_3(FUNC_9(VAR_4->record), VAR_9, &VAR_10);

    if (!FUNC_7(VAR_10.twophase_xid))
     VAR_11 = FUNC_10(VAR_7);
    else
     VAR_11 = VAR_10.twophase_xid;

    FUNC_1(VAR_3, VAR_4, &VAR_10, VAR_11);
    break;
   }
  case 133:
  case 132:
   {
    xl_xact_abort *VAR_12;
    xl_xact_parsed_abort VAR_13;
    TransactionId VAR_14;

    VAR_12 = (xl_xact_abort *) FUNC_8(VAR_7);
    FUNC_2(FUNC_9(VAR_4->record), VAR_12, &VAR_13);

    if (!FUNC_7(VAR_13.twophase_xid))
     VAR_14 = FUNC_10(VAR_7);
    else
     VAR_14 = VAR_13.twophase_xid;

    FUNC_0(VAR_3, VAR_4, &VAR_13, VAR_14);
    break;
   }
  case 131:
   {
    xl_xact_assignment *VAR_15;
    int VAR_16;
    TransactionId *VAR_17;

    VAR_15 = (xl_xact_assignment *) FUNC_8(VAR_7);

    VAR_17 = &VAR_15->xsub[0];

    for (VAR_16 = 0; VAR_16 < VAR_15->nsubxacts; VAR_16++)
    {
     FUNC_4(VAR_6, VAR_15->xtop,
            *(VAR_17++), VAR_4->origptr);
    }
    break;
   }
  case 128:
   FUNC_5(VAR_6, FUNC_10(VAR_7), VAR_4->origptr);
   break;
  default:
   FUNC_11(VAR_0, "unexpected RM_XACT_ID record type: %u", VAR_8);
 }
}
