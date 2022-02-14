
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int REGSAM ;
typedef scalar_t__ MSIINSTALLCONTEXT ;
typedef int * LPCWSTR ;
typedef int HKEY ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ,int *,int ,int *,int ,int,int *,int *,int *) ;
 int FUNC_3 (int ,int *,int ,int,int *) ;
 int VAR_8 ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int ,int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

UINT FUNC_11(LPCWSTR VAR_12, LPCWSTR VAR_13, MSIINSTALLCONTEXT VAR_14, HKEY *VAR_15, BOOL VAR_16)
{
    HKEY VAR_17 = VAR_2;
    REGSAM VAR_18 = VAR_4 | VAR_3;
    WCHAR *VAR_19 = ((void*)0), VAR_20[VAR_8], VAR_21[VAR_5];

    if (!FUNC_8( VAR_12, VAR_20 )) return VAR_0;
    FUNC_4("%s squashed %s\n", FUNC_5(VAR_12), FUNC_5(VAR_20));

    if (VAR_14 == VAR_6)
    {
        FUNC_10(VAR_21, VAR_9);
        FUNC_9( VAR_21, VAR_20 );
    }
    else if (VAR_14 == VAR_7)
    {
        VAR_17 = VAR_1;
        FUNC_10(VAR_21, VAR_11);
        FUNC_9( VAR_21, VAR_20 );
    }
    else
    {
        if (!VAR_13)
        {
            if (!(VAR_19 = FUNC_6()))
            {
                FUNC_0("Failed to retrieve user SID\n");
                return VAR_0;
            }
            VAR_13 = VAR_19;
        }
        FUNC_7( VAR_21, VAR_10, VAR_13, VAR_20 );
        FUNC_1(VAR_19);
    }
    if (VAR_16) return FUNC_2(VAR_17, VAR_21, 0, ((void*)0), 0, VAR_18, ((void*)0), VAR_15, ((void*)0));
    return FUNC_3(VAR_17, VAR_21, 0, VAR_18, VAR_15);
}
