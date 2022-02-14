
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int ,int *,int ,int,int *,int *,int *) ;
 int FUNC_1 (int ,int *,int ,int,int *) ;
 int VAR_4 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ) ;
 int VAR_5 ;

__attribute__((used)) static UINT FUNC_7(LPCWSTR VAR_6, HKEY *VAR_7, BOOL VAR_8)
{
    REGSAM VAR_9 = VAR_3 | VAR_2;
    WCHAR VAR_10[VAR_4], VAR_11[0x200];

    if (!FUNC_4( VAR_6, VAR_10 )) return VAR_0;
    FUNC_2("%s squashed %s\n", FUNC_3(VAR_6), FUNC_3(VAR_10));

    FUNC_6(VAR_11, VAR_5);
    FUNC_5( VAR_11, VAR_10 );

    if (VAR_8) return FUNC_0(VAR_1, VAR_11, 0, ((void*)0), 0, VAR_9, ((void*)0), VAR_7, ((void*)0));
    return FUNC_1(VAR_1, VAR_11, 0, VAR_9, VAR_7);
}
