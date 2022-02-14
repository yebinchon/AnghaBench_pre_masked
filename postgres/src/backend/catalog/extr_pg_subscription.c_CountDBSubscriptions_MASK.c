
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int,int *,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

int
FUNC_8(Oid VAR_7)
{
 int VAR_8 = 0;
 Relation VAR_9;
 ScanKeyData VAR_10;
 SysScanDesc VAR_11;
 HeapTuple VAR_12;

 VAR_9 = FUNC_7(VAR_6, VAR_5);

 FUNC_2(&VAR_10,
    VAR_0,
    VAR_1, VAR_2,
    FUNC_1(VAR_7));

 VAR_11 = FUNC_3(VAR_9, VAR_3, 0,
         ((void*)0), 1, &VAR_10);

 while (FUNC_0(VAR_12 = FUNC_5(VAR_11)))
  VAR_8++;

 FUNC_4(VAR_11);

 FUNC_6(VAR_9, VAR_4);

 return VAR_8;
}
