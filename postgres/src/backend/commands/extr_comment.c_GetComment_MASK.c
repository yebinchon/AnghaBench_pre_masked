
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int TupleDesc ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int * HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ,int*) ;
 int FUNC_6 (int ,int ,int,int *,int,int *) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

char *
FUNC_11(Oid VAR_10, Oid VAR_11, int32 VAR_12)
{
 Relation VAR_13;
 ScanKeyData VAR_14[3];
 SysScanDesc VAR_15;
 TupleDesc VAR_16;
 HeapTuple VAR_17;
 char *VAR_18;



 FUNC_3(&VAR_14[0],
    VAR_3,
    VAR_5, VAR_9,
    FUNC_1(VAR_10));
 FUNC_3(&VAR_14[1],
    VAR_1,
    VAR_5, VAR_9,
    FUNC_1(VAR_11));
 FUNC_3(&VAR_14[2],
    VAR_4,
    VAR_5, VAR_8,
    FUNC_0(VAR_12));

 VAR_13 = FUNC_10(VAR_7, VAR_0);
 VAR_16 = FUNC_2(VAR_13);

 VAR_15 = FUNC_6(VAR_13, VAR_6, 1,
       ((void*)0), 3, VAR_14);

 VAR_18 = ((void*)0);
 while ((VAR_17 = FUNC_8(VAR_15)) != ((void*)0))
 {
  Datum VAR_19;
  bool VAR_20;


  VAR_19 = FUNC_5(VAR_17, VAR_2, VAR_16, &VAR_20);
  if (!VAR_20)
   VAR_18 = FUNC_4(VAR_19);
  break;
 }

 FUNC_7(VAR_15);


 FUNC_9(VAR_13, VAR_0);

 return VAR_18;
}
