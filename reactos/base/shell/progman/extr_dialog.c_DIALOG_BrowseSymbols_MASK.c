
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static
BOOL
FUNC_2(HWND VAR_6, LPWSTR VAR_7, INT VAR_8)
{
    WCHAR VAR_9[5 * VAR_5 + 100];
    LPWSTR VAR_10 = VAR_9;

    FUNC_0(&VAR_10, VAR_4, L"*.ico;*.exe;*.dll");
    FUNC_0(&VAR_10, VAR_2, L"*.exe");
    FUNC_0(&VAR_10, VAR_1, L"*.dll");
    FUNC_0(&VAR_10, VAR_3, L"*.ico");
    FUNC_0(&VAR_10, VAR_0, L"*.*");

    return FUNC_1(VAR_6, VAR_9, VAR_7, VAR_8);
}
