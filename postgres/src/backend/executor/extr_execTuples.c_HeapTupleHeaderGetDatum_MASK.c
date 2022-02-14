
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleDesc ;
typedef int HeapTupleHeader ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;

Datum
FUNC_8(HeapTupleHeader VAR_0)
{
 Datum VAR_1;
 TupleDesc VAR_2;


 if (!FUNC_3(VAR_0))
  return FUNC_4(VAR_0);


 VAR_2 = FUNC_6(FUNC_2(VAR_0),
          FUNC_1(VAR_0));


 VAR_1 = FUNC_7(VAR_0,
            FUNC_0(VAR_0),
            VAR_2);

 FUNC_5(VAR_2);

 return VAR_1;
}
