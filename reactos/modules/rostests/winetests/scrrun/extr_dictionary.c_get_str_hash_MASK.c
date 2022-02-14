
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int DWORD ;
typedef scalar_t__ CompareMethod ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__ const) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static DWORD FUNC_3(const WCHAR *VAR_2, CompareMethod VAR_3)
{
    DWORD VAR_4 = 0;

    while (*VAR_2) {
        WCHAR VAR_5;

        if (VAR_3 == VAR_1 || VAR_3 == VAR_0)
            VAR_5 = FUNC_2(FUNC_0(FUNC_1(*VAR_2)));
        else
            VAR_5 = *VAR_2;

        VAR_4 += (VAR_4 << 4) + VAR_5;
        VAR_2++;
    }

    return VAR_4 % 1201;
}
