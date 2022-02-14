
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_file {int dummy; } ;
typedef char WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct inf_file const*,char const*,unsigned int*,int) ;
 int FUNC_1 (char*,char const*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2( const struct inf_file *VAR_2, const WCHAR *VAR_3,
                                          WCHAR *VAR_4, unsigned int VAR_5 )
{
    const WCHAR *VAR_6, *VAR_7, *VAR_8;
    unsigned int VAR_9, VAR_10 = 0;
    BOOL VAR_11 = VAR_0;

    if (!VAR_4) VAR_5 = VAR_1 + 1;
    for (VAR_8 = VAR_6 = VAR_3; *VAR_8; VAR_8++)
    {
        if (*VAR_8 != '%') continue;
        VAR_11 = !VAR_11;
        if (VAR_11)
        {
            VAR_9 = VAR_8 - VAR_6;
            if (VAR_9 > VAR_5 - 1) VAR_9 = VAR_5 - 1;
            if (VAR_4) FUNC_1( VAR_4 + VAR_10, VAR_6, VAR_9 * sizeof(WCHAR) );
            VAR_10 += VAR_9;
            VAR_5 -= VAR_9;
            VAR_6 = VAR_8;
        }
        else
        {
            VAR_9 = VAR_8 - VAR_6 - 1;
            VAR_7 = FUNC_0( VAR_2, VAR_6 + 1, &VAR_9, VAR_8[1] == '\\' );
            if (!VAR_7)
            {
                VAR_7 = VAR_6;
                VAR_9 = VAR_8 - VAR_6 + 1;
            }
            if (VAR_9 > VAR_5 - 1) VAR_9 = VAR_5 - 1;
            if (VAR_4) FUNC_1( VAR_4 + VAR_10, VAR_7, VAR_9 * sizeof(WCHAR) );
            VAR_10 += VAR_9;
            VAR_5 -= VAR_9;
            VAR_6 = VAR_8 + 1;
        }
    }

    if (VAR_6 != VAR_8)
    {
        VAR_9 = VAR_8 - VAR_6;
        if (VAR_9 > VAR_5 - 1) VAR_9 = VAR_5 - 1;
        if (VAR_4) FUNC_1( VAR_4 + VAR_10, VAR_6, VAR_9 * sizeof(WCHAR) );
        VAR_10 += VAR_9;
    }
    if (VAR_4 && VAR_5) VAR_4[VAR_10] = 0;
    return VAR_10;
}
