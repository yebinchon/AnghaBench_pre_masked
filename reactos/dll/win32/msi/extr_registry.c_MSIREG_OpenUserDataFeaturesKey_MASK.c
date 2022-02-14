
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
 int FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int *,int ,int *,int ,int,int *,int *,int *) ;
 int FUNC_3 (int ,int *,int ,int,int *) ;
 int VAR_5 ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int ,int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int * VAR_6 ;
 int VAR_7 ;

UINT FUNC_9(LPCWSTR VAR_8, LPCWSTR VAR_9, MSIINSTALLCONTEXT VAR_10,
                                    HKEY *VAR_11, BOOL VAR_12)
{
    REGSAM VAR_13 = VAR_3 | VAR_2;
    WCHAR VAR_14[VAR_5], VAR_15[0x200], *VAR_16 = ((void*)0);

    if (!FUNC_8( VAR_8, VAR_14 )) return VAR_0;
    FUNC_4("%s squashed %s\n", FUNC_5(VAR_8), FUNC_5(VAR_14));

    if (VAR_10 == VAR_4)
    {
        FUNC_7( VAR_15, VAR_7, VAR_6, VAR_14 );
    }
    else
    {
        if (!VAR_9)
        {
            if (!(VAR_16 = FUNC_6()))
            {
                FUNC_0("Failed to retrieve user SID\n");
                return VAR_0;
            }
            VAR_9 = VAR_16;
        }
        FUNC_7( VAR_15, VAR_7, VAR_9, VAR_14 );
        FUNC_1(VAR_16);
    }
    if (VAR_12) return FUNC_2(VAR_1, VAR_15, 0, ((void*)0), 0, VAR_13, ((void*)0), VAR_11, ((void*)0));
    return FUNC_3(VAR_1, VAR_15, 0, VAR_13, VAR_11);
}
