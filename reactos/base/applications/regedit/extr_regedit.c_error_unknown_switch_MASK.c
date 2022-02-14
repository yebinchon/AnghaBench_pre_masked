
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int* LPWSTR ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,int) ;
 char* FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(WCHAR VAR_1, LPWSTR VAR_2)
{
    if (FUNC_3(VAR_1))
    {
        FUNC_1(VAR_0, L"%s: Undefined switch /%c!\n", FUNC_2(), VAR_1);
    }
    else
    {
        FUNC_1(VAR_0, L"%s: Alphabetic character is expected after '%c' "
                          L"in switch specification\n", FUNC_2(), *(VAR_2 - 1));
    }
    FUNC_0(1);
}
