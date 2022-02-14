
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int TransactionId ;
typedef TYPE_1__* TableScanDesc ;
struct TYPE_13__ {TYPE_2__* t_data; int t_self; int t_tableOid; int t_len; } ;
struct TYPE_12__ {int t_infomask; int t_ctid; } ;
struct TYPE_11__ {int rs_snapshot; int rs_rd; } ;
typedef int Snapshot ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemPointerData ;
typedef int * ItemPointer ;
typedef int ItemId ;
typedef TYPE_2__* HeapTupleHeader ;
typedef TYPE_3__ HeapTupleData ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ,TYPE_3__*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 int VAR_3 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,scalar_t__) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (int ,int ) ;
 scalar_t__ FUNC_22 (int ) ;
 int FUNC_23 (int ) ;

void
FUNC_24(TableScanDesc VAR_4,
     ItemPointer VAR_5)
{
 Relation VAR_6 = VAR_4->rs_rd;
 Snapshot VAR_7 = VAR_4->rs_snapshot;
 ItemPointerData VAR_8;
 TransactionId VAR_9;






 FUNC_0(FUNC_13(VAR_5));
 VAR_8 = *VAR_5;
 VAR_9 = VAR_3;
 for (;;)
 {
  Buffer VAR_10;
  Page VAR_11;
  OffsetNumber VAR_12;
  ItemId VAR_13;
  HeapTupleData VAR_14;
  bool VAR_15;




  VAR_10 = FUNC_18(VAR_6, FUNC_11(&VAR_8));
  FUNC_14(VAR_10, VAR_0);
  VAR_11 = FUNC_1(VAR_10);
  FUNC_20(VAR_7, VAR_6, VAR_11);






  VAR_12 = FUNC_12(&VAR_8);
  if (VAR_12 < VAR_1 || VAR_12 > FUNC_17(VAR_11))
  {
   FUNC_23(VAR_10);
   break;
  }
  VAR_13 = FUNC_16(VAR_11, VAR_12);
  if (!FUNC_9(VAR_13))
  {
   FUNC_23(VAR_10);
   break;
  }


  VAR_14.t_self = VAR_8;
  VAR_14.t_data = (HeapTupleHeader) FUNC_15(VAR_11, VAR_13);
  VAR_14.t_len = FUNC_8(VAR_13);
  VAR_14.t_tableOid = FUNC_19(VAR_6);





  if (FUNC_22(VAR_9) &&
   !FUNC_21(VAR_9, FUNC_4(VAR_14.t_data)))
  {
   FUNC_23(VAR_10);
   break;
  }





  VAR_15 = FUNC_7(&VAR_14, VAR_7, VAR_10);
  FUNC_2(VAR_15, VAR_6, &VAR_14, VAR_10, VAR_7);
  if (VAR_15)
   *VAR_5 = VAR_8;




  if ((VAR_14.t_data->t_infomask & VAR_2) ||
   FUNC_6(VAR_14.t_data) ||
   FUNC_5(VAR_14.t_data) ||
   FUNC_10(&VAR_14.t_self, &VAR_14.t_data->t_ctid))
  {
   FUNC_23(VAR_10);
   break;
  }

  VAR_8 = VAR_14.t_data->t_ctid;
  VAR_9 = FUNC_3(VAR_14.t_data);
  FUNC_23(VAR_10);
 }
}
