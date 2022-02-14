
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ UINT ;
typedef int REGSAM ;
typedef int * LPCWSTR ;
typedef int HKEY ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 int VAR_6 ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;

UINT FUNC_8(LPCWSTR VAR_9, HKEY *VAR_10, BOOL VAR_11)
{
    WCHAR VAR_12[VAR_6], VAR_13[0x200];
    REGSAM VAR_14 = VAR_5 | VAR_4;
    UINT VAR_15;

    if (!FUNC_5( VAR_9, VAR_12)) return VAR_1;
    FUNC_3("%s squashed %s\n", FUNC_4(VAR_9), FUNC_4(VAR_12));

    FUNC_7(VAR_13, VAR_8);
    FUNC_6( VAR_13, VAR_12 );

    if (VAR_11) return FUNC_0(VAR_2, VAR_13, VAR_10);
    VAR_15 = FUNC_2(VAR_2, VAR_13, VAR_10);
    if (VAR_15 != VAR_0) return VAR_15;

    FUNC_7(VAR_13, VAR_7);
    FUNC_6( VAR_13, VAR_12 );
    return FUNC_1( VAR_3, VAR_13, 0, VAR_14, VAR_10 );
}
