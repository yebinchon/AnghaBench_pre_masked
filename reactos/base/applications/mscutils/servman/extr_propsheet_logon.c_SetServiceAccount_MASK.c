
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SC_LOCK ;
typedef scalar_t__ SC_HANDLE ;
typedef int LPWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int ,int *,int *,int *,int *,int ,int ,int *) ;
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

__attribute__((used)) static
BOOL
FUNC_7(
    LPWSTR VAR_5,
    DWORD VAR_6,
    LPWSTR VAR_7,
    LPWSTR VAR_8)
{
    SC_HANDLE VAR_9;
    SC_HANDLE VAR_10;
    SC_LOCK VAR_11;
    BOOL VAR_12 = VAR_0;

    VAR_9 = FUNC_4(((void*)0),
                                ((void*)0),
                                VAR_1);
    if (VAR_9)
    {
        VAR_11 = FUNC_3(VAR_9);
        if (VAR_11)
        {
            VAR_10 = FUNC_5(VAR_9,
                               VAR_5,
                               VAR_2);
            if (VAR_10)
            {
                if (FUNC_0(VAR_10,
                                         VAR_6,
                                         VAR_3,
                                         VAR_3,
                                         ((void*)0),
                                         ((void*)0),
                                         ((void*)0),
                                         ((void*)0),
                                         VAR_7,
                                         VAR_8,
                                         ((void*)0)))
                {
                    VAR_12 = VAR_4;
                }

                FUNC_1(VAR_10);
            }

            FUNC_6(VAR_11);
        }

        FUNC_1(VAR_9);
    }

    if (!VAR_12)
        FUNC_2();

    return VAR_12;
}
