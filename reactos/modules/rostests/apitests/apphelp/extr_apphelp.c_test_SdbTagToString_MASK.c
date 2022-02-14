
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef char WCHAR ;
typedef int TAG ;
typedef char const* LPCWSTR ;





 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (int,char*,int ,int ) ;
 char* FUNC_2 (int const) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(void)
{
    static const TAG VAR_0[] = {
        1, 128, 129,
        130 | 0xFF,
        130 | (0x800 + 0xEE),
        0x900, 0xFFFF, 0xDEAD, 0xBEEF
    };
    static const WCHAR VAR_1[] = {'I','n','v','a','l','i','d','T','a','g',0};
    LPCWSTR VAR_2;
    WORD VAR_3;

    for (VAR_3 = 0; VAR_3 < 9; ++VAR_3)
    {
        VAR_2 = FUNC_2(VAR_0[VAR_3]);
        FUNC_1(FUNC_0(VAR_2, VAR_1) == 0, "unexpected string %s, should be %s\n",
           FUNC_3(VAR_2), FUNC_3(VAR_1));
    }
}
