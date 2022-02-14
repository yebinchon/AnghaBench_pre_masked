
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SysScanDesc ;
typedef int Snapshot ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int GucSource ;
typedef int Datum ;
typedef int ArrayType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int*) ;
 int FUNC_7 (int ,int ,int,int ,int,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

void
FUNC_10(Snapshot VAR_8, Oid VAR_9, Oid VAR_10,
    Relation VAR_11, GucSource VAR_12)
{
 SysScanDesc VAR_13;
 ScanKeyData VAR_14[2];
 HeapTuple VAR_15;

 FUNC_5(&VAR_14[0],
    VAR_1,
    VAR_3,
    VAR_5,
    FUNC_2(VAR_9));
 FUNC_5(&VAR_14[1],
    VAR_2,
    VAR_3,
    VAR_5,
    FUNC_2(VAR_10));

 VAR_13 = FUNC_7(VAR_11, VAR_4, 1,
         VAR_8, 2, VAR_14);
 while (FUNC_1(VAR_15 = FUNC_9(VAR_13)))
 {
  bool VAR_16;
  Datum VAR_17;

  VAR_17 = FUNC_6(VAR_15, VAR_0,
        FUNC_4(VAR_11), &VAR_16);
  if (!VAR_16)
  {
   ArrayType *VAR_18 = FUNC_0(VAR_17);






   FUNC_3(VAR_18, VAR_7, VAR_12, VAR_6);
  }
 }

 FUNC_8(VAR_13);
}
