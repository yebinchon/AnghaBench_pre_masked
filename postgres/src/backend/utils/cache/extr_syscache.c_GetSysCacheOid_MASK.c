
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cc_tupdesc; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int Datum ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ,int ,int ,int ) ;
 TYPE_1__** VAR_1 ;
 int FUNC_4 (int ,int ,int ,int*) ;

Oid
FUNC_5(int VAR_2,
      AttrNumber VAR_3,
      Datum VAR_4,
      Datum VAR_5,
      Datum VAR_6,
      Datum VAR_7)
{
 HeapTuple VAR_8;
 bool VAR_9;
 Oid VAR_10;

 VAR_8 = FUNC_3(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7);
 if (!FUNC_1(VAR_8))
  return VAR_0;
 VAR_10 = FUNC_4(VAR_8, VAR_3,
        VAR_1[VAR_2]->cc_tupdesc,
        &VAR_9);
 FUNC_0(!VAR_9);
 FUNC_2(VAR_8);
 return VAR_10;
}
