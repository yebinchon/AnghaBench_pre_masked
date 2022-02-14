
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int * LPCWSTR ;
typedef int HKEY ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ) ;
 int VAR_3 ;

UINT FUNC_7(LPCWSTR VAR_4, HKEY* VAR_5, BOOL VAR_6)
{
    WCHAR VAR_7[VAR_2], VAR_8[0x200];

    if (!FUNC_4( VAR_4, VAR_7 )) return VAR_0;
    FUNC_2("%s squashed %s\n", FUNC_3(VAR_4), FUNC_3(VAR_7));

    FUNC_6(VAR_8, VAR_3);
    FUNC_5( VAR_8, VAR_7 );

    if (VAR_6) return FUNC_0(VAR_1, VAR_8, VAR_5);
    return FUNC_1(VAR_1, VAR_8, VAR_5);
}
