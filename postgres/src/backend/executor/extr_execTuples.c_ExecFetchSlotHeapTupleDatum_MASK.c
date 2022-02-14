
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tts_tupleDescriptor; } ;
typedef TYPE_1__ TupleTableSlot ;
typedef int TupleDesc ;
typedef int HeapTuple ;
typedef int Datum ;


 int FUNC_0 (TYPE_1__*,int,int*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

Datum
FUNC_3(TupleTableSlot *VAR_0)
{
 HeapTuple VAR_1;
 TupleDesc VAR_2;
 bool VAR_3;
 Datum VAR_4;


 VAR_1 = FUNC_0(VAR_0, 0, &VAR_3);
 VAR_2 = VAR_0->tts_tupleDescriptor;


 VAR_4 = FUNC_1(VAR_1, VAR_2);

 if (VAR_3)
  FUNC_2(VAR_1);

 return VAR_4;
}
