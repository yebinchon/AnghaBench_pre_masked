
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32 ;
typedef int XLogSegNo ;
typedef int XLogRecord ;
typedef scalar_t__ XLogRecPtr ;
struct TYPE_7__ {int ws_tli; } ;
struct TYPE_8__ {scalar_t__ EndRecPtr; int latestPageTLI; TYPE_1__ seg; int latestPagePtr; int ReadRecPtr; scalar_t__ private_data; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_9__ {int fetching_ckpt; int emode; int randAccess; } ;
typedef TYPE_3__ XLogPageReadPrivate ;
struct TYPE_10__ {scalar_t__ minRecoveryPoint; int minRecoveryPointTLI; int state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_6__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*,int ,int ,int ) ;
 int * FUNC_7 (TYPE_2__*,scalar_t__,char**) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_14 ;
 int FUNC_10 (int,scalar_t__) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char*,int ,char*,int ) ;
 int FUNC_13 (char*,...) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_14 (int ,int ) ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static XLogRecord *
FUNC_15(XLogReaderState *VAR_22, XLogRecPtr VAR_23, int VAR_24,
     bool VAR_25)
{
 XLogRecord *VAR_26;
 XLogPageReadPrivate *VAR_27 = (XLogPageReadPrivate *) VAR_22->private_data;


 VAR_27->fetching_ckpt = VAR_25;
 VAR_27->emode = VAR_24;
 VAR_27->randAccess = (VAR_23 != VAR_7);


 VAR_16 = 0;

 for (;;)
 {
  char *VAR_28;

  VAR_26 = FUNC_7(VAR_22, VAR_23, &VAR_28);
  VAR_10 = VAR_22->ReadRecPtr;
  VAR_5 = VAR_22->EndRecPtr;
  if (VAR_26 == ((void*)0))
  {
   if (VAR_19 >= 0)
   {
    FUNC_9(VAR_19);
    VAR_19 = -1;
   }







   if (VAR_28)
    FUNC_11(FUNC_10(VAR_24,
             VAR_23 ? VAR_23 : VAR_5),
      (FUNC_13("%s", VAR_28) ));
  }




  else if (!FUNC_14(VAR_22->latestPageTLI, VAR_15))
  {
   char VAR_29[VAR_9];
   XLogSegNo VAR_30;
   int32 VAR_31;

   FUNC_5(VAR_22->latestPagePtr, VAR_30, VAR_21);
   VAR_31 = FUNC_8(VAR_22->latestPagePtr,
            VAR_21);
   FUNC_6(VAR_29, VAR_22->seg.ws_tli, VAR_30,
       VAR_21);
   FUNC_11(FUNC_10(VAR_24,
            VAR_23 ? VAR_23 : VAR_5),
     (FUNC_12("unexpected timeline ID %u in log segment %s, offset %u",
       VAR_22->latestPageTLI,
       VAR_29,
       VAR_31)));
   VAR_26 = ((void*)0);
  }

  if (VAR_26)
  {

   return VAR_26;
  }
  else
  {

   VAR_16 = 1;
   if (!VAR_6 && VAR_0 &&
    !VAR_25)
   {
    FUNC_11(VAR_4,
      (FUNC_13("reached end of WAL in pg_wal, entering archive recovery")));
    VAR_6 = 1;
    if (VAR_12)
     VAR_11 = 1;


    FUNC_2(VAR_2, VAR_8);
    VAR_1->state = VAR_3;
    if (VAR_1->minRecoveryPoint < VAR_5)
    {
     VAR_1->minRecoveryPoint = VAR_5;
     VAR_1->minRecoveryPointTLI = VAR_13;
    }

    VAR_17 = VAR_1->minRecoveryPoint;
    VAR_18 = VAR_1->minRecoveryPointTLI;





    VAR_20 = 1;

    FUNC_4();
    FUNC_3(VAR_2);

    FUNC_1();





    VAR_16 = 0;
    VAR_14 = 0;

    continue;
   }


   if (VAR_11 && !FUNC_0())
    continue;
   else
    return ((void*)0);
  }
 }
}
