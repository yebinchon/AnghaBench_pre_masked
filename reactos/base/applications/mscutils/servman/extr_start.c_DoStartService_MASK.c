
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dwCheckPoint; scalar_t__ dwCurrentState; int dwWaitHint; } ;
typedef TYPE_1__ SERVICE_STATUS_PROCESS ;
typedef int SC_HANDLE ;
typedef scalar_t__* LPWSTR ;
typedef int LPVOID ;
typedef scalar_t__* LPCWSTR ;
typedef int LPBYTE ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,int ) ;
 int VAR_3 ;
 scalar_t__** FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int ,scalar_t__*,int) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int,int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int ,int,scalar_t__**) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_11 (scalar_t__) ;

BOOL
FUNC_12(LPWSTR VAR_11,
               HANDLE VAR_12,
               LPWSTR VAR_13)
{
    SC_HANDLE VAR_14;
    SC_HANDLE VAR_15;
    SERVICE_STATUS_PROCESS VAR_16;
    DWORD VAR_17 = 0;
    DWORD VAR_18;
    DWORD VAR_19;
    DWORD VAR_20;
    DWORD VAR_21;
    BOOL VAR_22 = VAR_2;

    BOOL VAR_23 = VAR_10;
    LPWSTR VAR_24;
    DWORD VAR_25 = 0;
    LPCWSTR *VAR_26 = ((void*)0);

    if (VAR_13 != ((void*)0))
    {

        VAR_24 = VAR_13;
        while (*VAR_24 != 0)
        {
            if (FUNC_11(*VAR_24))
            {
                VAR_23 = VAR_10;
            }
            else
            {
                if (VAR_23 != VAR_2)
                {
                    VAR_25++;
                    VAR_23 = VAR_2;
                }
            }

            VAR_24++;
        }





        VAR_26 = FUNC_4(VAR_3, VAR_25 * sizeof(LPCWSTR));
        if (!VAR_26)
            return VAR_2;


        VAR_25 = 0;
        VAR_23 = VAR_10;
        VAR_24 = VAR_13;
        while (*VAR_24 != 0)
        {
            if (FUNC_11(*VAR_24))
            {
                *VAR_24 = 0;
                VAR_23 = VAR_10;
            }
            else
            {
                if (VAR_23 != VAR_2)
                {
                    VAR_26[VAR_25] = VAR_24;
                    VAR_25++;
                    VAR_23 = VAR_2;
                }
            }

            VAR_24++;
        }
    }

    VAR_14 = FUNC_6(((void*)0),
                                ((void*)0),
                                VAR_5);
    if (!VAR_14)
    {
        if (VAR_26)
            FUNC_5((LPVOID)VAR_26);
        return VAR_2;
    }

    VAR_15 = FUNC_7(VAR_14,
                            VAR_11,
                            VAR_9 | VAR_7);
    if (!VAR_15)
    {
        FUNC_0(VAR_14);
        if (VAR_26)
            FUNC_5((LPVOID)VAR_26);
        return VAR_2;
    }


    VAR_22 = FUNC_10(VAR_15,
                            VAR_25,
                            VAR_26);
    if (!VAR_22 && FUNC_1() == VAR_1)
    {

        VAR_22 = VAR_10;
    }
    else if (VAR_22)
    {
        if (VAR_12)
        {

            FUNC_3(VAR_12, VAR_0);
        }


        VAR_22 = FUNC_8(VAR_15,
                                        VAR_6,
                                        (LPBYTE)&VAR_16,
                                        sizeof(SERVICE_STATUS_PROCESS),
                                        &VAR_17);
        if (VAR_22)
        {
            VAR_22 = VAR_2;
            VAR_21 = VAR_4;
            VAR_19 = VAR_16.dwCheckPoint;
            VAR_18 = FUNC_2();


            while (VAR_16.dwCurrentState != VAR_8)
            {
                int VAR_27;

                VAR_20 = VAR_16.dwWaitHint / 10;

                if (VAR_20 < 1000) VAR_20 = 1000;
                else if (VAR_20 > 10000) VAR_20 = 10000;


                for (VAR_27 = VAR_20 / 1000; VAR_27 > 0; VAR_27--)
                {
                    FUNC_9(1000);
                    if (VAR_12)
                    {

                        FUNC_3(VAR_12, VAR_0);
                    }
                }



                if (!FUNC_8(VAR_15,
                                            VAR_6,
                                            (LPBYTE)&VAR_16,
                                            sizeof(SERVICE_STATUS_PROCESS),
                                            &VAR_17))
                {

                    break;
                }


                if (VAR_16.dwCheckPoint > VAR_19)
                {

                    VAR_18 = FUNC_2();
                    VAR_19 = VAR_16.dwCheckPoint;
                }
                else
                {

                    if (FUNC_2() >= VAR_18 + VAR_21)
                    {

                        break;
                    }
                }
            }
        }

        if (VAR_16.dwCurrentState == VAR_8)
        {
            VAR_22 = VAR_10;
        }
    }

    FUNC_0(VAR_15);

    FUNC_0(VAR_14);

    if (VAR_26)
        FUNC_5((LPVOID)VAR_26);

    return VAR_22;
}
