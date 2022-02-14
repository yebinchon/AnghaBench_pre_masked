
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int REGSAM ;
typedef int * LPCWSTR ;
typedef int HKEY ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ,int *,int ,int,int *,int *,int *) ;
 int FUNC_3 (int ,int *,int ,int,int *) ;
 int VAR_4 ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int ,int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int VAR_5 ;

UINT FUNC_9(LPCWSTR VAR_6, LPCWSTR VAR_7, HKEY *VAR_8, BOOL VAR_9)
{
    REGSAM VAR_10 = VAR_3 | VAR_2;
    WCHAR *VAR_11, VAR_12[VAR_4], VAR_13[0x200];

    if (!FUNC_8( VAR_6, VAR_12 )) return VAR_0;
    FUNC_4("%s squashed %s\n", FUNC_5(VAR_6), FUNC_5(VAR_12));

    if (!VAR_7)
    {
        if (!(VAR_11 = FUNC_6()))
        {
            FUNC_0("Failed to retrieve user SID\n");
            return VAR_0;
        }
        FUNC_7( VAR_13, VAR_5, VAR_11, VAR_12 );
        FUNC_1(VAR_11);
    }
    else
        FUNC_7( VAR_13, VAR_5, VAR_7, VAR_12 );

    if (VAR_9) return FUNC_2(VAR_1, VAR_13, 0, ((void*)0), 0, VAR_10, ((void*)0), VAR_8, ((void*)0));
    return FUNC_3(VAR_1, VAR_13, 0, VAR_10, VAR_8);
}
