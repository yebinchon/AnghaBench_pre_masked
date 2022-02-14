
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPWSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,int ,int *,int ,int *,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

BOOL
FUNC_5(LPWSTR VAR_7)
{
    HANDLE VAR_8;
    HANDLE VAR_9;
    DWORD VAR_10, VAR_11;
    BOOL VAR_12 = VAR_1;

    VAR_8 = FUNC_3(((void*)0),
                                ((void*)0),
                                VAR_2);
    if (VAR_8)
    {
        VAR_9 = FUNC_4(VAR_8,
                                VAR_7,
                                VAR_4 | VAR_3);
        if (VAR_9)
        {

            if (!FUNC_1(VAR_9,
                                       VAR_5,
                                       ((void*)0),
                                       0,
                                       &VAR_10,
                                       &VAR_11))
            {
                 if (FUNC_2() == VAR_0)
                 {

                     VAR_12 = VAR_6;
                 }
            }

            FUNC_0(VAR_9);
        }

        FUNC_0(VAR_8);
    }

    return VAR_12;
}
