
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPWSTR ;
typedef int DWORD ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char) ;

__attribute__((used)) static LPWSTR FUNC_5(LPWSTR VAR_0, LPWSTR VAR_1)
{
    LPWSTR VAR_2, VAR_3;
    DWORD VAR_4, VAR_5;

    VAR_3 = FUNC_4(VAR_0, '\\');
    VAR_4 = VAR_3 - VAR_0 + 1;

    VAR_5 = VAR_4 + FUNC_2(VAR_1) + 1;
    VAR_2 = FUNC_3(VAR_5 * sizeof(WCHAR));

    FUNC_1(VAR_2, VAR_0, VAR_4 + 1);
    FUNC_0(VAR_2, VAR_1);

    return VAR_2;
}
