
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
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int *) ;
 int * FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int *,int ,int *,int ,int **) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int *,char*) ;

BOOL
FUNC_10(PRDPSETTINGS VAR_5,
                        LPWSTR VAR_6)
{
    WCHAR VAR_7[VAR_2];
    HANDLE VAR_8;
    BOOL VAR_9 = VAR_1;


    if (VAR_6 == ((void*)0))
    {
        HRESULT VAR_10;
        LPITEMIDLIST VAR_11= ((void*)0);

        VAR_10 = FUNC_7(((void*)0),
                                 VAR_0,
                                 ((void*)0),
                                 0,
                                 &VAR_11);
        if (VAR_10 == VAR_3)
        {
            if (FUNC_8(VAR_11, VAR_7))
            {
                FUNC_9(VAR_7, L"\\Default.rdp");
                VAR_6 = VAR_7;
                FUNC_1(VAR_11);
            }
        }
    }

    if (VAR_6)
    {
        LPWSTR VAR_12 = ((void*)0);

        VAR_8 = FUNC_4(VAR_6, VAR_1);
        if (VAR_8)
        {
            VAR_12 = FUNC_6(VAR_8);
            if (VAR_12)
            {
                FUNC_5(VAR_5, VAR_12);

                FUNC_3(FUNC_2(),
                         0,
                         VAR_12);

                VAR_9 = VAR_4;
            }

            FUNC_0(VAR_8);
        }
    }

    return VAR_9;
}
