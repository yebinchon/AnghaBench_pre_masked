
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int startpos_str ;
typedef int nulls ;
typedef int int64 ;
typedef int XLogRecPtr ;
typedef int TupleDesc ;
typedef int TupOutputState ;
struct TYPE_5__ {int sentPtr; int mutex; } ;
struct TYPE_4__ {scalar_t__ timeline; int startpoint; scalar_t__ slotname; } ;
typedef int StringInfoData ;
typedef TYPE_1__ StartReplicationCmd ;
typedef int List ;
typedef int DestReceiver ;
typedef int Datum ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (int*,int,int) ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_14 (int ,int ,char*,int ,int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int * FUNC_18 (int *,int ,int *) ;
 int FUNC_19 (int *,int *,int*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (char*,scalar_t__,int,int) ;
 int FUNC_24 (char*,...) ;
 scalar_t__ VAR_14 ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *,char) ;
 int FUNC_27 (int *) ;
 int FUNC_28 () ;
 int FUNC_29 (char,char*) ;
 int FUNC_30 (int *,int ) ;
 int FUNC_31 (int *,int ) ;
 int FUNC_32 (int ) ;
 int * FUNC_33 (scalar_t__) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_34 (char*,int,char*,int,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_35 (scalar_t__,int *,scalar_t__*) ;

__attribute__((used)) static void
FUNC_36(StartReplicationCmd *VAR_23)
{
 StringInfoData VAR_24;
 XLogRecPtr VAR_25;

 if (VAR_9 == 0)
  FUNC_21(VAR_2,
    (FUNC_22(VAR_1),
     FUNC_24("IDENTIFY_SYSTEM has not been run before START_REPLICATION")));
 if (VAR_23->slotname)
 {
  FUNC_8(VAR_23->slotname, 1);
  if (FUNC_10(VAR_5))
   FUNC_21(VAR_2,
     (FUNC_22(VAR_1),
      (FUNC_24("cannot use a logical replication slot for physical replication"))));
 }






 if (VAR_13)
 {

  VAR_25 = FUNC_5();
 }
 else
  VAR_25 = FUNC_4();

 if (VAR_23->timeline != 0)
 {
  XLogRecPtr VAR_26;

  VAR_16 = VAR_23->timeline;
  if (VAR_16 == VAR_9)
  {
   VAR_17 = 0;
   VAR_19 = VAR_4;
  }
  else
  {
   List *VAR_27;

   VAR_17 = 1;





   VAR_27 = FUNC_33(VAR_9);
   VAR_26 = FUNC_35(VAR_23->timeline, VAR_27,
           &VAR_18);
   FUNC_25(VAR_27);
   if (!FUNC_17(VAR_26) &&
    VAR_26 < VAR_23->startpoint)
   {
    FUNC_21(VAR_2,
      (FUNC_24("requested starting point %X/%X on timeline %u is not in this server's history",
        (uint32) (VAR_23->startpoint >> 32),
        (uint32) (VAR_23->startpoint),
        VAR_23->timeline),
       FUNC_23("This server's history forked from timeline %u at %X/%X.",
           VAR_23->timeline,
           (uint32) (VAR_26 >> 32),
           (uint32) (VAR_26))));
   }
   VAR_19 = VAR_26;
  }
 }
 else
 {
  VAR_16 = VAR_9;
  VAR_19 = VAR_4;
  VAR_17 = 0;
 }

 VAR_22 = VAR_21 = 0;


 if (!VAR_17 || VAR_23->startpoint < VAR_19)
 {
  FUNC_16(VAR_10);


  FUNC_26(&VAR_24, 'W');
  FUNC_30(&VAR_24, 0);
  FUNC_31(&VAR_24, 0);
  FUNC_27(&VAR_24);
  FUNC_28();





  if (VAR_25 < VAR_23->startpoint)
  {
   FUNC_21(VAR_2,
     (FUNC_24("requested starting point %X/%X is ahead of the WAL flush position of this server %X/%X",
       (uint32) (VAR_23->startpoint >> 32),
       (uint32) (VAR_23->startpoint),
       (uint32) (VAR_25 >> 32),
       (uint32) (VAR_25))));
  }


  VAR_20 = VAR_23->startpoint;


  FUNC_11(&VAR_6->mutex);
  VAR_6->sentPtr = VAR_20;
  FUNC_12(&VAR_6->mutex);

  FUNC_13();


  VAR_15 = 1;

  FUNC_15(VAR_12);

  VAR_15 = 0;
  if (VAR_14)
   FUNC_32(0);
  FUNC_16(VAR_11);

  FUNC_0(VAR_22 && VAR_21);
 }

 if (VAR_23->slotname)
  FUNC_9();





 if (VAR_17)
 {
  char VAR_28[8 + 1 + 8 + 1];
  DestReceiver *VAR_29;
  TupOutputState *VAR_30;
  TupleDesc VAR_31;
  Datum VAR_32[2];
  bool VAR_33[2];

  FUNC_34(VAR_28, sizeof(VAR_28), "%X/%X",
     (uint32) (VAR_19 >> 32),
     (uint32) VAR_19);

  VAR_29 = FUNC_2(VAR_0);
  FUNC_7(VAR_33, 0, sizeof(VAR_33));






  VAR_31 = FUNC_3(2);
  FUNC_14(VAR_31, (AttrNumber) 1, "next_tli",
          VAR_3, -1, 0);
  FUNC_14(VAR_31, (AttrNumber) 2, "next_tli_startpos",
          VAR_7, -1, 0);


  VAR_30 = FUNC_18(VAR_29, VAR_31, &VAR_8);

  VAR_32[0] = FUNC_6((int64) VAR_18);
  VAR_32[1] = FUNC_1(VAR_28);


  FUNC_19(VAR_30, VAR_32, VAR_33);

  FUNC_20(VAR_30);
 }


 FUNC_29('C', "START_STREAMING");
}
