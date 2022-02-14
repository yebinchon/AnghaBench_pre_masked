
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
 int FUNC_0 (char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int,int *,int,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

bool
FUNC_9(const char *VAR_8, Oid VAR_9)
{
 bool VAR_10;
 Relation VAR_11;
 SysScanDesc VAR_12;
 ScanKeyData VAR_13[2];

 VAR_11 = FUNC_8(VAR_5, VAR_0);

 FUNC_3(&VAR_13[0],
    VAR_1,
    VAR_3, VAR_6,
    FUNC_0(VAR_8));

 FUNC_3(&VAR_13[1],
    VAR_2,
    VAR_3, VAR_7,
    FUNC_2(VAR_9));

 VAR_12 = FUNC_4(VAR_11, VAR_4, 1,
         ((void*)0), 2, VAR_13);

 VAR_10 = (FUNC_1(FUNC_6(VAR_12)));

 FUNC_5(VAR_12);
 FUNC_7(VAR_11, VAR_0);

 return VAR_10;
}
