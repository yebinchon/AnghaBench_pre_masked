
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int * PSECPKG_USER_FUNCTION_TABLE ;
typedef int * PSECPKG_FUNCTION_TABLE ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*,int,...) ;
 int FUNC_2 (int,int*,int **,int*) ;
 int FUNC_3 (int,int*,int **,int*) ;

__attribute__((used)) static void FUNC_4(void)
{
    PSECPKG_USER_FUNCTION_TABLE VAR_3, VAR_4;
    PSECPKG_FUNCTION_TABLE VAR_5, VAR_6;
    ULONG VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
    NTSTATUS VAR_10;





    VAR_10 = FUNC_2(0, &VAR_9, &VAR_6, &VAR_7);
    FUNC_1(VAR_10 == VAR_2, "status: 0x%x\n", VAR_10);
    FUNC_1(VAR_7 == 2 ||
       FUNC_0(VAR_7 == 1),
       "cTables: %d\n", VAR_7);
    FUNC_1(VAR_6 != ((void*)0),"pTables: %p\n", *VAR_6);


    VAR_10 = FUNC_2(0x10000, &VAR_9, &VAR_5, &VAR_7);
    FUNC_1(VAR_10 == VAR_2, "status: 0x%x\n", VAR_10);
    FUNC_1(VAR_7 == 2 ||
       FUNC_0(VAR_7 == 1),
       "cTables: %d\n", VAR_7);
    FUNC_1(VAR_5 != ((void*)0), "pTables: %p\n", *VAR_5);

    FUNC_1(VAR_5 == VAR_6, "pTables: %p, pTables2: %p\n", *VAR_5, VAR_6);

    VAR_10 = FUNC_2(0x23456, &VAR_9, &VAR_5, &VAR_7);
    FUNC_1(VAR_10 == VAR_2, "status: 0x%x\n", VAR_10);
    FUNC_1(VAR_7 == 2 ||
       FUNC_0(VAR_7 == 1),
       "cTables: %d\n", VAR_7);
    FUNC_1(VAR_5 != ((void*)0), "pTables: %p\n", *VAR_5);
    FUNC_1(VAR_5 == VAR_6, "pTables: %p, pTables2: %p\n", *VAR_5, VAR_6);


    VAR_9 = 0xdead;
    VAR_8 = 0xdead;
    VAR_3 = ((void*)0);
    VAR_10 = FUNC_3(0, &VAR_9, &VAR_3, &VAR_8);
    FUNC_1(VAR_10 == VAR_1, "status: 0x%x\n", VAR_10);
    FUNC_1(VAR_9 == 0xdead, "Version: 0x%x\n", VAR_9);
    FUNC_1(VAR_8 == 0xdead, "cTables: %d\n", VAR_8);
    FUNC_1(VAR_3 == ((void*)0), "pUserTables: %p\n", *VAR_3);

    VAR_10 = FUNC_3(0x20000, &VAR_9, &VAR_3,
                                   &VAR_8);
    FUNC_1(VAR_10 == VAR_1, "status: 0x%x\n", VAR_10);
    FUNC_1(VAR_9 == 0xdead, "Version: 0x%x\n", VAR_9);
    FUNC_1(VAR_8 == 0xdead, "cTables: %d\n", VAR_8);
    FUNC_1(VAR_3 == ((void*)0), "pUserTables: %p\n", *VAR_3);


    VAR_10 = FUNC_3(VAR_0, &VAR_9,
                                   &VAR_3, &VAR_8);
    FUNC_1(VAR_10 == VAR_2, "status: 0x%x\n", VAR_10);
    FUNC_1(VAR_9 == VAR_0, "Version: 0x%x\n", VAR_9);
    FUNC_1(VAR_8 == 2 ||
       FUNC_0(VAR_8 == 4),
       "cUserTables: %d\n", VAR_8);
    FUNC_1(VAR_3 != ((void*)0), "pUserTables: %p\n", *VAR_3);


    VAR_10 = FUNC_3(VAR_0, &VAR_9,
                                   &VAR_4, &VAR_7);
    FUNC_1(VAR_10 == VAR_2, "status: 0x%x\n", VAR_10);
    FUNC_1(VAR_3 == VAR_4, "pUserTables: %p, pUserTables2: %p\n",
       *VAR_3, VAR_4);
}
