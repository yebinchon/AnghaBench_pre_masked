
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORDLONG ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int*,int *,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,char*,...) ;
 scalar_t__ VAR_3 ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    BOOL VAR_4;
    DWORD VAR_5, VAR_6;
    DWORDLONG VAR_7, VAR_8;
    char VAR_9[VAR_2], *VAR_10;

    FUNC_2(VAR_9, VAR_2);
    if ((VAR_10 = FUNC_6(VAR_9, '\\'))) *++VAR_10 = 0;

    VAR_4 = FUNC_0(VAR_9, &VAR_6, &VAR_7, &VAR_8);
    FUNC_5(VAR_4, "GetDiskInfoA failed %u\n", FUNC_1());

    VAR_4 = FUNC_0(VAR_9, &VAR_6, &VAR_7, ((void*)0));
    FUNC_5(VAR_4, "GetDiskInfoA failed %u\n", FUNC_1());

    VAR_4 = FUNC_0(VAR_9, &VAR_6, ((void*)0), ((void*)0));
    FUNC_5(VAR_4, "GetDiskInfoA failed %u\n", FUNC_1());

    VAR_4 = FUNC_0(VAR_9, ((void*)0), ((void*)0), ((void*)0));
    FUNC_5(VAR_4, "GetDiskInfoA failed %u\n", FUNC_1());

    FUNC_3(0xdeadbeef);
    FUNC_7(VAR_10, "\\non\\existing\\path");
    VAR_4 = FUNC_0(VAR_9, ((void*)0), ((void*)0), ((void*)0));
    VAR_5 = FUNC_1();
    FUNC_5(!VAR_4 ||
       FUNC_4(VAR_3 && VAR_4),
       "GetDiskInfoA succeeded\n");
    FUNC_5(VAR_5 == VAR_1 ||
       FUNC_4(VAR_3 && VAR_5 == 0xdeadbeef),
       "got %u expected ERROR_PATH_NOT_FOUND\n", VAR_5);

    FUNC_3(0xdeadbeef);
    VAR_4 = FUNC_0(((void*)0), ((void*)0), ((void*)0), ((void*)0));
    VAR_5 = FUNC_1();
    FUNC_5(!VAR_4, "GetDiskInfoA succeeded\n");
    FUNC_5(VAR_5 == VAR_0, "got %u expected ERROR_INVALID_PARAMETER\n", VAR_5);
}
