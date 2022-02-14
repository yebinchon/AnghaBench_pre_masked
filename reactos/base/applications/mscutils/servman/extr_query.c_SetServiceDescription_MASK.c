
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lpDescription; } ;
typedef TYPE_1__ SERVICE_DESCRIPTION ;
typedef int SC_LOCK ;
typedef scalar_t__ SC_HANDLE ;
typedef int LPWSTR ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (scalar_t__,int ,TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;

BOOL
FUNC_7(LPWSTR VAR_5,
                      LPWSTR VAR_6)
{
    SC_HANDLE VAR_7;
    SC_HANDLE VAR_8;
    SC_LOCK VAR_9;
    SERVICE_DESCRIPTION VAR_10;
    BOOL VAR_11 = VAR_0;

    VAR_7 = FUNC_4(((void*)0),
                                ((void*)0),
                                VAR_1);
    if (VAR_7)
    {
        VAR_9 = FUNC_3(VAR_7);
        if (VAR_9)
        {
            VAR_8 = FUNC_5(VAR_7,
                               VAR_5,
                               VAR_2);
            if (VAR_8)
            {
                VAR_10.lpDescription = VAR_6;

                if (FUNC_0(VAR_8,
                                          VAR_3,
                                          &VAR_10))
                {
                    VAR_11 = VAR_4;
                }

                FUNC_1(VAR_8);
            }

            FUNC_6(VAR_9);
        }

        FUNC_1(VAR_7);
    }

    if (!VAR_11)
        FUNC_2();

    return VAR_11;
}
