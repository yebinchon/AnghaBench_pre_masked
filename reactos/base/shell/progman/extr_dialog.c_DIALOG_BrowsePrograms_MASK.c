
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int INT ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (int **,int ,char*) ;
 int FUNC_1 (int ,int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static
BOOL
FUNC_2(HWND VAR_3, LPWSTR VAR_4, INT VAR_5)
{
    WCHAR VAR_6[2 * VAR_2 + 100];
    LPWSTR VAR_7 = VAR_6;

    FUNC_0(&VAR_7, VAR_1 , L"*.exe;*.pif;*.com;*.bat;*.cmd");
    FUNC_0(&VAR_7, VAR_0, L"*.*");

    return FUNC_1(VAR_3, VAR_6, VAR_4, VAR_5);
}
