
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SC_HANDLE ;
typedef int LPWSTR ;
typedef int * LPQUERY_SERVICE_CONFIGW ;
typedef int * LPQUERY_SERVICE_CONFIG ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (int *,int *,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (scalar_t__,int *,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

LPQUERY_SERVICE_CONFIG
FUNC_8(LPWSTR VAR_3)
{
    LPQUERY_SERVICE_CONFIGW VAR_4 = ((void*)0);
    SC_HANDLE VAR_5;
    SC_HANDLE VAR_6;
    DWORD VAR_7;

    VAR_5 = FUNC_5(((void*)0),
                                ((void*)0),
                                VAR_1);
    if (VAR_5)
    {
        VAR_6 = FUNC_6(VAR_5,
                                VAR_3,
                                VAR_2);
        if (VAR_6)
        {
            if (!FUNC_7(VAR_6,
                                     ((void*)0),
                                     0,
                                     &VAR_7))
            {
                if (FUNC_1() == VAR_0)
                {
                    VAR_4 = (LPQUERY_SERVICE_CONFIG)FUNC_3(FUNC_2(),
                                                                        0,
                                                                        VAR_7);
                    if (VAR_4)
                    {
                        if (!FUNC_7(VAR_6,
                                                VAR_4,
                                                VAR_7,
                                                &VAR_7))
                        {
                            FUNC_4(FUNC_2(),
                                     0,
                                     VAR_4);
                            VAR_4 = ((void*)0);
                        }
                    }
                }
            }

            FUNC_0(VAR_6);
        }

        FUNC_0(VAR_5);
    }

    return VAR_4;
}
