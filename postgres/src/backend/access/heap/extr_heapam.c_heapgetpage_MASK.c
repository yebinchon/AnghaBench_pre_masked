
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int TableScanDesc ;
struct TYPE_10__ {int rs_flags; int rs_rd; TYPE_2__* rs_snapshot; } ;
struct TYPE_13__ {scalar_t__ rs_nblocks; int* rs_vistuples; int rs_ntuples; TYPE_1__ rs_base; int rs_cbuf; scalar_t__ rs_cblock; int rs_strategy; } ;
struct TYPE_12__ {int t_self; int t_len; scalar_t__ t_data; int t_tableOid; } ;
struct TYPE_11__ {int takenDuringRecovery; } ;
typedef TYPE_2__* Snapshot ;
typedef scalar_t__ Page ;
typedef int OffsetNumber ;
typedef int ItemId ;
typedef scalar_t__ HeapTupleHeader ;
typedef TYPE_3__ HeapTupleData ;
typedef TYPE_4__* HeapScanDesc ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ,TYPE_3__*,int ,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,scalar_t__,int) ;
 int FUNC_9 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_14 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int VAR_7 ;
 int FUNC_17 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_18 (int ,int ) ;

void
FUNC_19(TableScanDesc VAR_8, BlockNumber VAR_9)
{
 HeapScanDesc VAR_10 = (HeapScanDesc) VAR_8;
 Buffer VAR_11;
 Snapshot VAR_12;
 Page VAR_13;
 int VAR_14;
 int VAR_15;
 OffsetNumber VAR_16;
 ItemId VAR_17;
 bool VAR_18;

 FUNC_0(VAR_9 < VAR_10->rs_nblocks);


 if (FUNC_2(VAR_10->rs_cbuf))
 {
  FUNC_16(VAR_10->rs_cbuf);
  VAR_10->rs_cbuf = VAR_3;
 }






 FUNC_3();


 VAR_10->rs_cbuf = FUNC_14(VAR_10->rs_base.rs_rd, VAR_4, VAR_9,
            VAR_6, VAR_10->rs_strategy);
 VAR_10->rs_cblock = VAR_9;

 if (!(VAR_10->rs_base.rs_flags & VAR_7))
  return;

 VAR_11 = VAR_10->rs_cbuf;
 VAR_12 = VAR_10->rs_base.rs_snapshot;




 FUNC_18(VAR_10->rs_base.rs_rd, VAR_11);






 FUNC_9(VAR_11, VAR_0);

 VAR_13 = FUNC_1(VAR_11);
 FUNC_17(VAR_12, VAR_10->rs_base.rs_rd, VAR_13);
 VAR_14 = FUNC_12(VAR_13);
 VAR_15 = 0;
 VAR_18 = FUNC_13(VAR_13) && !VAR_12->takenDuringRecovery;

 for (VAR_16 = VAR_2, VAR_17 = FUNC_11(VAR_13, VAR_16);
   VAR_16 <= VAR_14;
   VAR_16++, VAR_17++)
 {
  if (FUNC_7(VAR_17))
  {
   HeapTupleData VAR_19;
   bool VAR_20;

   VAR_19.t_tableOid = FUNC_15(VAR_10->rs_base.rs_rd);
   VAR_19.t_data = (HeapTupleHeader) FUNC_10((Page) VAR_13, VAR_17);
   VAR_19.t_len = FUNC_6(VAR_17);
   FUNC_8(&(VAR_19.t_self), VAR_9, VAR_16);

   if (VAR_18)
    VAR_20 = 1;
   else
    VAR_20 = FUNC_5(&VAR_19, VAR_12, VAR_11);

   FUNC_4(VAR_20, VAR_10->rs_base.rs_rd,
           &VAR_19, VAR_11, VAR_12);

   if (VAR_20)
    VAR_10->rs_vistuples[VAR_15++] = VAR_16;
  }
 }

 FUNC_9(VAR_11, VAR_1);

 FUNC_0(VAR_15 <= VAR_5);
 VAR_10->rs_ntuples = VAR_15;
}
