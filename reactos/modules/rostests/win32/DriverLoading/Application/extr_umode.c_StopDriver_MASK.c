
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SERVICE_STATUS ;
typedef int SC_HANDLE ;
typedef int LPCWSTR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (char*,char*) ;

BOOL
FUNC_6(LPCWSTR VAR_7)
{
    SC_HANDLE VAR_8;
    SC_HANDLE VAR_9;
    SERVICE_STATUS VAR_10;
    BOOL VAR_11;

    VAR_8 = FUNC_3(((void*)0),
                                ((void*)0),
                                VAR_3);
    if (!VAR_8)
        return VAR_2;

    VAR_9 = FUNC_4(VAR_8,
                            VAR_7,
                            VAR_4);
    if (!VAR_9)
    {
        FUNC_0(VAR_8);
        return VAR_2;
    }

    VAR_11 = FUNC_1(VAR_9,
                          VAR_5,
                          &VAR_10);
    if (!VAR_11)
    {
        if (FUNC_2() == VAR_1)
        {
            FUNC_5(L"%s.sys wasn't running\n", VAR_0);
            VAR_11 = VAR_6;
        }
    }

    FUNC_0(VAR_9);
    FUNC_0(VAR_8);

    return VAR_11;
}
