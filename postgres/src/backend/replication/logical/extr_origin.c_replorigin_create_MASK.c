
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nulls ;
typedef int SysScanDesc ;
typedef int SnapshotData ;
typedef int ScanKeyData ;
typedef scalar_t__ RepOriginId ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int * HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 () ;
 int VAR_8 ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int *,int,int ,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int * FUNC_14 (int ,int *,int*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int**,int ,int) ;
 int FUNC_17 (int ,int ,int,int *,int,int *) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int ) ;

RepOriginId
FUNC_22(char *VAR_12)
{
 Oid VAR_13;
 HeapTuple VAR_14 = ((void*)0);
 Relation VAR_15;
 Datum VAR_16;
 SnapshotData VAR_17;
 SysScanDesc VAR_18;
 ScanKeyData VAR_19;

 VAR_16 = FUNC_2(VAR_12);

 FUNC_0(FUNC_7());
 FUNC_6(VAR_17);

 VAR_15 = FUNC_21(VAR_11, VAR_5);

 for (VAR_13 = VAR_7 + 1; VAR_13 < VAR_9; VAR_13++)
 {
  bool VAR_20[VAR_8];
  Datum VAR_21[VAR_8];
  bool VAR_22;

  FUNC_1();

  FUNC_10(&VAR_19,
     VAR_0,
     VAR_2, VAR_6,
     FUNC_8(VAR_13));

  VAR_18 = FUNC_17(VAR_15, VAR_10,
          1 ,
          &VAR_17,
          1, &VAR_19);

  VAR_22 = FUNC_5(FUNC_19(VAR_18));

  FUNC_18(VAR_18);

  if (!VAR_22)
  {




   FUNC_16(&VAR_20, 0, sizeof(VAR_20));

   VAR_21[VAR_0 - 1] = FUNC_8(VAR_13);
   VAR_21[VAR_1 - 1] = VAR_16;

   VAR_14 = FUNC_14(FUNC_9(VAR_15), VAR_21, VAR_20);
   FUNC_3(VAR_15, VAR_14);
   FUNC_4();
   break;
  }
 }


 FUNC_20(VAR_15, VAR_5);

 if (VAR_14 == ((void*)0))
  FUNC_11(VAR_4,
    (FUNC_12(VAR_3),
     FUNC_13("could not find free replication origin OID")));

 FUNC_15(VAR_14);
 return VAR_13;
}
