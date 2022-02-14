
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int TupleTableSlot ;
typedef int TransactionId ;
typedef TYPE_2__* TableScanDesc ;
struct TYPE_11__ {scalar_t__ t_data; int t_len; int t_tableOid; int t_self; } ;
struct TYPE_9__ {TYPE_3__ tupdata; } ;
struct TYPE_13__ {TYPE_1__ base; } ;
struct TYPE_12__ {scalar_t__ rs_cindex; int rs_cbuf; int rs_cblock; } ;
struct TYPE_10__ {int rs_rd; } ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef scalar_t__ HeapTupleHeader ;
typedef TYPE_3__* HeapTuple ;
typedef TYPE_4__* HeapScanDesc ;
typedef TYPE_5__ BufferHeapTupleTableSlot ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int *,int ) ;





 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,scalar_t__) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,char*) ;

__attribute__((used)) static bool
FUNC_19(TableScanDesc VAR_2, TransactionId VAR_3,
          double *VAR_4, double *VAR_5,
          TupleTableSlot *VAR_6)
{
 HeapScanDesc VAR_7 = (HeapScanDesc) VAR_2;
 Page VAR_8;
 OffsetNumber VAR_9;
 BufferHeapTupleTableSlot *VAR_10;

 FUNC_0(FUNC_15(VAR_6));

 VAR_10 = (BufferHeapTupleTableSlot *) VAR_6;
 VAR_8 = FUNC_1(VAR_7->rs_cbuf);
 VAR_9 = FUNC_13(VAR_8);


 for (; VAR_7->rs_cindex <= VAR_9; VAR_7->rs_cindex++)
 {
  ItemId VAR_11;
  HeapTuple VAR_12 = &VAR_10->base.tupdata;
  bool VAR_13 = 0;

  VAR_11 = FUNC_12(VAR_8, VAR_7->rs_cindex);







  if (!FUNC_9(VAR_11))
  {
   if (FUNC_8(VAR_11))
    *VAR_5 += 1;
   continue;
  }

  FUNC_10(&VAR_12->t_self, VAR_7->rs_cblock, VAR_7->rs_cindex);

  VAR_12->t_tableOid = FUNC_14(VAR_2->rs_rd);
  VAR_12->t_data = (HeapTupleHeader) FUNC_11(VAR_8, VAR_11);
  VAR_12->t_len = FUNC_7(VAR_11);

  switch (FUNC_6(VAR_12, VAR_3,
           VAR_7->rs_cbuf))
  {
   case 129:
    VAR_13 = 1;
    *VAR_4 += 1;
    break;

   case 132:
   case 128:

    *VAR_5 += 1;
    break;

   case 130:
    if (FUNC_16(FUNC_5(VAR_12->t_data)))
    {
     VAR_13 = 1;
     *VAR_4 += 1;
    }
    break;

   case 131:
    if (FUNC_16(FUNC_4(VAR_12->t_data)))
     *VAR_5 += 1;
    else
    {
     VAR_13 = 1;
     *VAR_4 += 1;
    }
    break;

   default:
    FUNC_18(VAR_0, "unexpected HeapTupleSatisfiesVacuum result");
    break;
  }

  if (VAR_13)
  {
   FUNC_3(VAR_12, VAR_6, VAR_7->rs_cbuf);
   VAR_7->rs_cindex++;


   return 1;
  }
 }


 FUNC_17(VAR_7->rs_cbuf);
 VAR_7->rs_cbuf = VAR_1;


 FUNC_2(VAR_6);

 return 0;
}
