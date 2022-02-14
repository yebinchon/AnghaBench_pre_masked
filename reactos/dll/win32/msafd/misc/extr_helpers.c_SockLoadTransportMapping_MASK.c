
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int ULONG ;
typedef char* PWSTR ;
typedef char* PWINSOCK_MAPPING ;
typedef int * LPBYTE ;
typedef scalar_t__ LONG ;
typedef int INT ;
typedef int HKEY ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,char*,int *,int *,int *,int*) ;
 int FUNC_6 (char*,char*) ;
 int VAR_3 ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;

INT
FUNC_10(
    PWSTR VAR_4,
    PWINSOCK_MAPPING *VAR_5)
{
    PWSTR VAR_6;
    HKEY VAR_7;
    ULONG VAR_8;
    LONG VAR_9;

    FUNC_6("TransportName %ws\n", VAR_4);


    VAR_6 = FUNC_1(VAR_0, 0, (54 + FUNC_9(VAR_4)) * sizeof(WCHAR));


    if (VAR_6 == ((void*)0)) {
        FUNC_0("Buffer allocation failed\n");
        return VAR_3;
    }


    FUNC_8(VAR_6, L"System\\CurrentControlSet\\Services\\");
    FUNC_7(VAR_6, VAR_4);
    FUNC_7(VAR_6, L"\\Parameters\\Winsock");


    VAR_9 = FUNC_4(VAR_1, VAR_6, 0, VAR_2, &VAR_7);


    FUNC_2(VAR_0, 0, VAR_6);


    if (VAR_9) {
        FUNC_0("Error reading transport mapping registry\n");
        return VAR_3;
    }


    VAR_9 = FUNC_5(VAR_7, L"Mapping", ((void*)0), ((void*)0), ((void*)0), &VAR_8);


    if (VAR_9) {
        FUNC_0("Error reading transport mapping registry\n");
        return VAR_3;
    }


    *VAR_5 = FUNC_1(VAR_0, 0, VAR_8);


    if (*VAR_5 == ((void*)0)) {
        FUNC_0("Buffer allocation failed\n");
        return VAR_3;
    }


    VAR_9 = FUNC_5(VAR_7, L"Mapping", ((void*)0), ((void*)0), (LPBYTE)*VAR_5, &VAR_8);


    if (VAR_9) {
        FUNC_0("Error reading transport mapping registry\n");
        FUNC_2(VAR_0, 0, *VAR_5);
        return VAR_3;
    }


    FUNC_3(VAR_7);
    return 0;
}
