
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int REGSAM ;
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
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int,int *) ;
 int VAR_5 ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int *,int *) ;
 int VAR_6 ;

UINT FUNC_10(LPCWSTR VAR_7, LPCWSTR VAR_8)
{
    REGSAM VAR_9 = VAR_4 | VAR_3;
    WCHAR *VAR_10, VAR_11[VAR_5], VAR_12[0x200];
    HKEY VAR_13;
    LONG VAR_14;

    if (!FUNC_9( VAR_7, VAR_11 )) return VAR_0;
    FUNC_5("%s squashed %s\n", FUNC_6(VAR_7), FUNC_6(VAR_11));

    if (!VAR_8)
    {
        if (!(VAR_10 = FUNC_7()))
        {
            FUNC_0("Failed to retrieve user SID\n");
            return VAR_0;
        }
        FUNC_8(VAR_12, VAR_6, VAR_10);
        FUNC_1(VAR_10);
    }
    else
        FUNC_8(VAR_12, VAR_6, VAR_8);

    if (FUNC_4(VAR_2, VAR_12, 0, VAR_9, &VAR_13)) return VAR_1;
    VAR_14 = FUNC_3( VAR_13, VAR_11 );
    FUNC_2(VAR_13);
    return VAR_14;
}
