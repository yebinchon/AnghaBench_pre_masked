
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dwCheckPoint; scalar_t__ dwCurrentState; int dwWaitHint; int member_0; } ;
typedef TYPE_1__ SERVICE_STATUS_PROCESS ;
typedef int SERVICE_STATUS ;
typedef int SC_HANDLE ;
typedef int LPWSTR ;
typedef int LPBYTE ;
typedef scalar_t__ HWND ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int,scalar_t__*) ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_10 ;

BOOL
FUNC_8(LPWSTR VAR_11,
                 HWND VAR_12,
                 DWORD VAR_13)
{
    SC_HANDLE VAR_14;
    SC_HANDLE VAR_15;
    SERVICE_STATUS_PROCESS VAR_16 = {0};
    SERVICE_STATUS VAR_17;
    DWORD VAR_18 = 0;
    DWORD VAR_19;
    DWORD VAR_20;
    DWORD VAR_21;
    DWORD VAR_22;
    DWORD VAR_23, VAR_24;
    BOOL VAR_25;


    switch (VAR_13)
    {
        case 128:
            VAR_23 = VAR_6;
            break;
        case 129:
            VAR_23 = VAR_9;
            break;
        default:

            return VAR_1;
    }

    VAR_14 = FUNC_4(((void*)0),
                                ((void*)0),
                                VAR_3);
    if (!VAR_14) return VAR_1;

    VAR_15 = FUNC_5(VAR_14,
                            VAR_11,
                            VAR_7 | VAR_5 | VAR_8);
    if (!VAR_15)
    {
        FUNC_0(VAR_14);
        return VAR_1;
    }


    VAR_25 = FUNC_1(VAR_15,
                            VAR_13,
                            &VAR_17);
    if (VAR_25)
    {
        if (VAR_12)
        {

            FUNC_3(VAR_12, VAR_0);
        }


        VAR_25 = FUNC_6(VAR_15,
                                      VAR_4,
                                      (LPBYTE)&VAR_16,
                                      sizeof(SERVICE_STATUS_PROCESS),
                                      &VAR_18);
        if (VAR_25)
        {
            VAR_25 = VAR_1;
            VAR_22 = VAR_2;
            VAR_20 = VAR_16.dwCheckPoint;
            VAR_19 = FUNC_2();


            while (VAR_16.dwCurrentState != VAR_23)
            {

                VAR_21 = VAR_16.dwWaitHint / 10;

                if (VAR_21 < 1000) VAR_21 = 1000;
                else if (VAR_21 > 10000) VAR_21 = 10000;


                for (VAR_24 = VAR_21 / 1000; VAR_24 > 0; VAR_24--)
                {
                    FUNC_7(1000);
                    if (VAR_12)
                    {

                        FUNC_3(VAR_12, VAR_0);
                    }
                }


                if (!FUNC_6(VAR_15,
                                            VAR_4,
                                            (LPBYTE)&VAR_16,
                                            sizeof(SERVICE_STATUS_PROCESS),
                                            &VAR_18))
                {

                    break;
                }


                if (VAR_16.dwCheckPoint > VAR_20)
                {

                    VAR_19 = FUNC_2();
                    VAR_20 = VAR_16.dwCheckPoint;
                    FUNC_3(VAR_12, VAR_0);
                }
                else
                {

                    if(FUNC_2() >= VAR_19 + VAR_22)
                    {

                        break;
                    }
                }
            }
        }

        if (VAR_16.dwCurrentState == VAR_23)
        {
            VAR_25 = VAR_10;
        }
    }

    FUNC_0(VAR_15);
    FUNC_0(VAR_14);

    return VAR_25;
}
