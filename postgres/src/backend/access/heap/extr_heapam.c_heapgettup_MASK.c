
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int TableScanDesc ;
struct TYPE_8__ {int rs_flags; int rs_rd; int * rs_parallel; int rs_snapshot; } ;
struct TYPE_9__ {int * t_data; int t_self; void* t_len; } ;
struct TYPE_10__ {int rs_inited; scalar_t__ rs_nblocks; scalar_t__ rs_numblocks; scalar_t__ rs_startblock; scalar_t__ rs_cblock; TYPE_1__ rs_base; int rs_cbuf; TYPE_2__ rs_ctup; } ;
typedef int Snapshot ;
typedef int * ScanKey ;
typedef int ScanDirection ;
typedef int ParallelBlockTableScanDesc ;
typedef scalar_t__ Page ;
typedef int OffsetNumber ;
typedef scalar_t__ ItemId ;
typedef void* HeapTupleHeader ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* HeapScanDesc ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,int ,TYPE_2__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*,int ,int,int *,int) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,scalar_t__,int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__,int) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int VAR_5 ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (int ,int ,scalar_t__) ;
 int FUNC_22 (int ,scalar_t__) ;
 int FUNC_23 (int ,scalar_t__) ;
 scalar_t__ FUNC_24 (int ,int ) ;
 int FUNC_25 (int ,int ) ;

