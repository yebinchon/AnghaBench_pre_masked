
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SC_HANDLE ;
typedef int LPCWSTR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int ,int ,int ,int ,int ,int *,int *,int *,int *,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int VAR_9 ;

BOOL
FUNC_5(LPCWSTR VAR_10,
               LPCWSTR VAR_11)
{
    SC_HANDLE VAR_12;
    SC_HANDLE VAR_13;

    VAR_12 = FUNC_3(((void*)0),
                                ((void*)0),
                                VAR_4);
    if (!VAR_12)
        return VAR_3;

retry:
    VAR_13 = FUNC_1(VAR_12,
                              VAR_10,
                              VAR_10,
                              VAR_5,
                              VAR_8,
                              VAR_6,
                              VAR_7,
                              VAR_11,
                              ((void*)0),
                              ((void*)0),
                              ((void*)0),
                              ((void*)0),
                              ((void*)0));

    if (VAR_13)
    {
        FUNC_0(VAR_13);
        FUNC_0(VAR_12);
        return VAR_9;
    }
    else
    {
        DWORD VAR_14 = FUNC_2();

        if (VAR_14 == VAR_2)
        {
            FUNC_4(VAR_0);
            goto retry;
        }

        FUNC_0(VAR_12);


        return (VAR_14 == VAR_1);
    }
}
