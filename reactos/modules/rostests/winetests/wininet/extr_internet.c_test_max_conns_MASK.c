
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int*,int*) ;
 int FUNC_2 (int *,int ,int*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void FUNC_6(void)
{
    DWORD VAR_4, VAR_5;
    BOOL VAR_6;

    VAR_4 = sizeof(VAR_5);
    VAR_5 = 0xdeadbeef;
    VAR_6 = FUNC_1(((void*)0), VAR_3, &VAR_5, &VAR_4);
    FUNC_4(VAR_6,"Got wrong return value %x\n", VAR_6);
    FUNC_4(VAR_4 == sizeof(VAR_5), "got %d\n", VAR_4);
    FUNC_5("INTERNET_OPTION_MAX_CONNS_PER_SERVER: %d\n", VAR_5);

    VAR_4 = sizeof(VAR_5);
    VAR_5 = 0xdeadbeef;
    VAR_6 = FUNC_1(((void*)0), VAR_2, &VAR_5, &VAR_4);
    FUNC_4(VAR_6,"Got wrong return value %x\n", VAR_6);
    FUNC_4(VAR_4 == sizeof(VAR_5), "got %d\n", VAR_4);
    FUNC_5("INTERNET_OPTION_MAX_CONNS_PER_1_0_SERVER: %d\n", VAR_5);

    VAR_5 = 3;
    VAR_6 = FUNC_2(((void*)0), VAR_3, &VAR_5, sizeof(VAR_5));
    FUNC_4(VAR_6, "InternetSetOptionA(INTERNET_OPTION_MAX_CONNS_PER_SERVER) failed: %x\n", VAR_6);

    VAR_4 = sizeof(VAR_5);
    VAR_5 = 0xdeadbeef;
    VAR_6 = FUNC_1(((void*)0), VAR_3, &VAR_5, &VAR_4);
    FUNC_4(VAR_6,"Got wrong return value %x\n", VAR_6);
    FUNC_4(VAR_4 == sizeof(VAR_5), "got %d\n", VAR_4);
    FUNC_4(VAR_5 == 3, "got %d\n", VAR_5);

    VAR_5 = 0;
    VAR_6 = FUNC_2(((void*)0), VAR_3, &VAR_5, sizeof(VAR_5));
    FUNC_4(!VAR_6 || FUNC_3(VAR_6),
       "InternetSetOptionA(INTERNET_OPTION_MAX_CONNS_PER_SERVER, 0) succeeded\n");
    if (!VAR_6) FUNC_4(FUNC_0() == VAR_0, "GetLastError() = %u\n", FUNC_0());

    VAR_5 = 2;
    VAR_6 = FUNC_2(((void*)0), VAR_3, &VAR_5, sizeof(VAR_5)-1);
    FUNC_4(!VAR_6, "InternetSetOptionA(INTERNET_OPTION_MAX_CONNS_PER_SERVER) succeeded\n");
    FUNC_4(FUNC_0() == VAR_1, "GetLastError() = %u\n", FUNC_0());

    VAR_5 = 2;
    VAR_6 = FUNC_2(((void*)0), VAR_3, &VAR_5, sizeof(VAR_5)+1);
    FUNC_4(!VAR_6, "InternetSetOptionA(INTERNET_OPTION_MAX_CONNS_PER_SERVER) succeeded\n");
    FUNC_4(FUNC_0() == VAR_1, "GetLastError() = %u\n", FUNC_0());
}
