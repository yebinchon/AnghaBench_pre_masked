
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int,int *,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

bool
FUNC_8(Oid VAR_6)
{
 Relation VAR_7;
 SysScanDesc VAR_8;
 ScanKeyData VAR_9;
 bool VAR_10;

 VAR_7 = FUNC_7(VAR_4, VAR_0);
 FUNC_2(&VAR_9, VAR_1, VAR_2,
    VAR_3, FUNC_1(VAR_6));
 VAR_8 = FUNC_3(VAR_7, VAR_5, 1,
         ((void*)0), 1, &VAR_9);
 VAR_10 = FUNC_0(FUNC_5(VAR_8));
 FUNC_4(VAR_8);
 FUNC_6(VAR_7, VAR_0);

 return VAR_10;
}
