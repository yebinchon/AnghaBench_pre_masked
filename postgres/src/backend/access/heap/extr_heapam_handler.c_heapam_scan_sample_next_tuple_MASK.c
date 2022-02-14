
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int TupleTableSlot ;
struct TYPE_15__ {int (* NextSampleTuple ) (TYPE_3__*,int ,int ) ;} ;
typedef TYPE_1__ TsmRoutine ;
typedef TYPE_2__* TableScanDesc ;
struct TYPE_18__ {int t_self; int t_len; scalar_t__ t_data; } ;
struct TYPE_19__ {int rs_cbuf; TYPE_4__ rs_ctup; int rs_cblock; } ;
struct TYPE_17__ {TYPE_1__* tsmroutine; } ;
struct TYPE_16__ {int rs_flags; int rs_rd; TYPE_13__* rs_snapshot; } ;
struct TYPE_14__ {int takenDuringRecovery; } ;
typedef TYPE_3__ SampleScanState ;
typedef scalar_t__ Page ;
typedef int OffsetNumber ;
typedef int ItemId ;
typedef scalar_t__ HeapTupleHeader ;
typedef TYPE_4__* HeapTuple ;
typedef TYPE_5__* HeapScanDesc ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ,TYPE_4__*,int ,TYPE_13__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*,int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_15 (TYPE_2__*,int ,TYPE_4__*,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static bool
FUNC_18(TableScanDesc VAR_3, SampleScanState *VAR_4,
         TupleTableSlot *VAR_5)
{
 HeapScanDesc VAR_6 = (HeapScanDesc) VAR_3;
 TsmRoutine *VAR_7 = VAR_4->tsmroutine;
 BlockNumber VAR_8 = VAR_6->rs_cblock;
 bool VAR_9 = (VAR_3->rs_flags & VAR_2) != 0;

 Page VAR_10;
 bool VAR_11;
 OffsetNumber VAR_12;





 if (!VAR_9)
  FUNC_9(VAR_6->rs_cbuf, VAR_0);

 VAR_10 = (Page) FUNC_1(VAR_6->rs_cbuf);
 VAR_11 = FUNC_14(VAR_10) &&
  !VAR_3->rs_snapshot->takenDuringRecovery;
 VAR_12 = FUNC_13(VAR_10);

 for (;;)
 {
  OffsetNumber VAR_13;

  FUNC_2();


  VAR_13 = VAR_7->NextSampleTuple(VAR_4,
           VAR_8,
           VAR_12);

  if (FUNC_10(VAR_13))
  {
   ItemId VAR_14;
   bool VAR_15;
   HeapTuple VAR_16 = &(VAR_6->rs_ctup);


   VAR_14 = FUNC_12(VAR_10, VAR_13);
   if (!FUNC_7(VAR_14))
    continue;

   VAR_16->t_data = (HeapTupleHeader) FUNC_11(VAR_10, VAR_14);
   VAR_16->t_len = FUNC_6(VAR_14);
   FUNC_8(&(VAR_16->t_self), VAR_8, VAR_13);


   if (VAR_11)
    VAR_15 = 1;
   else
    VAR_15 = FUNC_15(VAR_3, VAR_6->rs_cbuf,
             VAR_16, VAR_13);


   if (!VAR_9)
    FUNC_3(VAR_15, VAR_3->rs_rd, VAR_16,
            VAR_6->rs_cbuf, VAR_3->rs_snapshot);


   if (!VAR_15)
    continue;


   if (!VAR_9)
    FUNC_9(VAR_6->rs_cbuf, VAR_1);

   FUNC_5(VAR_16, VAR_5, VAR_6->rs_cbuf);


   FUNC_16(VAR_3->rs_rd);

   return 1;
  }
  else
  {




   if (!VAR_9)
    FUNC_9(VAR_6->rs_cbuf, VAR_1);

   FUNC_4(VAR_5);
   return 0;
  }
 }

 FUNC_0(0);
}
