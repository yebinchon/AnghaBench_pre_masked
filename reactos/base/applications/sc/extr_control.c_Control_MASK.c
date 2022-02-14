
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dwServiceFlags; scalar_t__ dwProcessId; } ;
typedef int Status ;
typedef TYPE_1__ SERVICE_STATUS_PROCESS ;
typedef int SERVICE_STATUS ;
typedef int * SC_HANDLE ;
typedef int LPCTSTR ;
typedef scalar_t__ INT ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int *) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int * FUNC_4 (int *,int *,int ) ;
 int * FUNC_5 (int *,int,int) ;
 int FUNC_6 (int,int *,TYPE_1__*,int ) ;
 int FUNC_7 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,...) ;

BOOL
FUNC_10(DWORD VAR_7,
        LPCTSTR VAR_8,
        LPCTSTR *VAR_9,
        INT VAR_10)
{
    SC_HANDLE VAR_11 = ((void*)0);
    SC_HANDLE VAR_12 = ((void*)0);
    SERVICE_STATUS VAR_13;
    DWORD VAR_14 = 0;
    BOOL VAR_15 = VAR_6;
    SERVICE_STATUS_PROCESS VAR_16;
    switch (VAR_7)
    {
        case 128:
            VAR_14 = VAR_4;
            break;

        case 129:
        case 136:
        case 130:
        case 134:
        case 131:
        case 132:
        case 133:
            VAR_14 = VAR_3;
            break;

        case 135:
            VAR_14 = VAR_2;
            break;

        default:
            if (VAR_7 >= 128 && VAR_7 <= 255)
                VAR_14 = VAR_5;
            else
                VAR_14 = 0;
            break;
    }

    VAR_11 = FUNC_4(((void*)0),
                               ((void*)0),
                               VAR_1);
    if (VAR_11 == ((void*)0))
    {
        FUNC_9(FUNC_8("[SC] OpenSCManager FAILED %lu:\n\n"), FUNC_3());
        VAR_15 = VAR_0;
        goto done;
    }

    VAR_12 = FUNC_5(VAR_11,
                           VAR_8,
                           VAR_14);
    if (VAR_12 == ((void*)0))
    {
        FUNC_9(FUNC_8("[SC] OpenService FAILED %lu:\n\n"), FUNC_3());
        VAR_15 = VAR_0;
        goto done;
    }

    if (!FUNC_1(VAR_12,
                        VAR_7,
                        &VAR_13))
    {
        FUNC_9(FUNC_8("[SC] ControlService FAILED %lu:\n\n"), FUNC_3());
        VAR_15 = VAR_0;
        goto done;
    }


    FUNC_2(&VAR_16, &VAR_13, sizeof(VAR_13));
    VAR_16.dwProcessId = 0;
    VAR_16.dwServiceFlags = 0;

    FUNC_6(VAR_8,
                 ((void*)0),
                 &VAR_16,
                 VAR_0);

done:
    if (!VAR_15)
        FUNC_7();

    if (VAR_12)
        FUNC_0(VAR_12);

    if (VAR_11)
        FUNC_0(VAR_11);

    return VAR_15;
}
