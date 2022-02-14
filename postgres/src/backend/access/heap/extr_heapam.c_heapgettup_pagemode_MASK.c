
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TableScanDesc ;
struct TYPE_6__ {int rs_flags; int rs_rd; int rs_snapshot; int * rs_parallel; } ;
struct TYPE_7__ {int * t_data; int t_self; void* t_len; } ;
struct TYPE_8__ {int rs_inited; scalar_t__ rs_nblocks; scalar_t__ rs_numblocks; scalar_t__ rs_startblock; scalar_t__ rs_cblock; int rs_cindex; int rs_ntuples; scalar_t__* rs_vistuples; TYPE_1__ rs_base; int rs_cbuf; TYPE_2__ rs_ctup; } ;
typedef int * ScanKey ;
typedef int ScanDirection ;
typedef int ParallelBlockTableScanDesc ;
typedef scalar_t__ Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef void* HeapTupleHeader ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* HeapScanDesc ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,int,int *,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_2 ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,scalar_t__) ;
 int FUNC_16 (int ,scalar_t__) ;
 int FUNC_17 (int ,scalar_t__) ;
 scalar_t__ FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;

__attribute__((used)) static void
FUNC_20(HeapScanDesc VAR_3,
     ScanDirection VAR_4,
     int VAR_5,
     ScanKey VAR_6)
{
 HeapTuple VAR_7 = &(VAR_3->rs_ctup);
 bool VAR_8 = FUNC_13(VAR_4);
 BlockNumber VAR_9;
 bool VAR_10;
 Page VAR_11;
 int VAR_12;
 int VAR_13;
 OffsetNumber VAR_14;
 int VAR_15;
 ItemId VAR_16;




 if (FUNC_14(VAR_4))
 {
  if (!VAR_3->rs_inited)
  {



   if (VAR_3->rs_nblocks == 0 || VAR_3->rs_numblocks == 0)
   {
    FUNC_0(!FUNC_2(VAR_3->rs_cbuf));
    VAR_7->t_data = ((void*)0);
    return;
   }
   if (VAR_3->rs_base.rs_parallel != ((void*)0))
   {
    ParallelBlockTableScanDesc VAR_17 =
    (ParallelBlockTableScanDesc) VAR_3->rs_base.rs_parallel;

    FUNC_19(VAR_3->rs_base.rs_rd,
               VAR_17);

    VAR_9 = FUNC_18(VAR_3->rs_base.rs_rd,
               VAR_17);


    if (VAR_9 == VAR_0)
    {
     FUNC_0(!FUNC_2(VAR_3->rs_cbuf));
     VAR_7->t_data = ((void*)0);
     return;
    }
   }
   else
    VAR_9 = VAR_3->rs_startblock;
   FUNC_16((TableScanDesc) VAR_3, VAR_9);
   VAR_13 = 0;
   VAR_3->rs_inited = 1;
  }
  else
  {

   VAR_9 = VAR_3->rs_cblock;
   VAR_13 = VAR_3->rs_cindex + 1;
  }

  VAR_11 = FUNC_1(VAR_3->rs_cbuf);
  FUNC_15(VAR_3->rs_base.rs_snapshot, VAR_3->rs_base.rs_rd, VAR_11);
  VAR_12 = VAR_3->rs_ntuples;


  VAR_15 = VAR_12 - VAR_13;
 }
 else if (VAR_8)
 {

  FUNC_0(VAR_3->rs_base.rs_parallel == ((void*)0));

  if (!VAR_3->rs_inited)
  {



   if (VAR_3->rs_nblocks == 0 || VAR_3->rs_numblocks == 0)
   {
    FUNC_0(!FUNC_2(VAR_3->rs_cbuf));
    VAR_7->t_data = ((void*)0);
    return;
   }







   VAR_3->rs_base.rs_flags &= ~VAR_2;

   if (VAR_3->rs_startblock > 0)
    VAR_9 = VAR_3->rs_startblock - 1;
   else
    VAR_9 = VAR_3->rs_nblocks - 1;
   FUNC_16((TableScanDesc) VAR_3, VAR_9);
  }
  else
  {

   VAR_9 = VAR_3->rs_cblock;
  }

  VAR_11 = FUNC_1(VAR_3->rs_cbuf);
  FUNC_15(VAR_3->rs_base.rs_snapshot, VAR_3->rs_base.rs_rd, VAR_11);
  VAR_12 = VAR_3->rs_ntuples;

  if (!VAR_3->rs_inited)
  {
   VAR_13 = VAR_12 - 1;
   VAR_3->rs_inited = 1;
  }
  else
  {
   VAR_13 = VAR_3->rs_cindex - 1;
  }


  VAR_15 = VAR_13 + 1;
 }
 else
 {



  if (!VAR_3->rs_inited)
  {
   FUNC_0(!FUNC_2(VAR_3->rs_cbuf));
   VAR_7->t_data = ((void*)0);
   return;
  }

  VAR_9 = FUNC_6(&(VAR_7->t_self));
  if (VAR_9 != VAR_3->rs_cblock)
   FUNC_16((TableScanDesc) VAR_3, VAR_9);


  VAR_11 = FUNC_1(VAR_3->rs_cbuf);
  FUNC_15(VAR_3->rs_base.rs_snapshot, VAR_3->rs_base.rs_rd, VAR_11);
  VAR_14 = FUNC_7(&(VAR_7->t_self));
  VAR_16 = FUNC_10(VAR_11, VAR_14);
  FUNC_0(FUNC_5(VAR_16));

  VAR_7->t_data = (HeapTupleHeader) FUNC_9((Page) VAR_11, VAR_16);
  VAR_7->t_len = FUNC_4(VAR_16);


  FUNC_0(VAR_3->rs_cindex < VAR_3->rs_ntuples);
  FUNC_0(VAR_14 == VAR_3->rs_vistuples[VAR_3->rs_cindex]);

  return;
 }





 for (;;)
 {
  while (VAR_15 > 0)
  {
   VAR_14 = VAR_3->rs_vistuples[VAR_13];
   VAR_16 = FUNC_10(VAR_11, VAR_14);
   FUNC_0(FUNC_5(VAR_16));

   VAR_7->t_data = (HeapTupleHeader) FUNC_9((Page) VAR_11, VAR_16);
   VAR_7->t_len = FUNC_4(VAR_16);
   FUNC_8(&(VAR_7->t_self), VAR_9, VAR_14);




   if (VAR_6 != ((void*)0))
   {
    bool VAR_18;

    FUNC_3(VAR_7, FUNC_11(VAR_3->rs_base.rs_rd),
       VAR_5, VAR_6, VAR_18);
    if (VAR_18)
    {
     VAR_3->rs_cindex = VAR_13;
     return;
    }
   }
   else
   {
    VAR_3->rs_cindex = VAR_13;
    return;
   }




   --VAR_15;
   if (VAR_8)
    --VAR_13;
   else
    ++VAR_13;
  }





  if (VAR_8)
  {
   VAR_10 = (VAR_9 == VAR_3->rs_startblock) ||
    (VAR_3->rs_numblocks != VAR_0 ? --VAR_3->rs_numblocks == 0 : 0);
   if (VAR_9 == 0)
    VAR_9 = VAR_3->rs_nblocks;
   VAR_9--;
  }
  else if (VAR_3->rs_base.rs_parallel != ((void*)0))
  {
   ParallelBlockTableScanDesc VAR_19 =
   (ParallelBlockTableScanDesc) VAR_3->rs_base.rs_parallel;

   VAR_9 = FUNC_18(VAR_3->rs_base.rs_rd,
              VAR_19);
   VAR_10 = (VAR_9 == VAR_0);
  }
  else
  {
   VAR_9++;
   if (VAR_9 >= VAR_3->rs_nblocks)
    VAR_9 = 0;
   VAR_10 = (VAR_9 == VAR_3->rs_startblock) ||
    (VAR_3->rs_numblocks != VAR_0 ? --VAR_3->rs_numblocks == 0 : 0);
   if (VAR_3->rs_base.rs_flags & VAR_2)
    FUNC_17(VAR_3->rs_base.rs_rd, VAR_9);
  }




  if (VAR_10)
  {
   if (FUNC_2(VAR_3->rs_cbuf))
    FUNC_12(VAR_3->rs_cbuf);
   VAR_3->rs_cbuf = VAR_1;
   VAR_3->rs_cblock = VAR_0;
   VAR_7->t_data = ((void*)0);
   VAR_3->rs_inited = 0;
   return;
  }

  FUNC_16((TableScanDesc) VAR_3, VAR_9);

  VAR_11 = FUNC_1(VAR_3->rs_cbuf);
  FUNC_15(VAR_3->rs_base.rs_snapshot, VAR_3->rs_base.rs_rd, VAR_11);
  VAR_12 = VAR_3->rs_ntuples;
  VAR_15 = VAR_12;
  if (VAR_8)
   VAR_13 = VAR_12 - 1;
  else
   VAR_13 = 0;
 }
}
