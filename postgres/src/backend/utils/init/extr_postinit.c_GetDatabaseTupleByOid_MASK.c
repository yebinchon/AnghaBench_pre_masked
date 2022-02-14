
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int *,int,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static HeapTuple
FUNC_9(Oid VAR_7)
{
 HeapTuple VAR_8;
 Relation VAR_9;
 SysScanDesc VAR_10;
 ScanKeyData VAR_11[1];




 FUNC_2(&VAR_11[0],
    VAR_1,
    VAR_2, VAR_5,
    FUNC_1(VAR_7));






 VAR_9 = FUNC_8(VAR_4, VAR_0);
 VAR_10 = FUNC_4(VAR_9, VAR_3,
         VAR_6,
         ((void*)0),
         1, VAR_11);

 VAR_8 = FUNC_6(VAR_10);


 if (FUNC_0(VAR_8))
  VAR_8 = FUNC_3(VAR_8);


 FUNC_5(VAR_10);
 FUNC_7(VAR_9, VAR_0);

 return VAR_8;
}
