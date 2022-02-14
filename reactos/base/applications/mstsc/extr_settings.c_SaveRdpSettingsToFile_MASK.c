
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int PRDPSETTINGS ;
typedef int * LPWSTR ;
typedef int * LPITEMIDLIST ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int ,int **) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int *,char*) ;

BOOL
FUNC_7(LPWSTR VAR_5,
                      PRDPSETTINGS VAR_6)
{
    WCHAR VAR_7[VAR_2];
    HANDLE VAR_8;
    BOOL VAR_9 = VAR_1;


    if (VAR_5 == ((void*)0))
    {
        HRESULT VAR_10;
        LPITEMIDLIST VAR_11= ((void*)0);

        VAR_10 = FUNC_3(((void*)0),
                                 VAR_0,
                                 ((void*)0),
                                 0,
                                 &VAR_11);
        if (VAR_10 == VAR_3)
        {
            if (FUNC_4(VAR_11, VAR_7))
            {
                FUNC_6(VAR_7, L"\\Default.rdp");
                VAR_5 = VAR_7;
                FUNC_1(VAR_11);
            }
        }
    }

    if (VAR_5)
    {
        VAR_8 = FUNC_2(VAR_5, VAR_4);
        if (VAR_8)
        {
            if (FUNC_5(VAR_8, VAR_6))
            {
                VAR_9 = VAR_4;
            }

            FUNC_0(VAR_8);
        }
    }

    return VAR_9;
}
