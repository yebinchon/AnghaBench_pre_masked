
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPCWSTR ;
typedef int GFRI_ENTRY ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int*,int *,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*,int *) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void
FUNC_5(LPCWSTR VAR_1, const GFRI_ENTRY *VAR_2)
{
    BOOL VAR_3;
    DWORD VAR_4, VAR_5 = 4;
    WCHAR VAR_6[VAR_0];


    VAR_4 = 0;
    VAR_3 = FUNC_0(VAR_1, &VAR_4, ((void*)0), VAR_5);
    FUNC_4(VAR_3, 1);
    FUNC_4(VAR_4, (FUNC_2(VAR_1) + 1) * sizeof(WCHAR));


    VAR_4 = VAR_0;
    VAR_3 = FUNC_0(VAR_1, &VAR_4, ((void*)0), VAR_5);
    FUNC_4(VAR_3, 0);
    FUNC_4(VAR_4, VAR_0);


    VAR_4 = 0;
    VAR_3 = FUNC_0(VAR_1, &VAR_4, VAR_6, VAR_5);
    FUNC_4(VAR_3, 1);
    FUNC_4(VAR_4, (FUNC_2(VAR_1) + 1) * sizeof(WCHAR));


    VAR_4 = VAR_0;
    VAR_3 = FUNC_0(VAR_1, &VAR_4, VAR_6, VAR_5);
    FUNC_4(VAR_3, 1);
    FUNC_4(VAR_4, (FUNC_2(VAR_1) + 1) * sizeof(WCHAR));
    FUNC_3(FUNC_1(VAR_1, VAR_6) == 0, "data mismatched: \"%S\"\n", VAR_6);
}
