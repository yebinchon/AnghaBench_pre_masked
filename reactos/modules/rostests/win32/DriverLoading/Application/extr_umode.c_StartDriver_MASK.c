
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SC_HANDLE ;
typedef int LPCWSTR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char*,char*) ;

BOOL
FUNC_6(LPCWSTR VAR_6)
{
    SC_HANDLE VAR_7;
    SC_HANDLE VAR_8;
    BOOL VAR_9;

    VAR_7 = FUNC_2(((void*)0),
                                ((void*)0),
                                VAR_3);
    if (!VAR_7)
        return VAR_2;

    VAR_8 = FUNC_3(VAR_7,
                            VAR_6,
                            VAR_4);
    if (!VAR_8)
    {
        FUNC_0(VAR_7);
        return VAR_2;
    }

    VAR_9 = FUNC_4(VAR_8, 0, ((void*)0));
    if (!VAR_9)
    {
        if (FUNC_1() == VAR_1)
        {
            FUNC_5(L"%s.sys already running\n", VAR_0);
            VAR_9 = VAR_5;
        }
    }

    FUNC_0(VAR_8);
    FUNC_0(VAR_7);

    return VAR_9;
}
