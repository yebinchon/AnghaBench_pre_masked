
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static BOOL FUNC_1( const WCHAR *VAR_2, const WCHAR *VAR_3 )
{
    const WCHAR *VAR_4 = VAR_2, *VAR_5 = VAR_3;

    while (*VAR_4 && *VAR_5)
    {
        if (*VAR_5 == '%')
        {
            while (*VAR_5 == '%') VAR_5++;
            if (!*VAR_5) return VAR_1;
            while (*VAR_4 && *VAR_5 && FUNC_0( *VAR_4 ) == FUNC_0( *VAR_5 )) { VAR_4++; VAR_5++; };
            if (!*VAR_4 && !*VAR_5) return VAR_1;
        }
        if (*VAR_5 != '%' && FUNC_0( *VAR_4++ ) != FUNC_0( *VAR_5++ )) return VAR_0;
    }
    return VAR_1;
}
