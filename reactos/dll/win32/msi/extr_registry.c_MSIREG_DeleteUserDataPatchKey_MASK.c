
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int REGSAM ;
typedef scalar_t__ MSIINSTALLCONTEXT ;
typedef int * LPCWSTR ;
typedef int LONG ;
typedef int HKEY ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int,int *) ;
 int VAR_6 ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int *,int *) ;
 int * VAR_7 ;
 int VAR_8 ;

UINT FUNC_10(LPCWSTR VAR_9, MSIINSTALLCONTEXT VAR_10)
{
    REGSAM VAR_11 = VAR_4 | VAR_3;
    WCHAR *VAR_12, VAR_13[VAR_6], VAR_14[0x200];
    HKEY VAR_15;
    LONG VAR_16;

    if (!FUNC_9( VAR_9, VAR_13 )) return VAR_0;
    FUNC_5("%s squashed %s\n", FUNC_6(VAR_9), FUNC_6(VAR_13));

    if (VAR_10 == VAR_5)
        FUNC_8(VAR_14, VAR_8, VAR_7);
    else
    {
        if (!(VAR_12 = FUNC_7()))
        {
            FUNC_0("Failed to retrieve user SID\n");
            return VAR_0;
        }
        FUNC_8(VAR_14, VAR_8, VAR_12);
        FUNC_1(VAR_12);
    }
    if (FUNC_4(VAR_2, VAR_14, 0, VAR_11, &VAR_15)) return VAR_1;
    VAR_16 = FUNC_3( VAR_15, VAR_13 );
    FUNC_2(VAR_15);
    return VAR_16;
}
