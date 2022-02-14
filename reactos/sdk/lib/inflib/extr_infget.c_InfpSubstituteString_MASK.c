
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__* PWSTR ;
typedef int PINFCACHE ;
typedef char* PCWSTR ;


 char* FUNC_0 (int ,char const*,size_t*,int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*,char const*,size_t) ;

__attribute__((used)) static size_t
FUNC_2(PINFCACHE VAR_1,
                     PCWSTR VAR_2,
                     PWSTR VAR_3,
                     size_t VAR_4)
{
    const WCHAR *VAR_5, *VAR_6, *VAR_7;
    size_t VAR_8, VAR_9 = 0;
    int VAR_10 = 0;

    if (!VAR_3) VAR_4 = VAR_0 + 1;
    for (VAR_7 = VAR_5 = VAR_2; *VAR_7; VAR_7++)
    {
        if (*VAR_7 != '%') continue;
        VAR_10 = !VAR_10;
        if (VAR_10)
        {
            VAR_8 = (VAR_7 - VAR_5);
            if (VAR_8 > VAR_4 - 1) VAR_8 = VAR_4 - 1;
            if (VAR_3) FUNC_1( VAR_3 + VAR_9, VAR_5, VAR_8 * sizeof(WCHAR) );
            VAR_9 += VAR_8;
            VAR_4 -= VAR_8;
            VAR_5 = VAR_7;
        }
        else
        {
            VAR_8 = (VAR_7 - VAR_5 - 1);
            VAR_6 = FUNC_0( VAR_1, VAR_5 + 1, &VAR_8, VAR_7[1] == '\\' );
            if (!VAR_6)
            {
                VAR_6 = VAR_5;
                VAR_8 = (VAR_7 - VAR_5 + 1);
            }
            if (VAR_8 > VAR_4 - 1) VAR_8 = VAR_4 - 1;
            if (VAR_3) FUNC_1( VAR_3 + VAR_9, VAR_6, VAR_8 * sizeof(WCHAR) );
            VAR_9 += VAR_8;
            VAR_4 -= VAR_8;
            VAR_5 = VAR_7 + 1;
        }
    }

    if (VAR_5 != VAR_7)
    {
        VAR_8 = (unsigned int)(VAR_7 - VAR_5);
        if (VAR_8 > VAR_4 - 1) VAR_8 = VAR_4 - 1;
        if (VAR_3) FUNC_1( VAR_3 + VAR_9, VAR_5, VAR_8 * sizeof(WCHAR) );
        VAR_9 += VAR_8;
    }
    if (VAR_3 && VAR_4) VAR_3[VAR_9] = 0;
    return VAR_9;
}
