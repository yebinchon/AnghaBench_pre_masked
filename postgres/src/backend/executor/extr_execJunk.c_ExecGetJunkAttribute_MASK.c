
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleTableSlot ;
typedef int Datum ;
typedef scalar_t__ AttrNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__,int*) ;

Datum
FUNC_2(TupleTableSlot *VAR_0, AttrNumber VAR_1,
      bool *VAR_2)
{
 FUNC_0(VAR_1 > 0);

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
