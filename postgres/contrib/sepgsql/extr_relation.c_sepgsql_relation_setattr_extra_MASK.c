
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int Datum ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_7 (int ,char*,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int,int ,int,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(Relation VAR_4,
          Oid VAR_5,
          Oid VAR_6,
          AttrNumber VAR_7,
          AttrNumber VAR_8)
{
 ScanKeyData VAR_9;
 SysScanDesc VAR_10;
 HeapTuple VAR_11;
 Datum VAR_12;
 bool VAR_13;

 FUNC_6(&VAR_9, VAR_8,
    VAR_0, VAR_2,
    FUNC_3(VAR_6));

 VAR_10 = FUNC_10(VAR_4, VAR_5, 1,
          VAR_3, 1, &VAR_9);
 VAR_11 = FUNC_12(VAR_10);
 if (!FUNC_2(VAR_11))
  FUNC_7(VAR_1, "could not find tuple for object %u in catalog \"%s\"",
    VAR_6, FUNC_5(VAR_4));

 VAR_12 = FUNC_8(VAR_11, VAR_7,
       FUNC_4(VAR_4), &VAR_13);
 FUNC_0(!VAR_13);

 FUNC_9(FUNC_1(VAR_12));

 FUNC_11(VAR_10);
}
