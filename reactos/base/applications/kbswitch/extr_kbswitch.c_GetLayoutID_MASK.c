
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szTempLCID ;
typedef int TCHAR ;
typedef int SIZE_T ;
typedef int * LPTSTR ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int *,int *,int ,scalar_t__*) ;
 int FUNC_3 (int *,int ,int *) ;
 int VAR_5 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static BOOL
FUNC_5(LPTSTR VAR_6, LPTSTR VAR_7, SIZE_T VAR_8)
{
    DWORD VAR_9;
    DWORD VAR_10;
    HKEY VAR_11;
    TCHAR VAR_12[VAR_0 + 1];


    if (FUNC_1(VAR_3, FUNC_4("Keyboard Layout\\Preload"), 0, VAR_4, &VAR_11) == VAR_1)
    {
        VAR_9 = sizeof(VAR_12);
        VAR_10 = FUNC_2(VAR_11, VAR_6, ((void*)0), ((void*)0), (LPBYTE)VAR_12, &VAR_9);

        if (VAR_10 != VAR_1)
        {
            FUNC_0(VAR_11);
            return VAR_2;
        }

        FUNC_0(VAR_11);
    }


    if (FUNC_1(VAR_3, FUNC_4("Keyboard Layout\\Substitutes"), 0, VAR_4, &VAR_11) == VAR_1)
    {
        VAR_9 = sizeof(VAR_12);

        if (FUNC_2(VAR_11, VAR_12, ((void*)0), ((void*)0), (LPBYTE)VAR_7, &VAR_9) != VAR_1)
        {

            FUNC_3(VAR_7, VAR_8, VAR_12);
        }

        FUNC_0(VAR_11);
    }
    else
    {

        FUNC_3(VAR_7, VAR_8, VAR_12);
    }

    return VAR_5;
}
