
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int ULONG_PTR ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,char*,int) ;

const char *FUNC_3( const WCHAR *VAR_0, int VAR_1 )
{
    char *VAR_2, *VAR_3;
    size_t VAR_4;
    static char VAR_5[256];

    if (!((ULONG_PTR)VAR_0 >> 16))
    {
        if (!VAR_0) return "(null)";
        VAR_3 = VAR_5;
        FUNC_2( VAR_3, "#%04x", FUNC_0(VAR_0) );
        return VAR_3;
    }
    if (VAR_1 == -1)
    {
        const WCHAR *VAR_6 = VAR_0;
        while (*VAR_6) VAR_6++;
        VAR_1 = VAR_6 - VAR_0;
    }
    if (VAR_1 < 0) VAR_1 = 0;
    VAR_4 = 12 + FUNC_1( 300, VAR_1 * 5 );
    VAR_2 = VAR_3 = VAR_5;
    *VAR_2++ = 'L';
    *VAR_2++ = '"';
    while (VAR_1-- > 0 && VAR_2 <= VAR_3 + VAR_4 - 10)
    {
        WCHAR VAR_7 = *VAR_0++;
        switch (VAR_7)
        {
        case '\n': *VAR_2++ = '\\'; *VAR_2++ = 'n'; break;
        case '\r': *VAR_2++ = '\\'; *VAR_2++ = 'r'; break;
        case '\t': *VAR_2++ = '\\'; *VAR_2++ = 't'; break;
        case '"': *VAR_2++ = '\\'; *VAR_2++ = '"'; break;
        case '\\': *VAR_2++ = '\\'; *VAR_2++ = '\\'; break;
        default:
            if (VAR_7 >= ' ' && VAR_7 <= 126)
                *VAR_2++ = VAR_7;
            else
            {
                *VAR_2++ = '\\';
                FUNC_2(VAR_2,"%04x",VAR_7);
                VAR_2+=4;
            }
        }
    }
    *VAR_2++ = '"';
    if (VAR_1 > 0)
    {
        *VAR_2++ = '.';
        *VAR_2++ = '.';
        *VAR_2++ = '.';
    }
    *VAR_2++ = 0;
    return VAR_3;
}
