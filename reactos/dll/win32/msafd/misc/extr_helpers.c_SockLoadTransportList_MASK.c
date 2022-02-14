
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int * PWSTR ;
typedef int * LPBYTE ;
typedef scalar_t__ LONG ;
typedef int INT ;
typedef int HKEY ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,char*,int *,int *,int *,int *) ;
 int FUNC_6 (char*) ;
 int VAR_3 ;

INT
FUNC_7(
    PWSTR *VAR_4)
{
    ULONG VAR_5;
    HKEY VAR_6;
    LONG VAR_7;

    FUNC_6("Called\n");


    VAR_7 = FUNC_4 (VAR_1,
                            L"SYSTEM\\CurrentControlSet\\Services\\Winsock\\Parameters",
                            0,
                            VAR_2,
                            &VAR_6);


    if (VAR_7) {
        FUNC_0("Error reading transport list registry\n");
        return VAR_3;
    }


    VAR_7 = FUNC_5(VAR_6,
                              L"Transports",
                              ((void*)0),
                              ((void*)0),
                              ((void*)0),
                              &VAR_5);


    if (VAR_7) {
        FUNC_0("Error reading transport list registry\n");
        return VAR_3;
    }


    *VAR_4 = FUNC_1(VAR_0, 0, VAR_5);


    if (*VAR_4 == ((void*)0)) {
        FUNC_0("Buffer allocation failed\n");
        return VAR_3;
    }


    VAR_7 = FUNC_5 (VAR_6,
                               L"Transports",
                               ((void*)0),
                               ((void*)0),
                               (LPBYTE)*VAR_4,
                               &VAR_5);


    if (VAR_7) {
        FUNC_0("Error reading transport list registry\n");
        FUNC_2(VAR_0, 0, *VAR_4);
        return VAR_3;
    }


    FUNC_3(VAR_6);
    return 0;
}
