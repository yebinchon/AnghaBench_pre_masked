
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xl_heap_freeze_tuple ;
typedef int TransactionId ;
typedef int HeapTupleHeader ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *,int*) ;

bool
FUNC_2(HeapTupleHeader VAR_0,
      TransactionId VAR_1, TransactionId VAR_2,
      TransactionId VAR_3, TransactionId VAR_4)
{
 xl_heap_freeze_tuple VAR_5;
 bool VAR_6;
 bool VAR_7;

 VAR_6 = FUNC_1(VAR_0,
            VAR_1, VAR_2,
            VAR_3, VAR_4,
            &VAR_5, &VAR_7);






 if (VAR_6)
  FUNC_0(VAR_0, &VAR_5);
 return VAR_6;
}