__attribute__((used)) static void
FUNC_26(HeapScanDesc VAR_6,
     ScanDirection VAR_7,
     int VAR_8,
     ScanKey VAR_9)
{
 HeapTuple VAR_10 = &(VAR_6->rs_ctup);
 Snapshot VAR_11 = VAR_6->rs_base.rs_snapshot;
 bool VAR_12 = FUNC_19(VAR_7);
 BlockNumber VAR_13;
 bool VAR_14;
 Page VAR_15;
 int VAR_16;
 OffsetNumber VAR_17;
 int VAR_18;
 ItemId VAR_19;




 if (FUNC_20(VAR_7))
 {
  if (!VAR_6->rs_inited)
  {



   if (VAR_6->rs_nblocks == 0 || VAR_6->rs_numblocks == 0)
   {
    FUNC_0(!FUNC_2(VAR_6->rs_cbuf));
    VAR_10->t_data = ((void*)0);
    return;
   }
   if (VAR_6->rs_base.rs_parallel != ((void*)0))
   {
    ParallelBlockTableScanDesc VAR_20 =
    (ParallelBlockTableScanDesc) VAR_6->rs_base.rs_parallel;

    FUNC_25(VAR_6->rs_base.rs_rd,
               VAR_20);

    VAR_13 = FUNC_24(VAR_6->rs_base.rs_rd,
               VAR_20);


    if (VAR_13 == VAR_3)
    {
     FUNC_0(!FUNC_2(VAR_6->rs_cbuf));
     VAR_10->t_data = ((void*)0);
     return;
    }
   }
   else
    VAR_13 = VAR_6->rs_startblock;
   FUNC_22((TableScanDesc) VAR_6, VAR_13);
   VAR_17 = VAR_2;
   VAR_6->rs_inited = 1;
  }
  else
  {

   VAR_13 = VAR_6->rs_cblock;
   VAR_17 =
    FUNC_12(FUNC_9(&(VAR_10->t_self)));
  }

  FUNC_11(VAR_6->rs_cbuf, VAR_0);

  VAR_15 = FUNC_1(VAR_6->rs_cbuf);
  FUNC_21(VAR_11, VAR_6->rs_base.rs_rd, VAR_15);
  VAR_16 = FUNC_16(VAR_15);


  VAR_18 = VAR_16 - VAR_17 + 1;
 }
 else if (VAR_12)
 {

  FUNC_0(VAR_6->rs_base.rs_parallel == ((void*)0));

  if (!VAR_6->rs_inited)
  {



   if (VAR_6->rs_nblocks == 0 || VAR_6->rs_numblocks == 0)
   {
    FUNC_0(!FUNC_2(VAR_6->rs_cbuf));
    VAR_10->t_data = ((void*)0);
    return;
   }







   VAR_6->rs_base.rs_flags &= ~VAR_5;

   if (VAR_6->rs_startblock > 0)
    VAR_13 = VAR_6->rs_startblock - 1;
   else
    VAR_13 = VAR_6->rs_nblocks - 1;
   FUNC_22((TableScanDesc) VAR_6, VAR_13);
  }
  else
  {

   VAR_13 = VAR_6->rs_cblock;
  }

  FUNC_11(VAR_6->rs_cbuf, VAR_0);

  VAR_15 = FUNC_1(VAR_6->rs_cbuf);
  FUNC_21(VAR_11, VAR_6->rs_base.rs_rd, VAR_15);
  VAR_16 = FUNC_16(VAR_15);

  if (!VAR_6->rs_inited)
  {
   VAR_17 = VAR_16;
   VAR_6->rs_inited = 1;
  }
  else
  {
   VAR_17 =
    FUNC_13(FUNC_9(&(VAR_10->t_self)));
  }


  VAR_18 = VAR_17;
 }
 else
 {



  if (!VAR_6->rs_inited)
  {
   FUNC_0(!FUNC_2(VAR_6->rs_cbuf));
   VAR_10->t_data = ((void*)0);
   return;
  }

  VAR_13 = FUNC_8(&(VAR_10->t_self));
  if (VAR_13 != VAR_6->rs_cblock)
   FUNC_22((TableScanDesc) VAR_6, VAR_13);


  VAR_15 = FUNC_1(VAR_6->rs_cbuf);
  FUNC_21(VAR_11, VAR_6->rs_base.rs_rd, VAR_15);
  VAR_17 = FUNC_9(&(VAR_10->t_self));
  VAR_19 = FUNC_15(VAR_15, VAR_17);
  FUNC_0(FUNC_7(VAR_19));

  VAR_10->t_data = (HeapTupleHeader) FUNC_14((Page) VAR_15, VAR_19);
  VAR_10->t_len = FUNC_6(VAR_19);

  return;
 }





 VAR_19 = FUNC_15(VAR_15, VAR_17);
 for (;;)
 {
  while (VAR_18 > 0)
  {
   if (FUNC_7(VAR_19))
   {
    bool VAR_21;

    VAR_10->t_data = (HeapTupleHeader) FUNC_14((Page) VAR_15, VAR_19);
    VAR_10->t_len = FUNC_6(VAR_19);
    FUNC_10(&(VAR_10->t_self), VAR_13, VAR_17);




    VAR_21 = FUNC_5(VAR_10,
              VAR_11,
              VAR_6->rs_cbuf);

    FUNC_3(VAR_21, VAR_6->rs_base.rs_rd,
            VAR_10, VAR_6->rs_cbuf,
            VAR_11);

    if (VAR_21 && VAR_9 != ((void*)0))
     FUNC_4(VAR_10, FUNC_17(VAR_6->rs_base.rs_rd),
        VAR_8, VAR_9, VAR_21);

    if (VAR_21)
    {
     FUNC_11(VAR_6->rs_cbuf, VAR_1);
     return;
    }
   }




   --VAR_18;
   if (VAR_12)
   {
    --VAR_19;
    --VAR_17;
   }
   else
   {
    ++VAR_19;
    ++VAR_17;
   }
  }





  FUNC_11(VAR_6->rs_cbuf, VAR_1);




  if (VAR_12)
  {
   VAR_14 = (VAR_13 == VAR_6->rs_startblock) ||
    (VAR_6->rs_numblocks != VAR_3 ? --VAR_6->rs_numblocks == 0 : 0);
   if (VAR_13 == 0)
    VAR_13 = VAR_6->rs_nblocks;
   VAR_13--;
  }
  else if (VAR_6->rs_base.rs_parallel != ((void*)0))
  {
   ParallelBlockTableScanDesc VAR_22 =
   (ParallelBlockTableScanDesc) VAR_6->rs_base.rs_parallel;

   VAR_13 = FUNC_24(VAR_6->rs_base.rs_rd,
              VAR_22);
   VAR_14 = (VAR_13 == VAR_3);
  }
  else
  {
   VAR_13++;
   if (VAR_13 >= VAR_6->rs_nblocks)
    VAR_13 = 0;
   VAR_14 = (VAR_13 == VAR_6->rs_startblock) ||
    (VAR_6->rs_numblocks != VAR_3 ? --VAR_6->rs_numblocks == 0 : 0);
   if (VAR_6->rs_base.rs_flags & VAR_5)
    FUNC_23(VAR_6->rs_base.rs_rd, VAR_13);
  }




  if (VAR_14)
  {
   if (FUNC_2(VAR_6->rs_cbuf))
    FUNC_18(VAR_6->rs_cbuf);
   VAR_6->rs_cbuf = VAR_4;
   VAR_6->rs_cblock = VAR_3;
   VAR_10->t_data = ((void*)0);
   VAR_6->rs_inited = 0;
   return;
  }

  FUNC_22((TableScanDesc) VAR_6, VAR_13);

  FUNC_11(VAR_6->rs_cbuf, VAR_0);

  VAR_15 = FUNC_1(VAR_6->rs_cbuf);
  FUNC_21(VAR_11, VAR_6->rs_base.rs_rd, VAR_15);
  VAR_16 = FUNC_16((Page) VAR_15);
  VAR_18 = VAR_16;
  if (VAR_12)
  {
   VAR_17 = VAR_16;
   VAR_19 = FUNC_15(VAR_15, VAR_16);
  }
  else
  {
   VAR_17 = VAR_2;
   VAR_19 = FUNC_15(VAR_15, VAR_2);
  }
 }
}
