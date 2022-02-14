
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int * HeapTuple ;
typedef int AttrNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int * FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,int,int *,int,int *) ;
 int FUNC_11 (int ) ;
 int * FUNC_12 (int ) ;

HeapTuple
FUNC_13(Relation VAR_2, AttrNumber VAR_3, Oid VAR_4)
{
 HeapTuple VAR_5;
 Oid VAR_6 = FUNC_4(VAR_2);
 int VAR_7 = FUNC_7(VAR_6);

 if (VAR_7 > 0)
 {
  VAR_5 = FUNC_6(VAR_7, FUNC_2(VAR_4));
  if (!FUNC_1(VAR_5))
   return ((void*)0);
 }
 else
 {
  Oid VAR_8 = FUNC_8(VAR_6);
  SysScanDesc VAR_9;
  ScanKeyData VAR_10;

  FUNC_0(FUNC_3(VAR_8));

  FUNC_5(&VAR_10,
     VAR_3,
     VAR_0, VAR_1,
     FUNC_2(VAR_4));

  VAR_9 = FUNC_10(VAR_2, VAR_8, 1,
          ((void*)0), 1, &VAR_10);
  VAR_5 = FUNC_12(VAR_9);
  if (!FUNC_1(VAR_5))
  {
   FUNC_11(VAR_9);
   return ((void*)0);
  }
  VAR_5 = FUNC_9(VAR_5);

  FUNC_11(VAR_9);
 }

 return VAR_5;
}
