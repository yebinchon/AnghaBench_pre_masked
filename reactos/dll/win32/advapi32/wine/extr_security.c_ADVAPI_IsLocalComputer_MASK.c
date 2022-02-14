
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPWSTR ;
typedef char* LPCWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;

BOOL FUNC_4(LPCWSTR VAR_2)
{
    DWORD VAR_3 = VAR_0 + 1;
    BOOL VAR_4;
    LPWSTR VAR_5;

    if (!VAR_2 || !VAR_2[0])
        return VAR_1;

    VAR_5 = FUNC_1(VAR_3 * sizeof(WCHAR));
    VAR_4 = FUNC_0(VAR_5, &VAR_3);
    if (VAR_4 && (VAR_2[0] == '\\') && (VAR_2[1] == '\\'))
        VAR_2 += 2;
    VAR_4 = VAR_4 && !FUNC_3(VAR_2, VAR_5);
    FUNC_2(VAR_5);

    return VAR_4;
}
