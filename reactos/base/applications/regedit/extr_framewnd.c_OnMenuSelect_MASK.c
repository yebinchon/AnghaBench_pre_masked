
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int* LPWSTR ;
typedef int LPARAM ;
typedef int HWND ;
typedef scalar_t__ HMENU ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int,int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int* FUNC_3 (int*,int) ;
 int FUNC_4 (int*,char*) ;

__attribute__((used)) static void FUNC_5(HWND VAR_4, UINT VAR_5, UINT VAR_6, HMENU VAR_7)
{
    WCHAR VAR_8[100];

    FUNC_4(VAR_8, L"");
    if (VAR_6 & VAR_0)
    {
        if (VAR_7 != FUNC_0(VAR_4))
        {
            if (VAR_5 == 2) VAR_5 = 5;
        }
    }
    if (FUNC_1(VAR_2, VAR_5, VAR_8, 100))
    {

        LPWSTR VAR_9 = VAR_8;

        VAR_9 = FUNC_3(VAR_9, L'\n');
        if (VAR_9 != ((void*)0))
            *VAR_9 = L'\0';
    }
    FUNC_2(VAR_3, VAR_1, 0, (LPARAM)VAR_8);
}
