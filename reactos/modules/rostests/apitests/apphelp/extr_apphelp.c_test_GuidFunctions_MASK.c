
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int guid ;
typedef int GUID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (scalar_t__,char*,...) ;
 int FUNC_3 (int,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void)
{
    GUID VAR_5;
    FUNC_2(FUNC_4(&VAR_3), "expected GUID_NULL to be recognized as NULL GUID\n");
    FUNC_2(FUNC_4(((void*)0)), "expected NULL to be recognized as NULL GUID\n");
    FUNC_2(FUNC_4(&VAR_4) == 0, "expected a set GUID not to be recognized as NULL GUID\n");

    FUNC_1(&VAR_5, 0, sizeof(VAR_5));
    FUNC_2(FUNC_3(0, &VAR_5) == 0,"Expected SdbGetStandardDatabaseGUID to fail\n");
    FUNC_2(FUNC_0(&VAR_3, &VAR_5), "Expected guid not to be changed\n");

    FUNC_2(FUNC_3(0x80020000, ((void*)0)),"Expected SdbGetStandardDatabaseGUID to succeed\n");

    FUNC_1(&VAR_5, 0, sizeof(VAR_5));
    FUNC_2(FUNC_3(0x80020000, &VAR_5),"Expected SdbGetStandardDatabaseGUID to succeed\n");
    FUNC_2(FUNC_0(&VAR_1, &VAR_5), "Expected guid to equal GUID_DATABASE_MSI, was: %s\n", FUNC_5(&VAR_5));

    FUNC_1(&VAR_5, 0, sizeof(VAR_5));
    FUNC_2(FUNC_3(0x80030000, &VAR_5),"Expected SdbGetStandardDatabaseGUID to succeed\n");
    FUNC_2(FUNC_0(&VAR_2, &VAR_5), "Expected guid to equal GUID_DATABASE_SHIM, was: %s\n", FUNC_5(&VAR_5));

    FUNC_1(&VAR_5, 0, sizeof(VAR_5));
    FUNC_2(FUNC_3(0x80040000, &VAR_5),"Expected SdbGetStandardDatabaseGUID to succeed\n");
    FUNC_2(FUNC_0(&VAR_0, &VAR_5), "Expected guid to equal GUID_DATABASE_DRIVERS, was: %s\n", FUNC_5(&VAR_5));
}
