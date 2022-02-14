
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int,int *,int,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

bool
FUNC_9(Relation VAR_6)
{
 Relation VAR_7;
 ScanKeyData VAR_8;
 SysScanDesc VAR_9;
 HeapTuple VAR_10;
 bool VAR_11 = 0;

 VAR_7 = FUNC_8(VAR_5, VAR_0);
 FUNC_3(&VAR_8,
    VAR_1,
    VAR_2, VAR_3,
    FUNC_1(FUNC_2(VAR_6)));
 VAR_9 = FUNC_4(VAR_7, VAR_4, 1,
          ((void*)0), 1, &VAR_8);
 VAR_10 = FUNC_6(VAR_9);
 if (FUNC_0(VAR_10))
  VAR_11 = 1;

 FUNC_5(VAR_9);
 FUNC_7(VAR_7, VAR_0);

 return VAR_11;
}
