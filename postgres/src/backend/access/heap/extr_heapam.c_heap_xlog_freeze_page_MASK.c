
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int offset; } ;
typedef TYPE_1__ xl_heap_freeze_tuple ;
struct TYPE_11__ {int ntuples; int cutoff_xid; } ;
typedef TYPE_2__ xl_heap_freeze_page ;
typedef int XLogRecPtr ;
struct TYPE_12__ {int EndRecPtr; } ;
typedef TYPE_3__ XLogReaderState ;
typedef int TransactionId ;
typedef int RelFileNode ;
typedef int Page ;
typedef int ItemId ;
typedef scalar_t__ HeapTupleHeader ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int ,int *) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int ,int *) ;
 int FUNC_11 (TYPE_3__*,int ,int *,int *,int *) ;
 scalar_t__ FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_14(XLogReaderState *VAR_2)
{
 XLogRecPtr VAR_3 = VAR_2->EndRecPtr;
 xl_heap_freeze_page *VAR_4 = (xl_heap_freeze_page *) FUNC_12(VAR_2);
 TransactionId VAR_5 = VAR_4->cutoff_xid;
 Buffer VAR_6;
 int VAR_7;





 if (VAR_1)
 {
  RelFileNode VAR_8;
  TransactionId VAR_9 = VAR_5;

  FUNC_7(VAR_9);

  FUNC_11(VAR_2, 0, &VAR_8, ((void*)0), ((void*)0));
  FUNC_6(VAR_9, VAR_8);
 }

 if (FUNC_9(VAR_2, 0, &VAR_6) == VAR_0)
 {
  Page VAR_10 = FUNC_0(VAR_6);
  xl_heap_freeze_tuple *VAR_11;

  VAR_11 = (xl_heap_freeze_tuple *) FUNC_10(VAR_2, 0, ((void*)0));


  for (VAR_7 = 0; VAR_7 < VAR_4->ntuples; VAR_7++)
  {
   xl_heap_freeze_tuple *VAR_12;
   ItemId VAR_13;
   HeapTupleHeader VAR_14;

   VAR_12 = &VAR_11[VAR_7];
   VAR_13 = FUNC_4(VAR_10, VAR_12->offset);
   VAR_14 = (HeapTupleHeader) FUNC_3(VAR_10, VAR_13);

   FUNC_13(VAR_14, VAR_12);
  }

  FUNC_5(VAR_10, VAR_3);
  FUNC_2(VAR_6);
 }
 if (FUNC_1(VAR_6))
  FUNC_8(VAR_6);
}
