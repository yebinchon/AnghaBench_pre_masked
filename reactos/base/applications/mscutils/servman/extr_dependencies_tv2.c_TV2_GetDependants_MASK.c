
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SC_HANDLE ;
typedef int LPWSTR ;
typedef int * LPENUM_SERVICE_STATUSW ;
typedef int * LPENUM_SERVICE_STATUS ;
typedef int * LPDWORD ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int *,int ,int *,int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (int *,int *,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

LPENUM_SERVICE_STATUS
FUNC_8(LPWSTR VAR_7,
                  LPDWORD VAR_8)
{
    SC_HANDLE VAR_9;
    SC_HANDLE VAR_10;
    LPENUM_SERVICE_STATUSW VAR_11 = ((void*)0);
    DWORD VAR_12;
    DWORD VAR_13;


    VAR_9 = FUNC_6(((void*)0),
                                ((void*)0),
                                VAR_2);
    if (VAR_9)
    {
        VAR_10 = FUNC_7(VAR_9,
                                VAR_7,
                                VAR_5 | VAR_3 | VAR_4);
        if (VAR_10)
        {

            if (!FUNC_1(VAR_10,
                                        VAR_6,
                                        ((void*)0),
                                        0,
                                        &VAR_12,
                                        &VAR_13) &&
                FUNC_2() == VAR_0)
            {
                VAR_11 = (LPENUM_SERVICE_STATUSW)FUNC_4(FUNC_3(),
                                                                  0,
                                                                  VAR_12);
                if (VAR_11)
                {

                    if (FUNC_1(VAR_10,
                                               VAR_6,
                                               VAR_11,
                                               VAR_12,
                                               &VAR_12,
                                               &VAR_13))
                    {

                        *VAR_8 = VAR_13;
                    }
                    else
                    {
                        FUNC_5(VAR_1,
                                 0,
                                 VAR_11);

                        VAR_11 = ((void*)0);
                    }
                }
            }

            FUNC_0(VAR_10);
        }

        FUNC_0(VAR_9);
    }

    return VAR_11;
}
