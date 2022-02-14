
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int values ;
typedef int replace ;
typedef int nulls ;
typedef int TupleDesc ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int Datum ;
typedef int CatalogIndexState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int *,int,int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int*,int*,int*) ;
 int FUNC_9 (int*,int,int) ;
 int FUNC_10 (int ,int ,int,int *,int,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;

void
FUNC_15(Oid VAR_7, Oid VAR_8)
{
 Relation VAR_9;
 TupleDesc VAR_10;
 ScanKeyData VAR_11[1];
 SysScanDesc VAR_12;
 HeapTuple VAR_13;
 CatalogIndexState VAR_14;
 Datum VAR_15[VAR_3];
 bool VAR_16[VAR_3];
 bool VAR_17[VAR_3];

 VAR_9 = FUNC_14(VAR_6, VAR_4);
 VAR_10 = FUNC_5(VAR_9);

 VAR_14 = FUNC_1(VAR_9);


 FUNC_6(&VAR_11[0],
    VAR_0,
    VAR_1, VAR_2,
    FUNC_4(VAR_7));

 VAR_12 = FUNC_10(VAR_9, VAR_5, 1,
         ((void*)0), 1, VAR_11);


 FUNC_9(VAR_15, 0, sizeof(VAR_15));
 FUNC_9(VAR_16, 0, sizeof(VAR_16));
 FUNC_9(VAR_17, 0, sizeof(VAR_17));

 VAR_17[VAR_0 - 1] = 1;
 VAR_15[VAR_0 - 1] = FUNC_4(VAR_8);
 while (FUNC_3(VAR_13 = FUNC_12(VAR_12)))
 {
  HeapTuple VAR_18;

  VAR_18 = FUNC_8(VAR_13, VAR_10, VAR_15, VAR_16, VAR_17);
  FUNC_2(VAR_9, VAR_18, VAR_14);

  FUNC_7(VAR_18);
 }

 FUNC_11(VAR_12);

 FUNC_0(VAR_14);
 FUNC_13(VAR_9, VAR_4);
}
