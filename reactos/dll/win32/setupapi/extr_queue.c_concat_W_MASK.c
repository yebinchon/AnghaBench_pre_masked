
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2( WCHAR *VAR_0, const WCHAR *VAR_1, const WCHAR *VAR_2, const WCHAR *VAR_3 )
{
    *VAR_0 = 0;
    if (VAR_1 && *VAR_1)
    {
        FUNC_0( VAR_0, VAR_1 );
        VAR_0 += FUNC_1(VAR_0 );
        if (VAR_0[-1] != '\\') *VAR_0++ = '\\';
        if (VAR_2) while (*VAR_2 == '\\') VAR_2++;
    }

    if (VAR_2)
    {
        FUNC_0( VAR_0, VAR_2 );
        VAR_0 += FUNC_1(VAR_0 );
        if (VAR_0[-1] != '\\') *VAR_0++ = '\\';
        if (VAR_3) while (*VAR_3 == '\\') VAR_3++;
    }

    if (VAR_3)
        FUNC_0( VAR_0, VAR_3 );
}
