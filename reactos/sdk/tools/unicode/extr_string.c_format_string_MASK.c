
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int,size_t) ;
 int FUNC_4 (int const*) ;

__attribute__((used)) static size_t FUNC_5( WCHAR *VAR_0, size_t VAR_1, const char *VAR_2, const WCHAR *VAR_3, int VAR_4 )
{
    size_t VAR_5 = 0;
    int VAR_6, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;

    FUNC_0( *VAR_2 == '%' );
    VAR_2++;

    while (*VAR_2 == '0' || *VAR_2 == '+' || *VAR_2 == '-' || *VAR_2 == ' ' || *VAR_2 == '#')
    {
        if (*VAR_2 == '-') VAR_7 = 1;
        VAR_2++;
    }

    while (FUNC_1(*VAR_2)) VAR_8 = VAR_8 * 10 + *VAR_2++ - '0';

    if (VAR_4 == -1) VAR_4 = FUNC_4( VAR_3 );
    if (*VAR_2 == '.')
    {
        VAR_2++;
        while (FUNC_1(*VAR_2)) VAR_9 = VAR_9 * 10 + *VAR_2++ - '0';
        if (VAR_9 > VAR_4) VAR_9 = VAR_4;
    }
    else VAR_9 = VAR_4;

    if (*VAR_2 == 'h' || *VAR_2 == 'l') VAR_2++;

    FUNC_0( *VAR_2 == 's' );

    if (!VAR_7 && VAR_8 > VAR_9)
    {
        for (VAR_6 = 0; VAR_6 < VAR_8 - VAR_9; VAR_6++)
        {
            if (VAR_5++ < VAR_1)
                *VAR_0++ = ' ';
        }
    }

    if (VAR_5 < VAR_1)
        FUNC_2( VAR_0, VAR_3, FUNC_3( VAR_9, VAR_1 - VAR_5 ) * sizeof(WCHAR) );
    VAR_5 += VAR_9;
    VAR_0 += VAR_9;

    if (VAR_7 && VAR_8 > VAR_9)
    {
        for (VAR_6 = 0; VAR_6 < VAR_8 - VAR_9; VAR_6++)
        {
            if (VAR_5++ < VAR_1)
                *VAR_0++ = ' ';
        }
    }
    return VAR_5;
}
