
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
typedef int TupleDesc ;
struct TYPE_3__ {int * t_data; int t_tableOid; int t_self; int t_len; } ;
typedef int Oid ;
typedef int * HeapTupleHeader ;
typedef TYPE_1__ HeapTupleData ;
typedef int Datum ;
typedef int AttrNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int*) ;
 int FUNC_8 (int ,int ) ;

Datum
FUNC_9(HeapTupleHeader VAR_2,
      AttrNumber VAR_3,
      bool *VAR_4)
{
 Datum VAR_5;
 Oid VAR_6;
 int32 VAR_7;
 TupleDesc VAR_8;
 HeapTupleData VAR_9;

 if (!FUNC_0(VAR_3))
  FUNC_6(VAR_0, "invalid attribute number %d", VAR_3);

 if (VAR_4 == ((void*)0))
  FUNC_6(VAR_0, "a NULL isNull pointer was passed");

 if (VAR_2 == ((void*)0))
 {

  *VAR_4 = 1;
  return (Datum) 0;
 }

 VAR_6 = FUNC_3(VAR_2);
 VAR_7 = FUNC_2(VAR_2);
 VAR_8 = FUNC_8(VAR_6, VAR_7);






 VAR_9.t_len = FUNC_1(VAR_2);
 FUNC_4(&(VAR_9.t_self));
 VAR_9.t_tableOid = VAR_1;
 VAR_9.t_data = VAR_2;

 VAR_5 = FUNC_7(&VAR_9,
        VAR_3,
        VAR_8,
        VAR_4);

 FUNC_5(VAR_8);

 return VAR_5;
}
